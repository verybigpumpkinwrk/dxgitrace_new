#include <stdio.h>
#include <Windows.h>
#include <process.h>
#include "Log.h"
#include "file_writer.h"


static FILE* fp = 0;
static HANDLE thread_id = NULL;

struct file_writer SysMemWriter = { 0 };
static volatile bool close_flag = false;
static volatile bool alive_flag = false;


uint32_t SysMemWriter_OpenFile(char* filename)
{
	Log("Open file: %s", filename);
	fp = fopen(filename, "wb");
	if(fp == 0){
		Log("dxgitrace_new error: can't open file for writing.");
		return -1;
	}

	thread_id = (HANDLE)_beginthreadex(NULL, 1024, SysMemWriter_ThreadFunc, NULL, CREATE_SUSPENDED, NULL);
	if(thread_id == 0){
		Log("dxgitrace_new error: failed to create sys_mem_writer thread.");
		return -1;
	}

	SysMemWriter.Bufs[0].pBase = (uint8_t*)malloc(SYSMEM_WRITER_MAX_BUF_SIZE);
	SysMemWriter.Bufs[1].pBase = (uint8_t*)malloc(SYSMEM_WRITER_MAX_BUF_SIZE);

	SysMemWriter.Bufs[0].pData = SysMemWriter.Bufs[0].pBase;
	SysMemWriter.Bufs[1].pData = SysMemWriter.Bufs[1].pBase;

	SysMemWriter.pBase = SysMemWriter.Bufs[0].pBase;
	SysMemWriter.pData = SysMemWriter.Bufs[0].pData;

	return 0;
}

uint32_t SysMemWriter_Flush(void)
{
	uint32_t new_n = (!SysMemWriter.curr_n) & 0x1;

	while(SysMemWriter.Bufs[new_n].locked == true){
		Log("Waiting SysMem buf write.");
		Sleep(0);
	}
	SysMemWriter.Bufs[SysMemWriter.curr_n].locked = true;
	SysMemWriter.Bufs[SysMemWriter.curr_n].pData = SysMemWriter.pData;

	SysMemWriter.curr_n = new_n;
	SysMemWriter.pBase = SysMemWriter.Bufs[new_n].pBase;
	SysMemWriter.pData = SysMemWriter.Bufs[new_n].pData; // should be == Buf[new_n].pBase
	
	ResumeThread(thread_id);

	return 0;
}

uint32_t __stdcall SysMemWriter_ThreadFunc(void* pArgList)
{
	alive_flag = true;

	while(close_flag == false){
		uint32_t buf_num = (!SysMemWriter.curr_n) & 0x1;

		Log("SysMemWriter writing %u bytes", SysMemWriter.Bufs[buf_num].pData - SysMemWriter.Bufs[buf_num].pBase);
		fwrite(SysMemWriter.Bufs[buf_num].pBase, 1, SysMemWriter.Bufs[buf_num].pData - SysMemWriter.Bufs[buf_num].pBase, fp);
		SysMemWriter.Bufs[buf_num].pData = SysMemWriter.Bufs[buf_num].pBase;
		SysMemWriter.Bufs[buf_num].locked = false;

		SuspendThread(thread_id);
	}
	//	fclose(fp);
	alive_flag = false;
	return 0;
}

void SysMemWriter_WriteBigData(uint32_t call_n, void* pData, uint32_t size)
{
	// can we place it in buffer?
	if((sizeof(struct SysMemHeader) + size) < SYSMEM_WRITER_MAX_BUF_SIZE){
		SysMemWriter_Reserve(sizeof(struct SysMemHeader) + size);
		SysMemWriter_WriteData(call_n, pData, size);
	}else{
		// if no use direct writing
		struct SysMemHeader Header;
		// wait until current write ends
		while(SysMemWriter.Bufs[(!SysMemWriter.curr_n) & 0x1].locked == true){
			Log("Wait before big write.");
			Sleep(0);
		}

		Header.call_n = call_n;
		Header.addr = pData;
		Header.size = size;

		Log("SysMemWriter direct writing %u bytes", sizeof(struct SysMemHeader) + size);
		fwrite(&Header, 1, sizeof(struct SysMemHeader), fp);
		fwrite(pData, 1, size, fp);
	}
}

uint32_t SysMemWriter_CloseFile(void)
{
	close_flag = true;
	ResumeThread(thread_id);

	while(WaitForSingleObject(thread_id, 0) == WAIT_TIMEOUT){
		Sleep(100);
		Log("SysMemWriter waiting.");
	}
	Log("SysMemWriter finishing with %u bytes", SysMemWriter.pData - SysMemWriter.pBase);
	fwrite(SysMemWriter.pBase, 1, SysMemWriter.pData - SysMemWriter.pBase, fp);

	free(SysMemWriter.Bufs[0].pBase);
	free(SysMemWriter.Bufs[1].pBase);

	fclose(fp);
	return 0;
}