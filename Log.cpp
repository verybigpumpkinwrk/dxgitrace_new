#include <stdint.h>
#include <stdio.h>
#include <stdarg.h>
#include <Windows.h>
#include "Log.h"


#ifdef DXGITRACE_NEW_LOG

char buf[1024] = "";

void Log(char* format, ...)
{
	va_list args;


	va_start(args, format);
	strcpy(buf, "dxgitrace_new: ");
	vsnprintf(buf + 15, 1024 - 15, format, args);
	OutputDebugStringA(buf);
	
	va_end(args);
}

#endif