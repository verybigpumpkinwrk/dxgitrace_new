#pragma once
#include <stdint.h>
#include <assert.h>

#define FILE_WRITER_MAX_BUF_SIZE (1024 * 1024)

struct file_writer_buf
{
	uint8_t* pBase;
	uint8_t* pData;
};

struct file_writer
{
	uint8_t* pBase;
	uint8_t* pData;
	struct file_writer_buf Bufs[2];
	uint32_t curr_n;
};

extern file_writer FileWriter;

uint32_t FileWriter_OpenFile(char* filename);
uint32_t FileWriter_Flush(void);
uint32_t __stdcall FileWriter_ThreadFunc(void*);
uint32_t FileWriter_CloseFile(void);

inline static void FileWriter_Reserve(uint32_t size)
{
	//Log("FileWriter_Reserve");
	if((FileWriter.pData - FileWriter.pBase + size) >= FILE_WRITER_MAX_BUF_SIZE){
		// swap buffers
		FileWriter_Flush();
	}
}

inline static void FileWriter_WriteImmediate4(uint32_t data)
{
	//Log("FileWriter_WriteImmediate4");
	*(uint32_t*)FileWriter.pData = data;
	FileWriter.pData = FileWriter.pData + 4;
}

// for writing chunks
inline static uint32_t FileWriter_WriteData(uint8_t* pData, uint32_t size)
{
	assert((FileWriter.pData - FileWriter.pBase + size) < FILE_WRITER_MAX_BUF_SIZE);

	memcpy(FileWriter.pData, pData, size);
	FileWriter.pData = FileWriter.pData + size;
}