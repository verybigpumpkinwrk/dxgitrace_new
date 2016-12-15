#pragma once
#include "ID3D11DeviceContext.h"

enum ID3D11DeviceFuncs{
	// IUnknown
	ID3D11Device_QueryInterface = 0,
	ID3D11Device_AddRef,
	ID3D11Device_Release,
	// ID3D11Device
	ID3D11Device_CreateBuffer,
	ID3D11Device_CreateTexture1D,
	ID3D11Device_CreateTexture2D,
	ID3D11Device_CreateTexture3D,
	ID3D11Device_CreateShaderResourceView,
	ID3D11Device_CreateUnorderedAccessView,
	ID3D11Device_CreateRenderTargetView,
	ID3D11Device_CreateDepthStencilView,
	ID3D11Device_CreateInputLayout,
	ID3D11Device_CreateVertexShader,
	ID3D11Device_CreateGeometryShader,
	ID3D11Device_CreateGeometryShaderWithStreamOutput,
	ID3D11Device_CreatePixelShader,
	ID3D11Device_CreateHullShader,
	ID3D11Device_CreateDomainShader,
	ID3D11Device_CreateComputeShader,
	ID3D11Device_CreateClassLinkage,
	ID3D11Device_CreateBlendState,
	ID3D11Device_CreateDepthStencilState,
	ID3D11Device_CreateRasterizerState,
	ID3D11Device_CreateSamplerState,
	ID3D11Device_CreateQuery,
	ID3D11Device_CreatePredicate,
	ID3D11Device_CreateCounter,
	ID3D11Device_CreateDeferredContext,
	ID3D11Device_OpenSharedResource,
	ID3D11Device_CheckFormatSupport,
	ID3D11Device_CheckMultisampleQualityLevels,
	ID3D11Device_CheckCounterInfo,
	ID3D11Device_CheckCounter,
	ID3D11Device_CheckFeatureSupport,
	ID3D11Device_GetPrivateData,
	ID3D11Device_SetPrivateData,
	ID3D11Device_SetPrivateDataInterface,
	ID3D11Device_GetFeatureLevel,
	ID3D11Device_GetCreationFlags,
	ID3D11Device_GetDeviceRemovedReason,
	ID3D11Device_GetImmediateContext,
	ID3D11Device_SetExceptionMode,
	ID3D11Device_GetExceptionMode,

	ID3D11Device__EnumEnd,
};
// we assume that different instances of ID3D11Device have same function adresses
static void* ID3D11DeviceOriginalFuncs[ID3D11Device__EnumEnd] = { NULL };


// no data functions
#ifndef DXGITRACE_NOSIMPLE
static void* __stdcall WID3D11Device_QueryInterface(void* param0, void* param1, void* param2)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_QueryInterface));
	return ((void* (__stdcall *)(void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_QueryInterface])(param0, param1, param2);
}

static void* __stdcall WID3D11Device_AddRef(void* param0)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_AddRef));
	return ((void* (__stdcall *)(void*))ID3D11DeviceOriginalFuncs[ID3D11Device_AddRef])(param0);
}

static void* __stdcall WID3D11Device_Release(void* param0)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_Release));
	return ((void* (__stdcall *)(void*))ID3D11DeviceOriginalFuncs[ID3D11Device_Release])(param0);
}

static void* __stdcall WID3D11Device_CreateBuffer(void* param0, void* param1, void* param2, void* param3)
{
	//Log("Calling ID3D11Device::CreateBuffer");
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_CreateBuffer));
	return ((void* (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateBuffer])(param0, param1, param2, param3);
}

static void* __stdcall WID3D11Device_CreateTexture1D(void* param0, void* param1, void* param2, void* param3)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_CreateTexture1D));
	return ((void* (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateTexture1D])(param0, param1, param2, param3);
}

static void* __stdcall WID3D11Device_CreateTexture2D(void* param0, void* param1, void* param2, void* param3)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_CreateTexture2D));
	return ((void* (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateTexture2D])(param0, param1, param2, param3);
}

static void* __stdcall WID3D11Device_CreateTexture3D(void* param0, void* param1, void* param2, void* param3)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_CreateTexture3D));
	return ((void* (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateTexture3D])(param0, param1, param2, param3);
}

static void* __stdcall WID3D11Device_CreateShaderResourceView(void* param0, void* param1, void* param2, void* param3)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_CreateShaderResourceView));
	return ((void* (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateShaderResourceView])(param0, param1, param2, param3);
}

static void* __stdcall WID3D11Device_CreateUnorderedAccessView(void* param0, void* param1, void* param2, void* param3)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_CreateUnorderedAccessView));
	return ((void* (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateUnorderedAccessView])(param0, param1, param2, param3);
}

