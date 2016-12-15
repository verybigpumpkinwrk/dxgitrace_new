#include <Windows.h>
//#include <d3d11_2.h>
#include <d3d9.h>
#include "Log.h"
#include <inject\inject_shared_mem.h>
#include "wrapd3d11.h"




bool CfgLoaded = false;
bool dxgiLoaded = false;
bool d3d9Loaded = false;
bool d3d11Loaded = false;

bool vTablePatched[D3D11Interfaces__End] = { false };

uint32_t CallCounter = 0;

// original pointers
static HRESULT (__stdcall *_D3D11CreateDevice)(IDXGIAdapter*, D3D_DRIVER_TYPE, HMODULE, UINT, const D3D_FEATURE_LEVEL*, UINT, UINT, ID3D11Device**, D3D_FEATURE_LEVEL*, ID3D11DeviceContext**) = NULL;
static HRESULT (__stdcall *_D3D11CreateDeviceAndSwapChain)(IDXGIAdapter*, D3D_DRIVER_TYPE, HMODULE, UINT, const D3D_FEATURE_LEVEL*, UINT, UINT, const DXGI_SWAP_CHAIN_DESC*, IDXGISwapChain**, ID3D11Device**, D3D_FEATURE_LEVEL*, ID3D11DeviceContext**) = NULL;
static HRESULT (__stdcall *_CreateDXGIFactory)(REFIID, void**) = NULL;
static HRESULT (__stdcall *_CreateDXGIFactory1)(REFIID, void**) = NULL;
static int (__stdcall *_D3DPERF_BeginEvent)(D3DCOLOR, const wchar_t*) = NULL;
static int (__stdcall *_D3DPERF_EndEvent)(void) = NULL;
static void (__stdcall *_D3DPERF_SetMarker)(D3DCOLOR, const wchar_t*) = NULL;
static void (__stdcall *_D3DPERF_SetRegion)(D3DCOLOR, const wchar_t*) = NULL;
static BOOL (__stdcall *_D3DPERF_QueryRepeatFrame)(void) = NULL;
static void (__stdcall *_D3DPERF_SetOptions)(DWORD) = NULL;
static DWORD (__stdcall *_D3DPERF_GetStatus)(void) = NULL;
// TODO: adaptive self patching of pointers



void Load_dxgidll(void)
{
	HMODULE hMod;

	hMod = LoadLibraryA("dxgi.dll");
	if(hMod == NULL){
		Log("Error! Can't load dxgi.dll.");
		abort();
	}

	_CreateDXGIFactory = (HRESULT (__stdcall *)(REFIID, void**))GetProcAddress(hMod, "CreateDXGIFactory");
	if(_CreateDXGIFactory == NULL){
		Log("Error! Can't get CreateDXGIFactory address.");
		abort();
	}

	_CreateDXGIFactory1 = (HRESULT (__stdcall *)(REFIID, void**))GetProcAddress(hMod, "CreateDXGIFactory1");
	if(_CreateDXGIFactory1 == NULL){
		Log("Error! Can't get CreateDXGIFactory address.");
		abort();
	}
	
	dxgiLoaded = true;
}

