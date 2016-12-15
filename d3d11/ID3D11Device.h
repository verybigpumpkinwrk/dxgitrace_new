#pragma once

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
static void* __stdcall WID3D11Device_QueryInterface(void* param0)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_QueryInterface));
	return ((void* (__stdcall *)(void*))ID3D11DeviceOriginalFuncs[ID3D11Device_QueryInterface])(param0);
}

static void* __stdcall WID3D11Device_AddRef(void* param0)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_AddRef));
	return ((void* (__stdcall *)(void*))ID3D11DeviceOriginalFuncs[ID3D11Device_AddRef])(param0);
}

static void* __stdcall WID3D11Device_Release(void* param0)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_Release));
	return ((void* (__stdcall *)(void*))ID3D11DeviceOriginalFuncs[ID3D11Device_Release])(param0);
}

static void* __stdcall WID3D11Device_CreateBuffer(void* param0, void* param1, void* param2, void* param3)
{
	Log("Calling ID3D11Device::CreateBuffer");
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_CreateBuffer));
	return ((void* (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateBuffer])(param0, param1, param2, param3);
}

static void* __stdcall WID3D11Device_CreateTexture1D(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_CreateTexture1D));
	return ((void* (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateTexture1D])(param0, param1, param2, param3);
}

static void* __stdcall WID3D11Device_CreateTexture2D(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_CreateTexture2D));
	return ((void* (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateTexture2D])(param0, param1, param2, param3);
}

static void* __stdcall WID3D11Device_CreateTexture3D(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_CreateTexture3D));
	return ((void* (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateTexture3D])(param0, param1, param2, param3);
}

static void* __stdcall WID3D11Device_CreateShaderResourceView(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_CreateShaderResourceView));
	return ((void* (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateShaderResourceView])(param0, param1, param2, param3);
}

static void* __stdcall WID3D11Device_CreateUnorderedAccessView(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_CreateUnorderedAccessView));
	return ((void* (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateUnorderedAccessView])(param0, param1, param2, param3);
}

static void* __stdcall WID3D11Device_CreateRenderTargetView(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_CreateRenderTargetView));
	return ((void* (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateRenderTargetView])(param0, param1, param2, param3);
}

static void* __stdcall WID3D11Device_CreateDepthStencilView(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_CreateDepthStencilView));
	return ((void* (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateDepthStencilView])(param0, param1, param2, param3);
}

static void* __stdcall WID3D11Device_CreateInputLayout(void* param0, void* param1, void* param2, void* param3, void* param4, void* param5)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_CreateInputLayout));
	return ((void* (__stdcall *)(void*, void*, void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateInputLayout])(param0, param1, param2, param3, param4, param5);
}

static void* __stdcall WID3D11Device_CreateVertexShader(void* param0, void* param1, void* param2, void* param3, void* param4)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_CreateVertexShader));
	return ((void* (__stdcall *)(void*, void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateVertexShader])(param0, param1, param2, param3, param4);
}

static void* __stdcall WID3D11Device_CreateGeometryShader(void* param0, void* param1, void* param2, void* param3, void* param4)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_CreateGeometryShader));
	return ((void* (__stdcall *)(void*, void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateGeometryShader])(param0, param1, param2, param3, param4);
}

static void* __stdcall WID3D11Device_CreateGeometryShaderWithStreamOutput(void* param0, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_CreateGeometryShaderWithStreamOutput));
	return ((void* (__stdcall *)(void*, void*, void*, void*, void*, void*, void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateGeometryShaderWithStreamOutput])(param0, param1, param2, param3, param4, param5, param6, param7, param8, param9);
}

static void* __stdcall WID3D11Device_CreatePixelShader(void* param0, void* param1, void* param2, void* param3, void* param4)
{
	Log("Calling CreatePixelShader");
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_CreatePixelShader));
	return ((void* (__stdcall *)(void*, void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreatePixelShader])(param0, param1, param2, param3, param4);
}

static void* __stdcall WID3D11Device_CreateHullShader(void* param0, void* param1, void* param2, void* param3, void* param4)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_CreateHullShader));
	return ((void* (__stdcall *)(void*, void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateHullShader])(param0, param1, param2, param3, param4);
}

static void* __stdcall WID3D11Device_CreateDomainShader(void* param0, void* param1, void* param2, void* param3, void* param4)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_CreateDomainShader));
	return ((void* (__stdcall *)(void*, void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateDomainShader])(param0, param1, param2, param3, param4);
}

static void* __stdcall WID3D11Device_CreateComputeShader(void* param0, void* param1, void* param2, void* param3, void* param4)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_CreateComputeShader));
	return ((void* (__stdcall *)(void*, void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateComputeShader])(param0, param1, param2, param3, param4);
}

static void* __stdcall WID3D11Device_CreateClassLinkage(void* param0, void* param1)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_CreateClassLinkage));
	return ((void* (__stdcall *)(void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateClassLinkage])(param0, param1);
}

static void* __stdcall WID3D11Device_CreateBlendState(void* param0, void* param1, void* param2)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_CreateBlendState));
	return ((void* (__stdcall *)(void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateBlendState])(param0, param1, param2);
}