static void* __stdcall WID3D11Device_CreateRenderTargetView(void* param0, void* param1, void* param2, void* param3)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_CreateRenderTargetView));
	return ((void* (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateRenderTargetView])(param0, param1, param2, param3);
}

static void* __stdcall WID3D11Device_CreateDepthStencilView(void* param0, void* param1, void* param2, void* param3)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_CreateDepthStencilView));
	return ((void* (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateDepthStencilView])(param0, param1, param2, param3);
}

static void* __stdcall WID3D11Device_CreateInputLayout(void* param0, void* param1, void* param2, void* param3, void* param4, void* param5)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_CreateInputLayout));
	return ((void* (__stdcall *)(void*, void*, void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateInputLayout])(param0, param1, param2, param3, param4, param5);
}

static void* __stdcall WID3D11Device_CreateVertexShader(void* param0, void* param1, void* param2, void* param3, void* param4)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_CreateVertexShader));
	return ((void* (__stdcall *)(void*, void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateVertexShader])(param0, param1, param2, param3, param4);
}

static void* __stdcall WID3D11Device_CreateGeometryShader(void* param0, void* param1, void* param2, void* param3, void* param4)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_CreateGeometryShader));
	return ((void* (__stdcall *)(void*, void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateGeometryShader])(param0, param1, param2, param3, param4);
}

static void* __stdcall WID3D11Device_CreateGeometryShaderWithStreamOutput(void* param0, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_CreateGeometryShaderWithStreamOutput));
	return ((void* (__stdcall *)(void*, void*, void*, void*, void*, void*, void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateGeometryShaderWithStreamOutput])(param0, param1, param2, param3, param4, param5, param6, param7, param8, param9);
}

static void* __stdcall WID3D11Device_CreatePixelShader(void* param0, void* param1, void* param2, void* param3, void* param4)
{
	//Log("Calling CreatePixelShader");
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_CreatePixelShader));
	return ((void* (__stdcall *)(void*, void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreatePixelShader])(param0, param1, param2, param3, param4);
}

static void* __stdcall WID3D11Device_CreateHullShader(void* param0, void* param1, void* param2, void* param3, void* param4)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_CreateHullShader));
	return ((void* (__stdcall *)(void*, void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateHullShader])(param0, param1, param2, param3, param4);
}

static void* __stdcall WID3D11Device_CreateDomainShader(void* param0, void* param1, void* param2, void* param3, void* param4)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_CreateDomainShader));
	return ((void* (__stdcall *)(void*, void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateDomainShader])(param0, param1, param2, param3, param4);
}

static void* __stdcall WID3D11Device_CreateComputeShader(void* param0, void* param1, void* param2, void* param3, void* param4)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_CreateComputeShader));
	return ((void* (__stdcall *)(void*, void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateComputeShader])(param0, param1, param2, param3, param4);
}

static void* __stdcall WID3D11Device_CreateClassLinkage(void* param0, void* param1)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_CreateClassLinkage));
	return ((void* (__stdcall *)(void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateClassLinkage])(param0, param1);
}

static void* __stdcall WID3D11Device_CreateBlendState(void* param0, void* param1, void* param2)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_CreateBlendState));
	return ((void* (__stdcall *)(void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateBlendState])(param0, param1, param2);
}

static void* __stdcall WID3D11Device_CreateDepthStencilState(void* param0, void* param1, void* param2)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_CreateDepthStencilState));
	return ((void* (__stdcall *)(void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateDepthStencilState])(param0, param1, param2);
}

static void* __stdcall WID3D11Device_CreateRasterizerState(void* param0, void* param1, void* param2)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_CreateRasterizerState));
	return ((void* (__stdcall *)(void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateRasterizerState])(param0, param1, param2);
}

static void* __stdcall WID3D11Device_CreateSamplerState(void* param0, void* param1, void* param2)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_CreateSamplerState));
	return ((void* (__stdcall *)(void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateSamplerState])(param0, param1, param2);
}

static void* __stdcall WID3D11Device_CreateQuery(void* param0, void* param1, void* param2)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_CreateQuery));
	return ((void* (__stdcall *)(void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateQuery])(param0, param1, param2);
}

static void* __stdcall WID3D11Device_CreatePredicate(void* param0, void* param1, void* param2)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_CreatePredicate));
	return ((void* (__stdcall *)(void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreatePredicate])(param0, param1, param2);
}

static void* __stdcall WID3D11Device_CreateCounter(void* param0, void* param1, void* param2)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_CreateCounter));
	return ((void* (__stdcall *)(void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateCounter])(param0, param1, param2);
}

static void* __stdcall WID3D11Device_CreateDeferredContext(void* param0, void* param1, void* param2)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_CreateDeferredContext));
	return ((void* (__stdcall *)(void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateDeferredContext])(param0, param1, param2);
}