void Load_d3d9dll(void)
{
	HMODULE hMod;

	hMod = LoadLibraryA("d3d9.dll");
	if(hMod == NULL){
		Log("Error! Can't load dxgi.dll.");
		abort();
	}

	_D3DPERF_BeginEvent = (int (__stdcall*)(D3DCOLOR, const wchar_t*))GetProcAddress(hMod, "D3DPERF_BeginEvent");
	if(_D3DPERF_BeginEvent == NULL){
		Log("Error! Can't get D3DPERF_BeginEvent.");
		abort();
	}

	_D3DPERF_EndEvent = (int (__stdcall*)(void))GetProcAddress(hMod, "D3DPERF_EndEvent");
	if(_D3DPERF_EndEvent == NULL){
		Log("Error! Can't get D3DPERF_EndEvent.");
		abort();
	}

	_D3DPERF_SetMarker = (void (__stdcall*)(D3DCOLOR, const wchar_t*))GetProcAddress(hMod, "D3DPERF_SetMarker");
	if(_D3DPERF_SetMarker == NULL){
		Log("Error! Can't get D3DPERF_SetMarker.");
		abort();
	}

	_D3DPERF_SetRegion = (void (__stdcall*)(D3DCOLOR, const wchar_t*))GetProcAddress(hMod, "D3DPERF_SetRegion");
	if(_D3DPERF_SetRegion == NULL){
		Log("Error! Can't get D3DPERF_SetRegion.");
		abort();
	}

	_D3DPERF_QueryRepeatFrame = (BOOL (__stdcall*)(void))GetProcAddress(hMod, "D3DPERF_QueryRepeatFrame");
	if(_D3DPERF_QueryRepeatFrame == NULL){
		Log("Error! Can't get D3DPERF_QueryRepeatFrame.");
		abort();
	}

	_D3DPERF_SetOptions = (void (__stdcall*)(DWORD))GetProcAddress(hMod, "D3DPERF_SetOptions");
	if(_D3DPERF_SetOptions == NULL){
		Log("Error! Can't get D3DPERF_SetOptions.");
		abort();
	}

	_D3DPERF_GetStatus = (DWORD (__stdcall*)(void))GetProcAddress(hMod, "D3DPERF_GetStatus");
	if(D3DPERF_GetStatus == NULL){
		Log("Error! Can't get D3DPERF_GetStatus.");
		abort();
	}

	d3d9Loaded = true;
}

void Load_d3d11dll(void)
{
	HMODULE hMod;

	hMod = LoadLibraryA("d3d11.dll");
	if(hMod == NULL){
		Log("Error! Can't load d3d11.dll.");
		abort();
	}

	_D3D11CreateDevice = (PFN_D3D11_CREATE_DEVICE)GetProcAddress(hMod, "D3D11CreateDevice");
	if(_D3D11CreateDevice == NULL){
		Log("Error! Can't get D3D11CreateDevice address.");
		abort();
	}

	_D3D11CreateDeviceAndSwapChain = (PFN_D3D11_CREATE_DEVICE_AND_SWAP_CHAIN)GetProcAddress(hMod, "D3D11CreateDeviceAndSwapChain");
	if(_D3D11CreateDeviceAndSwapChain == NULL){
		Log("Error! Can't get D3D11CreateDeviceAndSwapChain address.");
		abort();
	}

	d3d11Loaded = true;
}

void PatchvTable(void** pvTable, uint32_t interface_id, uint32_t func_num)
{
	DWORD OldProtect;

	if(InterfaceAddrTable[interface_id].TableSimple == NULL){
		Log("Error! Table is NULL.");
		abort();
	}

	if(VirtualProtect((void*)pvTable, sizeof(void*) * func_num, PAGE_READWRITE, &OldProtect) == 0){
		Log("Error! Failed to change memory protect.");
		abort();
	}
	Log("patching interface num: %u", interface_id);
	for(uint32_t i = 0; i < func_num; i++){
		if(1){
			//Log("patching %u vtable: %u", interface_id, i);
			InterfaceAddrTable[interface_id].TableOriginal[i] = pvTable[i];
			if(InterfaceAddrTable[interface_id].TableData == NULL){
				pvTable[i] = InterfaceAddrTable[interface_id].TableSimple[i];
			}else{
				pvTable[i] = InterfaceAddrTable[interface_id].TableData[i];
			}
		}
	}

	VirtualProtect((void*)pvTable, sizeof(void*) * func_num, OldProtect, &OldProtect);

	Log("vTable: 0x%08x", pvTable);
	Log("vTable addr: 0x%08x", pvTable[ID3D11Device_CreateBuffer]);
	Log("Simple addr: 0x%08x", InterfaceAddrTable[interface_id].TableSimple[ID3D11Device_CreateBuffer]);
	//InterfaceAddrTable[interface_id].TableOriginal[ID3D11Device_CreateBuffer] = pvTable[ID3D11Device_CreateBuffer];
	//pvTable[ID3D11Device_CreateBuffer] = InterfaceAddrTable[interface_id].TableSimple[ID3D11Device_CreateBuffer];

	vTablePatched[interface_id] = true;
}


