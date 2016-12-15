#include <stdio.h>
#include <Windows.h>
#include <process.h>
#include "Log.h"
#include "file_writer.h"


static FILE* fp = 0;
static HANDLE thread_id = NULL;
struct file_writer CallWriter = { 0 };
static volatile bool close_flag = false;
static volatile bool alive_flag = false;

uint32_t CallWriter_OpenFile(char* filename)
{
	fp = fopen(filename, "wb");
	if(fp == 0){
		Log("dxgitrace_new error: can't open file for writing.");
		return -1;
	}

	thread_id = (HANDLE)_beginthreadex(NULL, 1024, CallWriter_ThreadFunc, NULL, CREATE_SUSPENDED, NULL);
	if(thread_id == 0){
		Log("dxgitrace_new error: failed to create call_writer thread.");
		return -1;
	}
	
	CallWriter.Bufs[0].pBase = (uint8_t*)malloc(CALL_WRITER_MAX_BUF_SIZE);
	CallWriter.Bufs[1].pBase = (uint8_t*)malloc(CALL_WRITER_MAX_BUF_SIZE);

	CallWriter.Bufs[0].pData = CallWriter.Bufs[0].pBase;
	CallWriter.Bufs[1].pData = CallWriter.Bufs[1].pBase;
	
	CallWriter.pBase = CallWriter.Bufs[0].pBase;
	CallWriter.pData = CallWriter.Bufs[0].pData;

	return 0;
}

uint32_t CallWriter_Flush(void)
{
	uint32_t new_n = (!CallWriter.curr_n) & 0x1;

	while(CallWriter.Bufs[new_n].locked == true){
		Log("Waiting call buf write.");
		Sleep(0);
	}
	CallWriter.Bufs[new_n].locked = true;

	CallWriter.curr_n = new_n;
	CallWriter.pBase = CallWriter.Bufs[new_n].pBase;
	CallWriter.pData = CallWriter.Bufs[new_n].pData;

	ResumeThread(thread_id);

	return 0;
}

uint32_t __stdcall CallWriter_ThreadFunc(void* pArgList)
{
	alive_flag = true;

	while(close_flag == false){
		uint32_t buf_num = (!CallWriter.curr_n) & 0x1;

		fwrite(CallWriter.Bufs[buf_num].pBase, 1, CallWriter.Bufs[buf_num].pData - CallWriter.Bufs[buf_num].pBase, fp);
		CallWriter.Bufs[buf_num].pData = CallWriter.Bufs[buf_num].pBase;
		CallWriter.Bufs[buf_num].locked = false;
		
		SuspendThread(thread_id);
	}

	alive_flag = false;
	return 0;
}

uint32_t CallWriter_CloseFile(void)
{
	close_flag = true;
	ResumeThread(thread_id);

	while(WaitForSingleObject(thread_id, 0) == WAIT_TIMEOUT){
		Sleep(100);
		Log("CallWriter waiting.");
	}

	fwrite(CallWriter.pBase, 1, CallWriter.pData - CallWriter.pBase, fp);

	free(CallWriter.Bufs[0].pBase);
	free(CallWriter.Bufs[1].pBase);

	fclose(fp);
	return 0;
}