static void* __stdcall WID3D11Device_OpenSharedResource(void* param0, void* param1, void* param2, void* param3)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_OpenSharedResource));
	return ((void* (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_OpenSharedResource])(param0, param1, param2, param3);
}

static void* __stdcall WID3D11Device_CheckFormatSupport(void* param0, void* param1, void* param2)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_CheckFormatSupport));
	return ((void* (__stdcall *)(void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CheckFormatSupport])(param0, param1, param2);
}

static void* __stdcall WID3D11Device_CheckMultisampleQualityLevels(void* param0, void* param1, void* param2, void* param3)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_CheckMultisampleQualityLevels));
	return ((void* (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CheckMultisampleQualityLevels])(param0, param1, param2, param3);
}

static void __stdcall WID3D11Device_CheckCounterInfo(void* param0, void* param1)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_CheckCounterInfo));
	((void (__stdcall *)(void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CheckCounterInfo])(param0, param1);
}

static void* __stdcall WID3D11Device_CheckCounter(void* param0, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_CheckCounter));
	return ((void* (__stdcall *)(void*, void*, void*, void*, void*, void*, void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CheckCounter])(param0, param1, param2, param3, param4, param5, param6, param7, param8, param9);
}

static void* __stdcall WID3D11Device_CheckFeatureSupport(void* param0, void* param1, void* param2, void* param3)
{
	//Log("Calling ID3D11Device::CheckFeatureSupport");
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_CheckFeatureSupport));
	return ((void* (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CheckFeatureSupport])(param0, param1, param2, param3);
}

static void* __stdcall WID3D11Device_GetPrivateData(void* param0, void* param1, void* param2, void* param3)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_GetPrivateData));
	return ((void* (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_GetPrivateData])(param0, param1, param2, param3);
}

static void* __stdcall WID3D11Device_SetPrivateData(void* param0, void* param1, void* param2, void* param3)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_SetPrivateData));
	return ((void* (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_SetPrivateData])(param0, param1, param2, param3);
}

static void* __stdcall WID3D11Device_SetPrivateDataInterface(void* param0, void* param1, void* param2)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_SetPrivateDataInterface));
	return ((void* (__stdcall *)(void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_SetPrivateDataInterface])(param0, param1, param2);
}

static void* __stdcall WID3D11Device_GetFeatureLevel(void* param0)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_GetFeatureLevel));
	return ((void* (__stdcall *)(void*))ID3D11DeviceOriginalFuncs[ID3D11Device_GetFeatureLevel])(param0);
}

static void* __stdcall WID3D11Device_GetCreationFlags(void* param0)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_GetCreationFlags));
	return ((void* (__stdcall *)(void*))ID3D11DeviceOriginalFuncs[ID3D11Device_GetCreationFlags])(param0);
}

static void* __stdcall WID3D11Device_GetDeviceRemovedReason(void* param0)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_GetDeviceRemovedReason));
	return ((void* (__stdcall *)(void*))ID3D11DeviceOriginalFuncs[ID3D11Device_GetDeviceRemovedReason])(param0);
}

static void __stdcall WID3D11Device_GetImmediateContext(void* param0, void* param1)
{
	//Log("Calling GetImmediateContext");
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_GetImmediateContext));
	((void (__stdcall *)(void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_GetImmediateContext])(param0, param1);

	if(vTablePatched[ID3D11_DeviceContext] == false){
		PatchvTable((void**)GetVTable(*(void**)param1), ID3D11_DeviceContext, ID3D11DeviceContext__EnumEnd);
	}
}

static void* __stdcall WID3D11Device_SetExceptionMode(void* param0, void* param1)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_SetExceptionMode));
	return ((void* (__stdcall *)(void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_SetExceptionMode])(param0, param1);
}

static void* __stdcall WID3D11Device_GetExceptionMode(void* param0)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_GetExceptionMode));
	return ((void* (__stdcall *)(void*))ID3D11DeviceOriginalFuncs[ID3D11Device_GetExceptionMode])(param0);
}

#endif