extern "C" BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{

	switch(fdwReason){
		case DLL_PROCESS_ATTACH:
		{
			char buf[4096];

			if(CfgLoaded == false){
				HANDLE hMapFile;
				struct SharedMem* pSharedMem;

				hMapFile = OpenFileMapping(FILE_MAP_READ, FALSE, "injectfilemap");
				if(hMapFile == NULL){
					Log("error: failed to open shared mem.");
					return FALSE;
				}

				pSharedMem = (struct SharedMem*)MapViewOfFile(hMapFile, FILE_MAP_READ, 0, 0, sizeof(struct SharedMem));
				if(pSharedMem == NULL){
					Log("error: failed to map shared mem.");
					CloseHandle(hMapFile);
					return FALSE;
				}

				Log("Cfg path: %s", pSharedMem->szCfgPath);

				CfgLoaded = true;
				UnmapViewOfFile(pSharedMem);
				CloseHandle(hMapFile);
			}

			GetModuleFileNameA(NULL, buf, 4096);
			*(strchr(buf, 0) - 3) = 0;
			strcat(buf, "dxgitrace_new.bin");

			CallWriter_OpenFile(buf);

			GetModuleFileNameA(NULL, buf, 4096);
			*(strchr(buf, 0) - 3) = 0;
			strcat(buf, "sys_mem.bin");

			SysMemWriter_OpenFile(buf);
		}
		break;
		case DLL_PROCESS_DETACH:
		{

			CallWriter_CloseFile();
			SysMemWriter_CloseFile();
		}
		break;
		case DLL_THREAD_ATTACH:
		{



		}
		break;
		case DLL_THREAD_DETACH:
		{



		}
		break;
	};


	return TRUE;
}

extern "C" HRESULT __stdcall CreateDXGIFactory(REFIID riid, void * * ppFactory)
{
	if(dxgiLoaded != true){
		Load_dxgidll();
	}
	Log("Calling CreateDXGIFactory");

	return _CreateDXGIFactory(riid, ppFactory);
}

extern "C" HRESULT __stdcall CreateDXGIFactory1(REFIID riid, void * * ppFactory)
{
	if(dxgiLoaded != true){
		Load_dxgidll();
	}
	Log("Calling CreateDXGIFactory1");


	return _CreateDXGIFactory1(riid, ppFactory);
}

extern "C" HRESULT __stdcall D3D11CreateDevice(IDXGIAdapter * pAdapter, D3D_DRIVER_TYPE DriverType, HMODULE Software, UINT Flags, const D3D_FEATURE_LEVEL * pFeatureLevels, UINT FeatureLevels, UINT SDKVersion, ID3D11Device * * ppDevice, D3D_FEATURE_LEVEL * pFeatureLevel, ID3D11DeviceContext * * ppImmediateContext)
{
	HRESULT hr;

	if(d3d11Loaded != true){
		Load_d3d11dll();
	}

	Log("Calling D3D11CreateDevice ppDevice: 0x%08x, ppContext: 0x%08x", ppDevice, ppImmediateContext);

	hr = _D3D11CreateDevice(pAdapter, DriverType, Software, Flags, pFeatureLevels, FeatureLevels, SDKVersion, ppDevice, pFeatureLevel, ppImmediateContext);
	if(vTablePatched[ID3D11_Device] == false && ppDevice != NULL){
		PatchvTable((void**)GetVTable(*ppDevice), ID3D11_Device, ID3D11Device__EnumEnd);
	}

	if(vTablePatched[ID3D11_DeviceContext] == false && ppImmediateContext != NULL){
		PatchvTable((void**)GetVTable(*ppImmediateContext), ID3D11_DeviceContext, ID3D11DeviceContext__EnumEnd);
	}

	return hr;
}

