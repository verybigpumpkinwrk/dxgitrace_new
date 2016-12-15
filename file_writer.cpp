#include <stdio.h>
#include <Windows.h>
#include <process.h>
#include "Log.h"
#include "file_writer.h"


static FILE* fp = 0;
static HANDLE thread_id = NULL;
struct file_writer FileWriter = { 0 };
volatile bool close_flag = false;
volatile bool alive_flag = false;

uint32_t FileWriter_OpenFile(char* filename)
{
	fp = fopen(filename, "wb");
	if(fp == 0){
		Log("dxgitrace_new error: can't open file for writing.");
		return -1;
	}

	thread_id = (HANDLE)_beginthreadex(NULL, 1024, FileWriter_ThreadFunc, NULL, CREATE_SUSPENDED, NULL);
	if(thread_id == 0){
		Log("dxgitrace_new error: failed to create file_writer thread.");
		return -1;
	}
	
	FileWriter.Bufs[0].pBase = (uint8_t*)malloc(FILE_WRITER_MAX_BUF_SIZE);
	FileWriter.Bufs[1].pBase = (uint8_t*)malloc(FILE_WRITER_MAX_BUF_SIZE);

	FileWriter.Bufs[0].pData = FileWriter.Bufs[0].pBase;
	FileWriter.Bufs[1].pData = FileWriter.Bufs[1].pBase;
	
	FileWriter.pBase = FileWriter.Bufs[0].pBase;
	FileWriter.pData = FileWriter.Bufs[0].pData;

	return 0;
}

uint32_t FileWriter_Flush(void)
{
	FileWriter.curr_n = (!FileWriter.curr_n) & 0x1;
	FileWriter.pBase = FileWriter.Bufs[FileWriter.curr_n].pBase;
	FileWriter.pBase = FileWriter.pData;

	ResumeThread(thread_id);

	return 0;
}

uint32_t __stdcall FileWriter_ThreadFunc(void* pArgList)
{
	alive_flag = true;

	while(close_flag == false){
		uint32_t buf_num = (!FileWriter.curr_n) & 0x1;

		fwrite(FileWriter.Bufs[buf_num].pBase, 1, FileWriter.Bufs[buf_num].pData - FileWriter.Bufs[buf_num].pBase, fp);
		FileWriter.Bufs[buf_num].pData = FileWriter.Bufs[buf_num].pBase;

		SuspendThread(thread_id);
	}
//	fclose(fp);
	alive_flag = false;
	return 0;
}

uint32_t FileWriter_CloseFile(void)
{
	close_flag = true;
	ResumeThread(thread_id);

	while(alive_flag == true){
		Sleep(100);
	}

	fwrite(FileWriter.pBase, 1, FileWriter.pData - FileWriter.pBase, fp);

	free(FileWriter.Bufs[0].pBase);
	free(FileWriter.Bufs[1].pBase);

	fclose(fp);
	return 0;
}