// function address table
#ifndef DXGITRACE_NOSIMPLE
void* ID3D11DeviceSimpleFuncs[ID3D11Device__EnumEnd] = {
	WID3D11Device_QueryInterface,
	WID3D11Device_AddRef,
	WID3D11Device_Release,
	WID3D11Device_CreateBuffer,
	WID3D11Device_CreateTexture1D,
	WID3D11Device_CreateTexture2D,
	WID3D11Device_CreateTexture3D,
	WID3D11Device_CreateShaderResourceView,
	WID3D11Device_CreateUnorderedAccessView,
	WID3D11Device_CreateRenderTargetView,
	WID3D11Device_CreateDepthStencilView,
	WID3D11Device_CreateInputLayout,
	WID3D11Device_CreateVertexShader,
	WID3D11Device_CreateGeometryShader,
	WID3D11Device_CreateGeometryShaderWithStreamOutput,
	WID3D11Device_CreatePixelShader,
	WID3D11Device_CreateHullShader,
	WID3D11Device_CreateDomainShader,
	WID3D11Device_CreateComputeShader,
	WID3D11Device_CreateClassLinkage,
	WID3D11Device_CreateBlendState,
	WID3D11Device_CreateDepthStencilState,
	WID3D11Device_CreateRasterizerState,
	WID3D11Device_CreateSamplerState,
	WID3D11Device_CreateQuery,
	WID3D11Device_CreatePredicate,
	WID3D11Device_CreateCounter,
	WID3D11Device_CreateDeferredContext,
	WID3D11Device_OpenSharedResource,
	WID3D11Device_CheckFormatSupport,
	WID3D11Device_CheckMultisampleQualityLevels,
	WID3D11Device_CheckCounterInfo,
	WID3D11Device_CheckCounter,
	WID3D11Device_CheckFeatureSupport,
	WID3D11Device_GetPrivateData,
	WID3D11Device_SetPrivateData,
	WID3D11Device_SetPrivateDataInterface,
	WID3D11Device_GetFeatureLevel,
	WID3D11Device_GetCreationFlags,
	WID3D11Device_GetDeviceRemovedReason,
	WID3D11Device_GetImmediateContext,
	WID3D11Device_SetExceptionMode,
	WID3D11Device_GetExceptionMode,
};

#else
#define ID3D11DeviceSimpleTable NULL
#endif

// data functions
static HRESULT __stdcall WDID3D11Device_QueryInterface(void* _this, void* riid, void **ppvObject)
{
	HRESULT hr;
	CallWriter_Reserve(8 + 3 * sizeof(void*));
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_DATA, ID3D11_Device, ID3D11Device_QueryInterface));
	CallWriter_WriteImmediate((arg_t)_this);
	CallWriter_WriteImmediate((arg_t)riid);
	//CallWriter_WriteImmediate((arg_t)ppvObject);
	hr = ((HRESULT (__stdcall *)(void*, void*, void**))ID3D11DeviceOriginalFuncs[ID3D11Device_QueryInterface])(_this, riid, ppvObject);
	CallWriter_WriteImmediate((arg_t)*ppvObject);
	return hr;
}

static void* __stdcall WDID3D11Device_AddRef(void* _this)
{
	CallWriter_Reserve(8 + sizeof(void*));
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_DATA, ID3D11_Device, ID3D11Device_AddRef));
	CallWriter_WriteImmediate((arg_t)_this);
	return ((void* (__stdcall *)(void*))ID3D11DeviceOriginalFuncs[ID3D11Device_AddRef])(_this);
}

static void* __stdcall WDID3D11Device_Release(void* _this)
{
	CallWriter_Reserve(8 + sizeof(void*));
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_DATA, ID3D11_Device, ID3D11Device_Release));
	CallWriter_WriteImmediate((arg_t)_this);
	return ((void* (__stdcall *)(void*))ID3D11DeviceOriginalFuncs[ID3D11Device_Release])(_this);
}

typedef HRESULT (__stdcall *FNT_DEVICE_CREATE_BUFFER)(void*, D3D11_BUFFER_DESC*, D3D11_SUBRESOURCE_DATA*, ID3D11Buffer**);
static HRESULT __stdcall WDID3D11Device_CreateBuffer(void* _this, D3D11_BUFFER_DESC* pDesc, D3D11_SUBRESOURCE_DATA* pInitialData, ID3D11Buffer** ppBuffer)
{
	HRESULT hr;
	uint32_t call_n = IncrementCounter();
	Log("ID3D11Device::CreateBuffer size: %u, pInitData: 0x%08x", pDesc->ByteWidth, pInitialData);
	CallWriter_Reserve(8 + 4 * sizeof(void*));
	CallWriter_WriteImmediate4(call_n);
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_DATA, ID3D11_Device, ID3D11Device_CreateBuffer));
	CallWriter_WriteImmediate((arg_t)_this);
	CallWriter_WriteImmediate((arg_t)pDesc);
	CallWriter_WriteImmediate((arg_t)pInitialData);
	
	hr = ((FNT_DEVICE_CREATE_BUFFER)ID3D11DeviceOriginalFuncs[ID3D11Device_CreateBuffer])(_this, pDesc, pInitialData, ppBuffer);
	
	CallWriter_WriteImmediate(ppBuffer != NULL ? (arg_t)*ppBuffer : NULL);
	// struct data
	SysMemWriter_Reserve(2 * sizeof(struct SysMemHeader) + sizeof(D3D11_BUFFER_DESC) + sizeof(D3D11_SUBRESOURCE_DATA));
	SysMemWriter_WriteData(call_n, pDesc, sizeof(D3D11_BUFFER_DESC));
	if(pInitialData != NULL){
		SysMemWriter_WriteData(call_n, pInitialData, sizeof(D3D11_SUBRESOURCE_DATA));
		SysMemWriter_WriteBigData(call_n, (void*)pInitialData->pSysMem, pDesc->ByteWidth);
	}
	return hr;
}

