#pragma once

#define DXGITRACE_NEW_LOG

#ifdef DXGITRACE_NEW_LOG
void Log(char* format, ...);
#else
#define Log(format, ...)
#endif