static void* __stdcall WID3D11Device_CreateDepthStencilState(void* param0, void* param1, void* param2)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_CreateDepthStencilState));
	return ((void* (__stdcall *)(void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateDepthStencilState])(param0, param1, param2);
}

static void* __stdcall WID3D11Device_CreateRasterizerState(void* param0, void* param1, void* param2)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_CreateRasterizerState));
	return ((void* (__stdcall *)(void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateRasterizerState])(param0, param1, param2);
}

static void* __stdcall WID3D11Device_CreateSamplerState(void* param0, void* param1, void* param2)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_CreateSamplerState));
	return ((void* (__stdcall *)(void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateSamplerState])(param0, param1, param2);
}

static void* __stdcall WID3D11Device_CreateQuery(void* param0, void* param1, void* param2)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_CreateQuery));
	return ((void* (__stdcall *)(void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateQuery])(param0, param1, param2);
}

static void* __stdcall WID3D11Device_CreatePredicate(void* param0, void* param1, void* param2)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_CreatePredicate));
	return ((void* (__stdcall *)(void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreatePredicate])(param0, param1, param2);
}

static void* __stdcall WID3D11Device_CreateCounter(void* param0, void* param1, void* param2)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_CreateCounter));
	return ((void* (__stdcall *)(void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateCounter])(param0, param1, param2);
}

static void* __stdcall WID3D11Device_CreateDeferredContext(void* param0, void* param1, void* param2)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_CreateDeferredContext));
	return ((void* (__stdcall *)(void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CreateDeferredContext])(param0, param1, param2);
}

static void* __stdcall WID3D11Device_OpenSharedResource(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_OpenSharedResource));
	return ((void* (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_OpenSharedResource])(param0, param1, param2, param3);
}

static void* __stdcall WID3D11Device_CheckFormatSupport(void* param0, void* param1, void* param2)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_CheckFormatSupport));
	return ((void* (__stdcall *)(void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CheckFormatSupport])(param0, param1, param2);
}

static void* __stdcall WID3D11Device_CheckMultisampleQualityLevels(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_CheckMultisampleQualityLevels));
	return ((void* (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CheckMultisampleQualityLevels])(param0, param1, param2, param3);
}

static void __stdcall WID3D11Device_CheckCounterInfo(void* param0, void* param1)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_CheckCounterInfo));
	((void (__stdcall *)(void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CheckCounterInfo])(param0, param1);
}

static void* __stdcall WID3D11Device_CheckCounter(void* param0, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_CheckCounter));
	return ((void* (__stdcall *)(void*, void*, void*, void*, void*, void*, void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CheckCounter])(param0, param1, param2, param3, param4, param5, param6, param7, param8, param9);
}

static void* __stdcall WID3D11Device_CheckFeatureSupport(void* param0, void* param1, void* param2, void* param3)
{
	Log("Calling ID3D11Device::CheckFeatureSupport");
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_CheckFeatureSupport));
	return ((void* (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_CheckFeatureSupport])(param0, param1, param2, param3);
}

static void* __stdcall WID3D11Device_GetPrivateData(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_GetPrivateData));
	return ((void* (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_GetPrivateData])(param0, param1, param2, param3);
}

static void* __stdcall WID3D11Device_SetPrivateData(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_SetPrivateData));
	return ((void* (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_SetPrivateData])(param0, param1, param2, param3);
}

static void* __stdcall WID3D11Device_SetPrivateDataInterface(void* param0, void* param1, void* param2)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_SetPrivateDataInterface));
	return ((void* (__stdcall *)(void*, void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_SetPrivateDataInterface])(param0, param1, param2);
}

static void* __stdcall WID3D11Device_GetFeatureLevel(void* param0)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_GetFeatureLevel));
	return ((void* (__stdcall *)(void*))ID3D11DeviceOriginalFuncs[ID3D11Device_GetFeatureLevel])(param0);
}

static void* __stdcall WID3D11Device_GetCreationFlags(void* param0)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_GetCreationFlags));
	return ((void* (__stdcall *)(void*))ID3D11DeviceOriginalFuncs[ID3D11Device_GetCreationFlags])(param0);
}

static void* __stdcall WID3D11Device_GetDeviceRemovedReason(void* param0)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_GetDeviceRemovedReason));
	return ((void* (__stdcall *)(void*))ID3D11DeviceOriginalFuncs[ID3D11Device_GetDeviceRemovedReason])(param0);
}

static void __stdcall WID3D11Device_GetImmediateContext(void* param0, void* param1)
{
	Log("Calling GetImmediateContext");
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_GetImmediateContext));
	((void (__stdcall *)(void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_GetImmediateContext])(param0, param1);
}

static void* __stdcall WID3D11Device_SetExceptionMode(void* param0, void* param1)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_SetExceptionMode));
	return ((void* (__stdcall *)(void*, void*))ID3D11DeviceOriginalFuncs[ID3D11Device_SetExceptionMode])(param0, param1);
}

static void* __stdcall WID3D11Device_GetExceptionMode(void* param0)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_Device, ID3D11Device_GetExceptionMode));
	return ((void* (__stdcall *)(void*))ID3D11DeviceOriginalFuncs[ID3D11Device_GetExceptionMode])(param0);
}

#endif

// data functions




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