typedef HRESULT (__stdcall *FNT_DEVICE_CREATE_TEXTURE1D)(void*, D3D11_TEXTURE1D_DESC*, D3D11_SUBRESOURCE_DATA*, ID3D11Texture1D**);

static HRESULT __stdcall WDID3D11Device_CreateTexture1D(void* _this, D3D11_TEXTURE1D_DESC *pDesc, D3D11_SUBRESOURCE_DATA *pInitialData, ID3D11Texture1D **ppTexture1D)
{
	HRESULT hr;
	uint32_t call_n = IncrementCounter();

	CallWriter_Reserve(8 + 4 * sizeof(void*));
	CallWriter_WriteImmediate4(call_n);
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_DATA, ID3D11_Device, ID3D11Device_CreateTexture1D));
	CallWriter_WriteImmediate((arg_t)_this);
	CallWriter_WriteImmediate((arg_t)pDesc);
	CallWriter_WriteImmediate((arg_t)pInitialData);

	hr = ((FNT_DEVICE_CREATE_TEXTURE1D)ID3D11DeviceOriginalFuncs[ID3D11Device_CreateTexture1D])(_this, pDesc, pInitialData, ppTexture1D);
	
	CallWriter_WriteImmediate(ppTexture1D != NULL ? (arg_t)*ppTexture1D : NULL);

	SysMemWriter_Reserve(sizeof(struct SysMemHeader) + sizeof(D3D11_TEXTURE1D_DESC));
	SysMemWriter_WriteData(call_n, pDesc, sizeof(D3D11_TEXTURE1D_DESC));

	if(pInitialData != NULL){
		if(pDesc->MipLevels == 0){
			Log("Brrrrrrggghhh!");
		}
		
		SysMemWriter_WriteBigData(call_n, pInitialData, pDesc->MipLevels * pDesc->ArraySize * sizeof(D3D11_SUBRESOURCE_DATA));

		for(uint32_t i = 0; i < pDesc->MipLevels * pDesc->ArraySize; i++){
			SysMemWriter_WriteBigData(call_n, (void*)pInitialData[i].pSysMem, CalcSubresourceSize1D(pDesc, i, pDesc->MipLevels));
		}
	}

	return hr;
}

typedef HRESULT (__stdcall *FNT_DEVICE_CREATE_TEXTURE2D)(void*, D3D11_TEXTURE2D_DESC*, D3D11_SUBRESOURCE_DATA*, ID3D11Texture2D **);

static HRESULT __stdcall WDID3D11Device_CreateTexture2D(void* _this, D3D11_TEXTURE2D_DESC *pDesc, D3D11_SUBRESOURCE_DATA *pInitialData, ID3D11Texture2D **ppTexture2D)
{
	HRESULT hr;
	uint32_t call_n = IncrementCounter();
	Log("ID3D11Device::CreateTexture2D width: %u, height: %u, mips: %u, N: %u, pIData: 0x%08x", pDesc->Width, pDesc->Height, pDesc->MipLevels, pDesc->ArraySize, pInitialData);
	CallWriter_Reserve(8 + 4 * sizeof(void*));
	CallWriter_WriteImmediate4(call_n);
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_DATA, ID3D11_Device, ID3D11Device_CreateTexture2D));
	CallWriter_WriteImmediate((arg_t)_this);
	CallWriter_WriteImmediate((arg_t)pDesc);
	CallWriter_WriteImmediate((arg_t)pInitialData);

	hr = ((FNT_DEVICE_CREATE_TEXTURE2D)ID3D11DeviceOriginalFuncs[ID3D11Device_CreateTexture2D])(_this, pDesc, pInitialData, ppTexture2D);
	
	CallWriter_WriteImmediate(ppTexture2D != NULL ? (arg_t)*ppTexture2D : NULL);

	SysMemWriter_Reserve(sizeof(struct SysMemHeader) + sizeof(D3D11_TEXTURE2D_DESC));
	SysMemWriter_WriteData(call_n, pDesc, sizeof(D3D11_TEXTURE2D_DESC));

	if(pInitialData != NULL){
		if(pDesc->MipLevels == 0){
			Log("Brrrrrrggghhh2!");
		}

		SysMemWriter_WriteBigData(call_n, pInitialData, pDesc->MipLevels * pDesc->ArraySize * sizeof(D3D11_SUBRESOURCE_DATA));

		for(uint32_t i = 0; i < pDesc->MipLevels * pDesc->ArraySize; i++){
			SysMemWriter_WriteBigData(call_n, (void*)pInitialData[i].pSysMem, CalcSubresourceSize2D(pDesc, i, pDesc->MipLevels, pInitialData[i].SysMemPitch));
		}
	}

	return hr;
}

