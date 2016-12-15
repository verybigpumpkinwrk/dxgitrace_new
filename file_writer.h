#pragma once
#include <stdint.h>
#include <assert.h>

#define CALL_WRITER_MAX_BUF_SIZE (1024 * 1024)
#define SYSMEM_WRITER_MAX_BUF_SIZE (8 * 1024 * 1024)

#ifdef WIN32
typedef uint32_t arg_t;
#else
typedef uint64_t arg_t;
#endif

struct file_writer_buf
{
	uint8_t* pBase;
	uint8_t* pData;
	volatile bool locked;
};

struct file_writer
{
	uint8_t* pBase;
	uint8_t* pData;
	struct file_writer_buf Bufs[2];
	uint32_t curr_n;
};

extern file_writer CallWriter;
extern file_writer SysMemWriter;

uint32_t CallWriter_OpenFile(char* filename);
uint32_t CallWriter_Flush(void);
uint32_t __stdcall CallWriter_ThreadFunc(void*);
uint32_t CallWriter_CloseFile(void);

uint32_t SysMemWriter_OpenFile(char* filename);
uint32_t SysMemWriter_Flush(void);
uint32_t __stdcall SysMemWriter_ThreadFunc(void*);
uint32_t SysMemWriter_CloseFile(void);
void SysMemWriter_WriteBigData(uint32_t call_n, void* pData, uint32_t size);

// inline functions
inline static void CallWriter_Reserve(uint32_t size)
{
	//Log("CallWriter_Reserve");
	if((CallWriter.pData - CallWriter.pBase + size) >= CALL_WRITER_MAX_BUF_SIZE){
		// swap buffers
		CallWriter_Flush();
	}
}

inline static void CallWriter_WriteImmediate4(uint32_t data)
{
	//Log("CallWriter_WriteImmediate4");
	*(uint32_t*)CallWriter.pData = data;
	CallWriter.pData = CallWriter.pData + 4;
}

inline static void CallWriter_WriteImmediate(arg_t data)
{
	*(arg_t*)CallWriter.pData = data;
	CallWriter.pData = CallWriter.pData + sizeof(arg_t);
}

// for writing chunks
inline static void CallWriter_WriteData(uint8_t* pData, uint32_t size)
{
	assert((CallWriter.pData - CallWriter.pBase + size) < CALL_WRITER_MAX_BUF_SIZE);

	memcpy(CallWriter.pData, pData, size);
	CallWriter.pData = CallWriter.pData + size;
}

struct SysMemHeader{
	uint32_t	call_n;
	void*		addr;
	uint32_t	size;
};

/* SysMemWriter_Reserver is conflicting with SysMemWriter_WriteBigData use carefully! */
inline static void SysMemWriter_Reserve(uint32_t size)
{
	if((SysMemWriter.pData - SysMemWriter.pBase + size) >= SYSMEM_WRITER_MAX_BUF_SIZE){
		// swap buffers
		SysMemWriter_Flush();
	}
}

inline static void SysMemWriter_WriteData(uint32_t call_n, void* pData, uint32_t size)
{
	struct SysMemHeader* pHeader = (struct SysMemHeader*)SysMemWriter.pData;

	pHeader->call_n = call_n;
	pHeader->addr = pData;
	pHeader->size = size;

	memcpy(SysMemWriter.pData + sizeof(struct SysMemHeader), pData, size);
	SysMemWriter.pData = SysMemWriter.pData + sizeof(struct SysMemHeader) + size;
}