extern "C" HRESULT __stdcall D3D11CreateDeviceAndSwapChain(IDXGIAdapter * pAdapter, D3D_DRIVER_TYPE DriverType, HMODULE Software, UINT Flags, const D3D_FEATURE_LEVEL * pFeatureLevels, UINT FeatureLevels, UINT SDKVersion, const DXGI_SWAP_CHAIN_DESC * pSwapChainDesc, IDXGISwapChain * * ppSwapChain, ID3D11Device * * ppDevice, D3D_FEATURE_LEVEL * pFeatureLevel, ID3D11DeviceContext * * ppImmediateContext)
{
	if(d3d11Loaded != true){
		Load_d3d11dll();
	}

	Log("Calling D3DCreateDeviceAndSwapChain");

	return _D3D11CreateDeviceAndSwapChain(pAdapter, DriverType, Software, Flags, pFeatureLevels, FeatureLevels, SDKVersion, pSwapChainDesc, ppSwapChain, ppDevice, pFeatureLevel, ppImmediateContext);
}

extern "C" int __stdcall D3DPERF_BeginEvent(D3DCOLOR col, const wchar_t * wszName)
{
	if(d3d9Loaded != true){
		Load_d3d9dll();
	}
	//Log("Calling D3DPERF_BeginEvent");


	return _D3DPERF_BeginEvent(col, wszName);
}

extern "C" int __stdcall D3DPERF_EndEvent(void)
{
	if(d3d9Loaded != true){
		Load_d3d9dll();
	}
	//Log("Calling D3DPERF_EndEvent");

	return _D3DPERF_EndEvent();
}

extern "C" void __stdcall D3DPERF_SetMarker(D3DCOLOR col, const wchar_t * wszName)
{
	if(d3d9Loaded != true){
		Load_d3d9dll();
	}
	//Log("Calling D3DPERF_SetMarker");

	_D3DPERF_SetMarker(col, wszName);
}

extern "C" void __stdcall D3DPERF_SetRegion(D3DCOLOR col, const wchar_t * wszName)
{
	if(d3d9Loaded != true){
		Load_d3d9dll();
	}

	//Log("Calling D3DPERF_SetRegion");

	_D3DPERF_SetRegion(col, wszName);
}

extern "C" BOOL __stdcall D3DPERF_QueryRepeatFrame(void)
{
	if(d3d9Loaded != true){
		Load_d3d9dll();
	}
	//Log("Calling D3DPERF_QueryRepeatFrame");


	return _D3DPERF_QueryRepeatFrame();
}

extern "C" void __stdcall D3DPERF_SetOptions(DWORD dwOptions)
{
	if(d3d9Loaded != true){
		Load_d3d9dll();
	}
	//Log("Calling D3DPERF_SetOptions");

	_D3DPERF_SetOptions(dwOptions);
}

extern "C" DWORD __stdcall D3DPERF_GetStatus(void)
{
	if(d3d9Loaded != true){
		Load_d3d9dll();
	}
	//Log("Calling D3DPERF_GetStatus");


	return _D3DPERF_GetStatus();
}

extern "C" HRESULT __stdcall DCompositionCreateDevice(IDXGIDevice * dxgiDevice, REFIID iid, void * * dcompositionDevice)
{


	Log("Calling DCompositionCreateDevice");


	return 0;
}

extern "C" HRESULT __stdcall DCompositionCreateSurfaceHandle(DWORD desiredAccess, SECURITY_ATTRIBUTES * securityAttributes, HANDLE * surfaceHandle)
{

	Log("Calling DCompositionCreateSurfaceHandle");



	return 0;
}