static void* __stdcall WDID3D11Device_CreateTexture3D(void* _this, void* param1, void* param2, void* param3)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_DATA, ID3D11_Device, ID3D11Device_CreateTexture3D));
	return ((void* (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateTexture3D])(_this, param1, param2, param3);
}

static void* __stdcall WDID3D11Device_CreateShaderResourceView(void* _this, void* param1, void* param2, void* param3)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_DATA, ID3D11_Device, ID3D11Device_CreateShaderResourceView));
	return ((void* (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateShaderResourceView])(_this, param1, param2, param3);
}

static void* __stdcall WDID3D11Device_CreateUnorderedAccessView(void* _this, void* param1, void* param2, void* param3)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_DATA, ID3D11_Device, ID3D11Device_CreateUnorderedAccessView));
	return ((void* (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateUnorderedAccessView])(_this, param1, param2, param3);
}

static void* __stdcall WDID3D11Device_CreateRenderTargetView(void* _this, void* param1, void* param2, void* param3)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_DATA, ID3D11_Device, ID3D11Device_CreateRenderTargetView));
	return ((void* (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateRenderTargetView])(_this, param1, param2, param3);
}

static void* __stdcall WDID3D11Device_CreateDepthStencilView(void* _this, void* param1, void* param2, void* param3)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_DATA, ID3D11_Device, ID3D11Device_CreateDepthStencilView));
	return ((void* (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateDepthStencilView])(_this, param1, param2, param3);
}

static void* __stdcall WDID3D11Device_CreateInputLayout(void* _this, void* param1, void* param2, void* param3, void* param4, void* param5)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_DATA, ID3D11_Device, ID3D11Device_CreateInputLayout));
	return ((void* (__stdcall *)(void*, void*, void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateInputLayout])(_this, param1, param2, param3, param4, param5);
}

static void* __stdcall WDID3D11Device_CreateVertexShader(void* _this, void* param1, void* param2, void* param3, void* param4)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_DATA, ID3D11_Device, ID3D11Device_CreateVertexShader));
	return ((void* (__stdcall *)(void*, void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateVertexShader])(_this, param1, param2, param3, param4);
}

static void* __stdcall WDID3D11Device_CreateGeometryShader(void* _this, void* param1, void* param2, void* param3, void* param4)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_DATA, ID3D11_Device, ID3D11Device_CreateGeometryShader));
	return ((void* (__stdcall *)(void*, void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateGeometryShader])(_this, param1, param2, param3, param4);
}

static void* __stdcall WDID3D11Device_CreateGeometryShaderWithStreamOutput(void* _this, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_DATA, ID3D11_Device, ID3D11Device_CreateGeometryShaderWithStreamOutput));
	return ((void* (__stdcall *)(void*, void*, void*, void*, void*, void*, void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateGeometryShaderWithStreamOutput])(_this, param1, param2, param3, param4, param5, param6, param7, param8, param9);
}

static void* __stdcall WDID3D11Device_CreatePixelShader(void* _this, void* param1, void* param2, void* param3, void* param4)
{
	//Log("Calling CreatePixelShader");
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_DATA, ID3D11_Device, ID3D11Device_CreatePixelShader));
	return ((void* (__stdcall *)(void*, void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreatePixelShader])(_this, param1, param2, param3, param4);
}

static void* __stdcall WDID3D11Device_CreateHullShader(void* _this, void* param1, void* param2, void* param3, void* param4)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_DATA, ID3D11_Device, ID3D11Device_CreateHullShader));
	return ((void* (__stdcall *)(void*, void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateHullShader])(_this, param1, param2, param3, param4);
}

static void* __stdcall WDID3D11Device_CreateDomainShader(void* _this, void* param1, void* param2, void* param3, void* param4)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_DATA, ID3D11_Device, ID3D11Device_CreateDomainShader));
	return ((void* (__stdcall *)(void*, void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateDomainShader])(_this, param1, param2, param3, param4);
}

static void* __stdcall WDID3D11Device_CreateComputeShader(void* _this, void* param1, void* param2, void* param3, void* param4)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_DATA, ID3D11_Device, ID3D11Device_CreateComputeShader));
	return ((void* (__stdcall *)(void*, void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateComputeShader])(_this, param1, param2, param3, param4);
}

static void* __stdcall WDID3D11Device_CreateClassLinkage(void* _this, void* param1)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_DATA, ID3D11_Device, ID3D11Device_CreateClassLinkage));
	return ((void* (__stdcall *)(void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateClassLinkage])(_this, param1);
}

static void* __stdcall WDID3D11Device_CreateBlendState(void* _this, void* param1, void* param2)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_DATA, ID3D11_Device, ID3D11Device_CreateBlendState));
	return ((void* (__stdcall *)(void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateBlendState])(_this, param1, param2);
}

static void* __stdcall WDID3D11Device_CreateDepthStencilState(void* _this, void* param1, void* param2)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_DATA, ID3D11_Device, ID3D11Device_CreateDepthStencilState));
	return ((void* (__stdcall *)(void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateDepthStencilState])(_this, param1, param2);
}

static void* __stdcall WDID3D11Device_CreateRasterizerState(void* _this, void* param1, void* param2)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_DATA, ID3D11_Device, ID3D11Device_CreateRasterizerState));
	return ((void* (__stdcall *)(void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateRasterizerState])(_this, param1, param2);
}

static void* __stdcall WDID3D11Device_CreateSamplerState(void* _this, void* param1, void* param2)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_DATA, ID3D11_Device, ID3D11Device_CreateSamplerState));
	return ((void* (__stdcall *)(void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateSamplerState])(_this, param1, param2);
}

static void* __stdcall WDID3D11Device_CreateQuery(void* _this, void* param1, void* param2)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_DATA, ID3D11_Device, ID3D11Device_CreateQuery));
	return ((void* (__stdcall *)(void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateQuery])(_this, param1, param2);
}

static void* __stdcall WDID3D11Device_CreatePredicate(void* _this, void* param1, void* param2)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_DATA, ID3D11_Device, ID3D11Device_CreatePredicate));
	return ((void* (__stdcall *)(void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreatePredicate])(_this, param1, param2);
}

static void* __stdcall WDID3D11Device_CreateCounter(void* _this, void* param1, void* param2)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_DATA, ID3D11_Device, ID3D11Device_CreateCounter));
	return ((void* (__stdcall *)(void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateCounter])(_this, param1, param2);
}

static void* __stdcall WDID3D11Device_CreateDeferredContext(void* _this, void* param1, void* param2)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_DATA, ID3D11_Device, ID3D11Device_CreateDeferredContext));
	return ((void* (__stdcall *)(void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateDeferredContext])(_this, param1, param2);
}

static void* __stdcall WDID3D11Device_OpenSharedResource(void* _this, void* param1, void* param2, void* param3)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_DATA, ID3D11_Device, ID3D11Device_OpenSharedResource));
	return ((void* (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_OpenSharedResource])(_this, param1, param2, param3);
}

static void* __stdcall WDID3D11Device_CheckFormatSupport(void* _this, void* param1, void* param2)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_DATA, ID3D11_Device, ID3D11Device_CheckFormatSupport));
	return ((void* (__stdcall *)(void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CheckFormatSupport])(_this, param1, param2);
}

static void* __stdcall WDID3D11Device_CheckMultisampleQualityLevels(void* _this, void* param1, void* param2, void* param3)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_DATA, ID3D11_Device, ID3D11Device_CheckMultisampleQualityLevels));
	return ((void* (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CheckMultisampleQualityLevels])(_this, param1, param2, param3);
}

static void __stdcall WDID3D11Device_CheckCounterInfo(void* _this, void* param1)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_DATA, ID3D11_Device, ID3D11Device_CheckCounterInfo));
	((void(__stdcall *)(void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CheckCounterInfo])(_this, param1);
}

static void* __stdcall WDID3D11Device_CheckCounter(void* _this, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_DATA, ID3D11_Device, ID3D11Device_CheckCounter));
	return ((void* (__stdcall *)(void*, void*, void*, void*, void*, void*, void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CheckCounter])(_this, param1, param2, param3, param4, param5, param6, param7, param8, param9);
}

static void* __stdcall WDID3D11Device_CheckFeatureSupport(void* _this, void* param1, void* param2, void* param3)
{
	//Log("Calling ID3D11Device::CheckFeatureSupport");
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_DATA, ID3D11_Device, ID3D11Device_CheckFeatureSupport));
	return ((void* (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CheckFeatureSupport])(_this, param1, param2, param3);
}

static void* __stdcall WDID3D11Device_GetPrivateData(void* _this, void* param1, void* param2, void* param3)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_DATA, ID3D11_Device, ID3D11Device_GetPrivateData));
	return ((void* (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_GetPrivateData])(_this, param1, param2, param3);
}

static void* __stdcall WDID3D11Device_SetPrivateData(void* _this, void* param1, void* param2, void* param3)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_DATA, ID3D11_Device, ID3D11Device_SetPrivateData));
	return ((void* (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_SetPrivateData])(_this, param1, param2, param3);
}

static void* __stdcall WDID3D11Device_SetPrivateDataInterface(void* _this, void* param1, void* param2)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_DATA, ID3D11_Device, ID3D11Device_SetPrivateDataInterface));
	return ((void* (__stdcall *)(void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_SetPrivateDataInterface])(_this, param1, param2);
}

static void* __stdcall WDID3D11Device_GetFeatureLevel(void* _this)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_DATA, ID3D11_Device, ID3D11Device_GetFeatureLevel));
	return ((void* (__stdcall *)(void*))ID3D11DeviceOriginalFuncs[ID3D11Device_GetFeatureLevel])(_this);
}

static void* __stdcall WDID3D11Device_GetCreationFlags(void* _this)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_DATA, ID3D11_Device, ID3D11Device_GetCreationFlags));
	return ((void* (__stdcall *)(void*))ID3D11DeviceOriginalFuncs[ID3D11Device_GetCreationFlags])(_this);
}

static void* __stdcall WDID3D11Device_GetDeviceRemovedReason(void* _this)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_DATA, ID3D11_Device, ID3D11Device_GetDeviceRemovedReason));
	return ((void* (__stdcall *)(void*))ID3D11DeviceOriginalFuncs[ID3D11Device_GetDeviceRemovedReason])(_this);
}

static void __stdcall WDID3D11Device_GetImmediateContext(void* _this, void* param1)
{
	//Log("Calling GetImmediateContext");
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_DATA, ID3D11_Device, ID3D11Device_GetImmediateContext));
	((void(__stdcall *)(void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_GetImmediateContext])(_this, param1);

	if(vTablePatched[ID3D11_DeviceContext] == false){
		PatchvTable((void**)GetVTable(*(void**)param1), ID3D11_DeviceContext, ID3D11DeviceContext__EnumEnd);
	}
}

static void* __stdcall WDID3D11Device_SetExceptionMode(void* _this, void* param1)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_DATA, ID3D11_Device, ID3D11Device_SetExceptionMode));
	return ((void* (__stdcall *)(void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_SetExceptionMode])(_this, param1);
}

static void* __stdcall WDID3D11Device_GetExceptionMode(void* _this)
{
	CallWriter_Reserve(8);
	CallWriter_WriteImmediate4(IncrementCounter());
	CallWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_DATA, ID3D11_Device, ID3D11Device_GetExceptionMode));
	return ((void* (__stdcall *)(void*))ID3D11DeviceOriginalFuncs[ID3D11Device_GetExceptionMode])(_this);
}


void* ID3D11DeviceDataFuncs[ID3D11Device__EnumEnd] = {
	WDID3D11Device_QueryInterface,
	WDID3D11Device_AddRef,
	WDID3D11Device_Release,
	WDID3D11Device_CreateBuffer,
	WDID3D11Device_CreateTexture1D,
	WDID3D11Device_CreateTexture2D,
	WDID3D11Device_CreateTexture3D,
	WDID3D11Device_CreateShaderResourceView,
	WDID3D11Device_CreateUnorderedAccessView,
	WDID3D11Device_CreateRenderTargetView,
	WDID3D11Device_CreateDepthStencilView,
	WDID3D11Device_CreateInputLayout,
	WDID3D11Device_CreateVertexShader,
	WDID3D11Device_CreateGeometryShader,
	WDID3D11Device_CreateGeometryShaderWithStreamOutput,
	WDID3D11Device_CreatePixelShader,
	WDID3D11Device_CreateHullShader,
	WDID3D11Device_CreateDomainShader,
	WDID3D11Device_CreateComputeShader,
	WDID3D11Device_CreateClassLinkage,
	WDID3D11Device_CreateBlendState,
	WDID3D11Device_CreateDepthStencilState,
	WDID3D11Device_CreateRasterizerState,
	WDID3D11Device_CreateSamplerState,
	WDID3D11Device_CreateQuery,
	WDID3D11Device_CreatePredicate,
	WDID3D11Device_CreateCounter,
	WDID3D11Device_CreateDeferredContext,
	WDID3D11Device_OpenSharedResource,
	WDID3D11Device_CheckFormatSupport,
	WDID3D11Device_CheckMultisampleQualityLevels,
	WDID3D11Device_CheckCounterInfo,
	WDID3D11Device_CheckCounter,
	WDID3D11Device_CheckFeatureSupport,
	WDID3D11Device_GetPrivateData,
	WDID3D11Device_SetPrivateData,
	WDID3D11Device_SetPrivateDataInterface,
	WDID3D11Device_GetFeatureLevel,
	WDID3D11Device_GetCreationFlags,
	WDID3D11Device_GetDeviceRemovedReason,
	WDID3D11Device_GetImmediateContext,
	WDID3D11Device_SetExceptionMode,
	WDID3D11Device_GetExceptionMode,
};
