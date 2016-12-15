#pragma once

enum ID3D11DeviceContextFuncs{
	ID3D11DeviceContext_QueryInterface,
	ID3D11DeviceContext_AddRef,
	ID3D11DeviceContext_Release,
	ID3D11DeviceContext_GetDevice,
	ID3D11DeviceContext_GetPrivateData,
	ID3D11DeviceContext_SetPrivateData,
	ID3D11DeviceContext_SetPrivateDataInterface,
	ID3D11DeviceContext_VSSetConstantBuffers,
	ID3D11DeviceContext_PSSetShaderResources,
	ID3D11DeviceContext_PSSetShader,
	ID3D11DeviceContext_PSSetSamplers,
	ID3D11DeviceContext_VSSetShader,
	ID3D11DeviceContext_DrawIndexed,
	ID3D11DeviceContext_Draw,
	ID3D11DeviceContext_Map,
	ID3D11DeviceContext_Unmap,
	ID3D11DeviceContext_PSSetConstantBuffers,
	ID3D11DeviceContext_IASetInputLayout,
	ID3D11DeviceContext_IASetVertexBuffers,
	ID3D11DeviceContext_IASetIndexBuffer,
	ID3D11DeviceContext_DrawIndexedInstanced,
	ID3D11DeviceContext_DrawInstanced,
	ID3D11DeviceContext_GSSetConstantBuffers,
	ID3D11DeviceContext_GSSetShader,
	ID3D11DeviceContext_IASetPrimitiveTopology,
	ID3D11DeviceContext_VSSetShaderResources,
	ID3D11DeviceContext_VSSetSamplers,
	ID3D11DeviceContext_Begin,
	ID3D11DeviceContext_End,
	ID3D11DeviceContext_GetData,
	ID3D11DeviceContext_SetPredication,
	ID3D11DeviceContext_GSSetShaderResources,
	ID3D11DeviceContext_GSSetSamplers,
	ID3D11DeviceContext_OMSetRenderTargets,
	ID3D11DeviceContext_OMSetRenderTargetsAndUnorderedAccessViews,
	ID3D11DeviceContext_OMSetBlendState,
	ID3D11DeviceContext_OMSetDepthStencilState,
	ID3D11DeviceContext_SOSetTargets,
	ID3D11DeviceContext_DrawAuto,
	ID3D11DeviceContext_DrawIndexedInstancedIndirect,
	ID3D11DeviceContext_DrawInstancedIndirect,
	ID3D11DeviceContext_Dispatch,
	ID3D11DeviceContext_DispatchIndirect,
	ID3D11DeviceContext_RSSetState,
	ID3D11DeviceContext_RSSetViewports,
	ID3D11DeviceContext_RSSetScissorRects,
	ID3D11DeviceContext_CopySubresourceRegion,
	ID3D11DeviceContext_CopyResource,
	ID3D11DeviceContext_UpdateSubresource,
	ID3D11DeviceContext_CopyStructureCount,
	ID3D11DeviceContext_ClearRenderTargetView,
	ID3D11DeviceContext_ClearUnorderedAccessViewUint,
	ID3D11DeviceContext_ClearUnorderedAccessViewFloat,
	ID3D11DeviceContext_ClearDepthStencilView,
	ID3D11DeviceContext_GenerateMips,
	ID3D11DeviceContext_SetResourceMinLOD,
	ID3D11DeviceContext_GetResourceMinLOD,
	ID3D11DeviceContext_ResolveSubresource,
	ID3D11DeviceContext_ExecuteCommandList,
	ID3D11DeviceContext_HSSetShaderResources,
	ID3D11DeviceContext_HSSetShader,
	ID3D11DeviceContext_HSSetSamplers,
	ID3D11DeviceContext_HSSetConstantBuffers,
	ID3D11DeviceContext_DSSetShaderResources,
	ID3D11DeviceContext_DSSetShader,
	ID3D11DeviceContext_DSSetSamplers,
	ID3D11DeviceContext_DSSetConstantBuffers,
	ID3D11DeviceContext_CSSetShaderResources,
	ID3D11DeviceContext_CSSetUnorderedAccessViews,
	ID3D11DeviceContext_CSSetShader,
	ID3D11DeviceContext_CSSetSamplers,
	ID3D11DeviceContext_CSSetConstantBuffers,
	ID3D11DeviceContext_VSGetConstantBuffers,
	ID3D11DeviceContext_PSGetShaderResources,
	ID3D11DeviceContext_PSGetShader,
	ID3D11DeviceContext_PSGetSamplers,
	ID3D11DeviceContext_VSGetShader,
	ID3D11DeviceContext_PSGetConstantBuffers,
	ID3D11DeviceContext_IAGetInputLayout,
	ID3D11DeviceContext_IAGetVertexBuffers,
	ID3D11DeviceContext_IAGetIndexBuffer,
	ID3D11DeviceContext_GSGetConstantBuffers,
	ID3D11DeviceContext_GSGetShader,
	ID3D11DeviceContext_IAGetPrimitiveTopology,
	ID3D11DeviceContext_VSGetShaderResources,
	ID3D11DeviceContext_VSGetSamplers,
	ID3D11DeviceContext_GetPredication,
	ID3D11DeviceContext_GSGetShaderResources,
	ID3D11DeviceContext_GSGetSamplers,
	ID3D11DeviceContext_OMGetRenderTargets,
	ID3D11DeviceContext_OMGetRenderTargetsAndUnorderedAccessViews,
	ID3D11DeviceContext_OMGetBlendState,
	ID3D11DeviceContext_OMGetDepthStencilState,
	ID3D11DeviceContext_SOGetTargets,
	ID3D11DeviceContext_RSGetState,
	ID3D11DeviceContext_RSGetViewports,
	ID3D11DeviceContext_RSGetScissorRects,
	ID3D11DeviceContext_HSGetShaderResources,
	ID3D11DeviceContext_HSGetShader,
	ID3D11DeviceContext_HSGetSamplers,
	ID3D11DeviceContext_HSGetConstantBuffers,
	ID3D11DeviceContext_DSGetShaderResources,
	ID3D11DeviceContext_DSGetShader,
	ID3D11DeviceContext_DSGetSamplers,
	ID3D11DeviceContext_DSGetConstantBuffers,
	ID3D11DeviceContext_CSGetShaderResources,
	ID3D11DeviceContext_CSGetUnorderedAccessViews,
	ID3D11DeviceContext_CSGetShader,
	ID3D11DeviceContext_CSGetSamplers,
	ID3D11DeviceContext_CSGetConstantBuffers,
	ID3D11DeviceContext_ClearState,
	ID3D11DeviceContext_Flush,
	ID3D11DeviceContext_GetType,
	ID3D11DeviceContext_GetContextFlags,
	ID3D11DeviceContext_FinishCommandList,

	ID3D11DeviceContext__EnumEnd,
};

static void* ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext__EnumEnd] = { NULL };

static void __stdcall WID3D11DeviceContext_QueryInterface(void* param0)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_QueryInterface));
	((void (__stdcall *)(void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_QueryInterface])(param0);
}

static void __stdcall WID3D11DeviceContext_AddRef(void* param0)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_AddRef));
	((void (__stdcall *)(void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_AddRef])(param0);
}

static void __stdcall WID3D11DeviceContext_Release(void* param0)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_Release));
	((void (__stdcall *)(void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_Release])(param0);
}

static void __stdcall WID3D11DeviceContext_GetDevice(void* param0, void* param1)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_GetDevice));
	((void (__stdcall *)(void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_GetDevice])(param0, param1);
}

static void __stdcall WID3D11DeviceContext_GetPrivateData(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_GetPrivateData));
	((void (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_GetPrivateData])(param0, param1, param2, param3);
}

static void __stdcall WID3D11DeviceContext_SetPrivateData(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_SetPrivateData));
	((void (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_SetPrivateData])(param0, param1, param2, param3);
}

static void __stdcall WID3D11DeviceContext_SetPrivateDataInterface(void* param0, void* param1, void* param2)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_SetPrivateDataInterface));
	((void (__stdcall *)(void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_SetPrivateDataInterface])(param0, param1, param2);
}

static void __stdcall WID3D11DeviceContext_VSSetConstantBuffers(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_VSSetConstantBuffers));
	((void (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_VSSetConstantBuffers])(param0, param1, param2, param3);
}

static void __stdcall WID3D11DeviceContext_PSSetShaderResources(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_PSSetShaderResources));
	((void (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_PSSetShaderResources])(param0, param1, param2, param3);
}

static void __stdcall WID3D11DeviceContext_PSSetShader(void* param0, void* param1, void* param2, void* param3)
{
	Log("Calling PSSetShader");
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_PSSetShader));
	((void (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_PSSetShader])(param0, param1, param2, param3);
}

static void __stdcall WID3D11DeviceContext_PSSetSamplers(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_PSSetSamplers));
	((void (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_PSSetSamplers])(param0, param1, param2, param3);
}

static void __stdcall WID3D11DeviceContext_VSSetShader(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_VSSetShader));
	((void (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_VSSetShader])(param0, param1, param2, param3);
}

static void __stdcall WID3D11DeviceContext_DrawIndexed(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_DrawIndexed));
	((void (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_DrawIndexed])(param0, param1, param2, param3);
}

static void __stdcall WID3D11DeviceContext_Draw(void* param0, void* param1, void* param2)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_Draw));
	((void (__stdcall *)(void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_Draw])(param0, param1, param2);
}

static void* __stdcall WID3D11DeviceContext_Map(void* param0, void* param1, void* param2, void* param3, void* param4, void* param5)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_Map));
	return ((void* (__stdcall *)(void*, void*, void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_Map])(param0, param1, param2, param3, param4, param5);
}

static void __stdcall WID3D11DeviceContext_Unmap(void* param0, void* param1, void* param2)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_Unmap));
	((void (__stdcall *)(void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_Unmap])(param0, param1, param2);
}

static void __stdcall WID3D11DeviceContext_PSSetConstantBuffers(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_PSSetConstantBuffers));
	((void (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_PSSetConstantBuffers])(param0, param1, param2, param3);
}

static void __stdcall WID3D11DeviceContext_IASetInputLayout(void* param0, void* param1)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_IASetInputLayout));
	((void (__stdcall *)(void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_IASetInputLayout])(param0, param1);
}

static void __stdcall WID3D11DeviceContext_IASetVertexBuffers(void* param0, void* param1, void* param2, void* param3, void* param4, void* param5)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_IASetVertexBuffers));
	((void (__stdcall *)(void*, void*, void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_IASetVertexBuffers])(param0, param1, param2, param3, param4, param5);
}

static void __stdcall WID3D11DeviceContext_IASetIndexBuffer(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_IASetIndexBuffer));
	((void (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_IASetIndexBuffer])(param0, param1, param2, param3);
}

static void __stdcall WID3D11DeviceContext_DrawIndexedInstanced(void* param0, void* param1, void* param2, void* param3, void* param4, void* param5)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_DrawIndexedInstanced));
	((void (__stdcall *)(void*, void*, void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_DrawIndexedInstanced])(param0, param1, param2, param3, param4, param5);
}

static void __stdcall WID3D11DeviceContext_DrawInstanced(void* param0, void* param1, void* param2, void* param3, void* param4)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_DrawInstanced));
	((void (__stdcall *)(void*, void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_DrawInstanced])(param0, param1, param2, param3, param4);
}

static void __stdcall WID3D11DeviceContext_GSSetConstantBuffers(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_GSSetConstantBuffers));
	((void (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_GSSetConstantBuffers])(param0, param1, param2, param3);
}

static void __stdcall WID3D11DeviceContext_GSSetShader(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_GSSetShader));
	((void (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_GSSetShader])(param0, param1, param2, param3);
}

static void __stdcall WID3D11DeviceContext_IASetPrimitiveTopology(void* param0, void* param1)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_IASetPrimitiveTopology));
	((void (__stdcall *)(void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_IASetPrimitiveTopology])(param0, param1);
}

static void __stdcall WID3D11DeviceContext_VSSetShaderResources(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_VSSetShaderResources));
	((void (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_VSSetShaderResources])(param0, param1, param2, param3);
}

static void __stdcall WID3D11DeviceContext_VSSetSamplers(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_VSSetSamplers));
	((void (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_VSSetSamplers])(param0, param1, param2, param3);
}

static void __stdcall WID3D11DeviceContext_Begin(void* param0, void* param1)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_Begin));
	((void (__stdcall *)(void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_Begin])(param0, param1);
}

static void __stdcall WID3D11DeviceContext_End(void* param0, void* param1)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_End));
	((void (__stdcall *)(void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_End])(param0, param1);
}

static void* __stdcall WID3D11DeviceContext_GetData(void* param0, void* param1, void* param2, void* param3, void* param4)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_GetData));
	return ((void* (__stdcall *)(void*, void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_GetData])(param0, param1, param2, param3, param4);
}

static void __stdcall WID3D11DeviceContext_SetPredication(void* param0, void* param1, void* param2)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_SetPredication));
	((void (__stdcall *)(void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_SetPredication])(param0, param1, param2);
}

static void __stdcall WID3D11DeviceContext_GSSetShaderResources(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_GSSetShaderResources));
	((void (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_GSSetShaderResources])(param0, param1, param2, param3);
}

static void __stdcall WID3D11DeviceContext_GSSetSamplers(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_GSSetSamplers));
	((void (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_GSSetSamplers])(param0, param1, param2, param3);
}

static void __stdcall WID3D11DeviceContext_OMSetRenderTargets(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_OMSetRenderTargets));
	((void (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_OMSetRenderTargets])(param0, param1, param2, param3);
}

static void __stdcall WID3D11DeviceContext_OMSetRenderTargetsAndUnorderedAccessViews(void* param0, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_OMSetRenderTargetsAndUnorderedAccessViews));
	((void (__stdcall *)(void*, void*, void*, void*, void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_OMSetRenderTargetsAndUnorderedAccessViews])(param0, param1, param2, param3, param4, param5, param6, param7);
}

static void __stdcall WID3D11DeviceContext_OMSetBlendState(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_OMSetBlendState));
	((void (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_OMSetBlendState])(param0, param1, param2, param3);
}

static void __stdcall WID3D11DeviceContext_OMSetDepthStencilState(void* param0, void* param1, void* param2)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_OMSetDepthStencilState));
	((void (__stdcall *)(void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_OMSetDepthStencilState])(param0, param1, param2);
}

static void __stdcall WID3D11DeviceContext_SOSetTargets(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_SOSetTargets));
	((void (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_SOSetTargets])(param0, param1, param2, param3);
}

static void __stdcall WID3D11DeviceContext_DrawAuto(void* param0)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_DrawAuto));
	((void (__stdcall *)(void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_DrawAuto])(param0);
}

static void __stdcall WID3D11DeviceContext_DrawIndexedInstancedIndirect(void* param0, void* param1, void* param2)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_DrawIndexedInstancedIndirect));
	((void (__stdcall *)(void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_DrawIndexedInstancedIndirect])(param0, param1, param2);
}

static void __stdcall WID3D11DeviceContext_DrawInstancedIndirect(void* param0, void* param1, void* param2)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_DrawInstancedIndirect));
	((void (__stdcall *)(void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_DrawInstancedIndirect])(param0, param1, param2);
}

static void __stdcall WID3D11DeviceContext_Dispatch(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_Dispatch));
	((void (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_Dispatch])(param0, param1, param2, param3);
}

static void __stdcall WID3D11DeviceContext_DispatchIndirect(void* param0, void* param1, void* param2)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_DispatchIndirect));
	((void (__stdcall *)(void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_DispatchIndirect])(param0, param1, param2);
}

static void __stdcall WID3D11DeviceContext_RSSetState(void* param0, void* param1)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_RSSetState));
	((void (__stdcall *)(void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_RSSetState])(param0, param1);
}

static void __stdcall WID3D11DeviceContext_RSSetViewports(void* param0, void* param1, void* param2)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_RSSetViewports));
	((void (__stdcall *)(void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_RSSetViewports])(param0, param1, param2);
}

static void __stdcall WID3D11DeviceContext_RSSetScissorRects(void* param0, void* param1, void* param2)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_RSSetScissorRects));
	((void (__stdcall *)(void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_RSSetScissorRects])(param0, param1, param2);
}

static void __stdcall WID3D11DeviceContext_CopySubresourceRegion(void* param0, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_CopySubresourceRegion));
	((void (__stdcall *)(void*, void*, void*, void*, void*, void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_CopySubresourceRegion])(param0, param1, param2, param3, param4, param5, param6, param7, param8);
}

static void __stdcall WID3D11DeviceContext_CopyResource(void* param0, void* param1, void* param2)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_CopyResource));
	((void (__stdcall *)(void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_CopyResource])(param0, param1, param2);
}

static void __stdcall WID3D11DeviceContext_UpdateSubresource(void* param0, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_UpdateSubresource));
	((void (__stdcall *)(void*, void*, void*, void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_UpdateSubresource])(param0, param1, param2, param3, param4, param5, param6);
}

static void __stdcall WID3D11DeviceContext_CopyStructureCount(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_CopyStructureCount));
	((void (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_CopyStructureCount])(param0, param1, param2, param3);
}

static void __stdcall WID3D11DeviceContext_ClearRenderTargetView(void* param0, void* param1, void* param2)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_ClearRenderTargetView));
	((void (__stdcall *)(void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_ClearRenderTargetView])(param0, param1, param2);
}

static void __stdcall WID3D11DeviceContext_ClearUnorderedAccessViewUint(void* param0, void* param1, void* param2)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_ClearUnorderedAccessViewUint));
	((void (__stdcall *)(void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_ClearUnorderedAccessViewUint])(param0, param1, param2);
}

static void __stdcall WID3D11DeviceContext_ClearUnorderedAccessViewFloat(void* param0, void* param1, void* param2)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_ClearUnorderedAccessViewFloat));
	((void (__stdcall *)(void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_ClearUnorderedAccessViewFloat])(param0, param1, param2);
}

static void __stdcall WID3D11DeviceContext_ClearDepthStencilView(void* param0, void* param1, void* param2, void* param3, void* param4)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_ClearDepthStencilView));
	((void (__stdcall *)(void*, void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_ClearDepthStencilView])(param0, param1, param2, param3, param4);
}

static void __stdcall WID3D11DeviceContext_GenerateMips(void* param0, void* param1)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_GenerateMips));
	((void (__stdcall *)(void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_GenerateMips])(param0, param1);
}

static void __stdcall WID3D11DeviceContext_SetResourceMinLOD(void* param0, void* param1, void* param2)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_SetResourceMinLOD));
	((void (__stdcall *)(void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_SetResourceMinLOD])(param0, param1, param2);
}

static float __stdcall WID3D11DeviceContext_GetResourceMinLOD(void* param0, void* param1)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_GetResourceMinLOD));
	return ((float (__stdcall *)(void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_GetResourceMinLOD])(param0, param1);
}

static void __stdcall WID3D11DeviceContext_ResolveSubresource(void* param0, void* param1, void* param2, void* param3, void* param4, void* param5)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_ResolveSubresource));
	((void (__stdcall *)(void*, void*, void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_ResolveSubresource])(param0, param1, param2, param3, param4, param5);
}

static void __stdcall WID3D11DeviceContext_ExecuteCommandList(void* param0, void* param1, void* param2)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_ExecuteCommandList));
	((void (__stdcall *)(void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_ExecuteCommandList])(param0, param1, param2);
}

static void __stdcall WID3D11DeviceContext_HSSetShaderResources(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_HSSetShaderResources));
	((void (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_HSSetShaderResources])(param0, param1, param2, param3);
}

static void __stdcall WID3D11DeviceContext_HSSetShader(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_HSSetShader));
	((void (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_HSSetShader])(param0, param1, param2, param3);
}

static void __stdcall WID3D11DeviceContext_HSSetSamplers(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_HSSetSamplers));
	((void (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_HSSetSamplers])(param0, param1, param2, param3);
}

static void __stdcall WID3D11DeviceContext_HSSetConstantBuffers(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_HSSetConstantBuffers));
	((void (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_HSSetConstantBuffers])(param0, param1, param2, param3);
}

static void __stdcall WID3D11DeviceContext_DSSetShaderResources(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_DSSetShaderResources));
	((void (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_DSSetShaderResources])(param0, param1, param2, param3);
}

static void __stdcall WID3D11DeviceContext_DSSetShader(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_DSSetShader));
	((void (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_DSSetShader])(param0, param1, param2, param3);
}

static void __stdcall WID3D11DeviceContext_DSSetSamplers(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_DSSetSamplers));
	((void (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_DSSetSamplers])(param0, param1, param2, param3);
}

static void __stdcall WID3D11DeviceContext_DSSetConstantBuffers(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_DSSetConstantBuffers));
	((void (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_DSSetConstantBuffers])(param0, param1, param2, param3);
}

static void __stdcall WID3D11DeviceContext_CSSetShaderResources(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_CSSetShaderResources));
	((void (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_CSSetShaderResources])(param0, param1, param2, param3);
}

static void __stdcall WID3D11DeviceContext_CSSetUnorderedAccessViews(void* param0, void* param1, void* param2, void* param3, void* param4)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_CSSetUnorderedAccessViews));
	((void (__stdcall *)(void*, void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_CSSetUnorderedAccessViews])(param0, param1, param2, param3, param4);
}

static void __stdcall WID3D11DeviceContext_CSSetShader(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_CSSetShader));
	((void (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_CSSetShader])(param0, param1, param2, param3);
}

static void __stdcall WID3D11DeviceContext_CSSetSamplers(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_CSSetSamplers));
	((void (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_CSSetSamplers])(param0, param1, param2, param3);
}

static void __stdcall WID3D11DeviceContext_CSSetConstantBuffers(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_CSSetConstantBuffers));
	((void (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_CSSetConstantBuffers])(param0, param1, param2, param3);
}

static void __stdcall WID3D11DeviceContext_VSGetConstantBuffers(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_VSGetConstantBuffers));
	((void (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_VSGetConstantBuffers])(param0, param1, param2, param3);
}

static void __stdcall WID3D11DeviceContext_PSGetShaderResources(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_PSGetShaderResources));
	((void (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_PSGetShaderResources])(param0, param1, param2, param3);
}

static void __stdcall WID3D11DeviceContext_PSGetShader(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_PSGetShader));
	((void (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_PSGetShader])(param0, param1, param2, param3);
}

static void __stdcall WID3D11DeviceContext_PSGetSamplers(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_PSGetSamplers));
	((void (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_PSGetSamplers])(param0, param1, param2, param3);
}

static void __stdcall WID3D11DeviceContext_VSGetShader(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_VSGetShader));
	((void (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_VSGetShader])(param0, param1, param2, param3);
}

static void __stdcall WID3D11DeviceContext_PSGetConstantBuffers(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_PSGetConstantBuffers));
	((void (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_PSGetConstantBuffers])(param0, param1, param2, param3);
}

static void __stdcall WID3D11DeviceContext_IAGetInputLayout(void* param0, void* param1)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_IAGetInputLayout));
	((void (__stdcall *)(void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_IAGetInputLayout])(param0, param1);
}

static void __stdcall WID3D11DeviceContext_IAGetVertexBuffers(void* param0, void* param1, void* param2, void* param3, void* param4, void* param5)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_IAGetVertexBuffers));
	((void (__stdcall *)(void*, void*, void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_IAGetVertexBuffers])(param0, param1, param2, param3, param4, param5);
}

static void __stdcall WID3D11DeviceContext_IAGetIndexBuffer(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_IAGetIndexBuffer));
	((void (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_IAGetIndexBuffer])(param0, param1, param2, param3);
}

static void __stdcall WID3D11DeviceContext_GSGetConstantBuffers(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_GSGetConstantBuffers));
	((void (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_GSGetConstantBuffers])(param0, param1, param2, param3);
}

static void __stdcall WID3D11DeviceContext_GSGetShader(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_GSGetShader));
	((void (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_GSGetShader])(param0, param1, param2, param3);
}

static void __stdcall WID3D11DeviceContext_IAGetPrimitiveTopology(void* param0, void* param1)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_IAGetPrimitiveTopology));
	((void (__stdcall *)(void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_IAGetPrimitiveTopology])(param0, param1);
}

static void __stdcall WID3D11DeviceContext_VSGetShaderResources(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_VSGetShaderResources));
	((void (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_VSGetShaderResources])(param0, param1, param2, param3);
}

static void __stdcall WID3D11DeviceContext_VSGetSamplers(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_VSGetSamplers));
	((void (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_VSGetSamplers])(param0, param1, param2, param3);
}

static void __stdcall WID3D11DeviceContext_GetPredication(void* param0, void* param1, void* param2)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_GetPredication));
	((void (__stdcall *)(void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_GetPredication])(param0, param1, param2);
}

static void __stdcall WID3D11DeviceContext_GSGetShaderResources(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_GSGetShaderResources));
	((void (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_GSGetShaderResources])(param0, param1, param2, param3);
}

static void __stdcall WID3D11DeviceContext_GSGetSamplers(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_GSGetSamplers));
	((void (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_GSGetSamplers])(param0, param1, param2, param3);
}

static void __stdcall WID3D11DeviceContext_OMGetRenderTargets(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_OMGetRenderTargets));
	((void (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_OMGetRenderTargets])(param0, param1, param2, param3);
}

static void __stdcall WID3D11DeviceContext_OMGetRenderTargetsAndUnorderedAccessViews(void* param0, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_OMGetRenderTargetsAndUnorderedAccessViews));
	((void (__stdcall *)(void*, void*, void*, void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_OMGetRenderTargetsAndUnorderedAccessViews])(param0, param1, param2, param3, param4, param5, param6);
}

static void __stdcall WID3D11DeviceContext_OMGetBlendState(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_OMGetBlendState));
	((void (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_OMGetBlendState])(param0, param1, param2, param3);
}

static void __stdcall WID3D11DeviceContext_OMGetDepthStencilState(void* param0, void* param1, void* param2)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_OMGetDepthStencilState));
	((void (__stdcall *)(void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_OMGetDepthStencilState])(param0, param1, param2);
}

static void __stdcall WID3D11DeviceContext_SOGetTargets(void* param0, void* param1, void* param2)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_SOGetTargets));
	((void (__stdcall *)(void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_SOGetTargets])(param0, param1, param2);
}

static void __stdcall WID3D11DeviceContext_RSGetState(void* param0, void* param1)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_RSGetState));
	((void (__stdcall *)(void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_RSGetState])(param0, param1);
}

static void __stdcall WID3D11DeviceContext_RSGetViewports(void* param0, void* param1, void* param2)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_RSGetViewports));
	((void (__stdcall *)(void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_RSGetViewports])(param0, param1, param2);
}

static void __stdcall WID3D11DeviceContext_RSGetScissorRects(void* param0, void* param1, void* param2)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_RSGetScissorRects));
	((void (__stdcall *)(void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_RSGetScissorRects])(param0, param1, param2);
}

static void __stdcall WID3D11DeviceContext_HSGetShaderResources(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_HSGetShaderResources));
	((void (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_HSGetShaderResources])(param0, param1, param2, param3);
}

static void __stdcall WID3D11DeviceContext_HSGetShader(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_HSGetShader));
	((void (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_HSGetShader])(param0, param1, param2, param3);
}

static void __stdcall WID3D11DeviceContext_HSGetSamplers(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_HSGetSamplers));
	((void (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_HSGetSamplers])(param0, param1, param2, param3);
}

static void __stdcall WID3D11DeviceContext_HSGetConstantBuffers(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_HSGetConstantBuffers));
	((void (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_HSGetConstantBuffers])(param0, param1, param2, param3);
}

static void __stdcall WID3D11DeviceContext_DSGetShaderResources(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_DSGetShaderResources));
	((void (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_DSGetShaderResources])(param0, param1, param2, param3);
}

static void __stdcall WID3D11DeviceContext_DSGetShader(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_DSGetShader));
	((void (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_DSGetShader])(param0, param1, param2, param3);
}

static void __stdcall WID3D11DeviceContext_DSGetSamplers(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_DSGetSamplers));
	((void (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_DSGetSamplers])(param0, param1, param2, param3);
}

static void __stdcall WID3D11DeviceContext_DSGetConstantBuffers(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_DSGetConstantBuffers));
	((void (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_DSGetConstantBuffers])(param0, param1, param2, param3);
}

static void __stdcall WID3D11DeviceContext_CSGetShaderResources(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_CSGetShaderResources));
	((void (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_CSGetShaderResources])(param0, param1, param2, param3);
}

static void __stdcall WID3D11DeviceContext_CSGetUnorderedAccessViews(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_CSGetUnorderedAccessViews));
	((void (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_CSGetUnorderedAccessViews])(param0, param1, param2, param3);
}

static void __stdcall WID3D11DeviceContext_CSGetShader(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_CSGetShader));
	((void (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_CSGetShader])(param0, param1, param2, param3);
}

static void __stdcall WID3D11DeviceContext_CSGetSamplers(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_CSGetSamplers));
	((void (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_CSGetSamplers])(param0, param1, param2, param3);
}

static void __stdcall WID3D11DeviceContext_CSGetConstantBuffers(void* param0, void* param1, void* param2, void* param3)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_CSGetConstantBuffers));
	((void (__stdcall *)(void*, void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_CSGetConstantBuffers])(param0, param1, param2, param3);
}

static void __stdcall WID3D11DeviceContext_ClearState(void* param0)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_ClearState));
	((void (__stdcall *)(void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_ClearState])(param0);
}

static void __stdcall WID3D11DeviceContext_Flush(void* param0)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_Flush));
	((void (__stdcall *)(void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_Flush])(param0);
}

static void* __stdcall WID3D11DeviceContext_GetType(void* param0)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_GetType));
	return ((void* (__stdcall *)(void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_GetType])(param0);
}

static void* __stdcall WID3D11DeviceContext_GetContextFlags(void* param0)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_GetContextFlags));
	return ((void* (__stdcall *)(void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_GetContextFlags])(param0);
}

static void* __stdcall WID3D11DeviceContext_FinishCommandList(void* param0, void* param1, void* param2)
{
	FileWriter_Reserve(8);
	FileWriter_WriteImmediate4(IncrementCounter());
	FileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, ID3D11_DeviceContext, ID3D11DeviceContext_FinishCommandList));
	return ((void* (__stdcall *)(void*, void*, void*))ID3D11DeviceContextOriginalFuncs[ID3D11DeviceContext_FinishCommandList])(param0, param1, param2);
}



void* ID3D11DeviceContextSimpleFuncs[ID3D11DeviceContext__EnumEnd] = {
	WID3D11DeviceContext_QueryInterface,
	WID3D11DeviceContext_AddRef,
	WID3D11DeviceContext_Release,
	WID3D11DeviceContext_GetDevice,
	WID3D11DeviceContext_GetPrivateData,
	WID3D11DeviceContext_SetPrivateData,
	WID3D11DeviceContext_SetPrivateDataInterface,
	WID3D11DeviceContext_VSSetConstantBuffers,
	WID3D11DeviceContext_PSSetShaderResources,
	WID3D11DeviceContext_PSSetShader,
	WID3D11DeviceContext_PSSetSamplers,
	WID3D11DeviceContext_VSSetShader,
	WID3D11DeviceContext_DrawIndexed,
	WID3D11DeviceContext_Draw,
	WID3D11DeviceContext_Map,
	WID3D11DeviceContext_Unmap,
	WID3D11DeviceContext_PSSetConstantBuffers,
	WID3D11DeviceContext_IASetInputLayout,
	WID3D11DeviceContext_IASetVertexBuffers,
	WID3D11DeviceContext_IASetIndexBuffer,
	WID3D11DeviceContext_DrawIndexedInstanced,
	WID3D11DeviceContext_DrawInstanced,
	WID3D11DeviceContext_GSSetConstantBuffers,
	WID3D11DeviceContext_GSSetShader,
	WID3D11DeviceContext_IASetPrimitiveTopology,
	WID3D11DeviceContext_VSSetShaderResources,
	WID3D11DeviceContext_VSSetSamplers,
	WID3D11DeviceContext_Begin,
	WID3D11DeviceContext_End,
	WID3D11DeviceContext_GetData,
	WID3D11DeviceContext_SetPredication,
	WID3D11DeviceContext_GSSetShaderResources,
	WID3D11DeviceContext_GSSetSamplers,
	WID3D11DeviceContext_OMSetRenderTargets,
	WID3D11DeviceContext_OMSetRenderTargetsAndUnorderedAccessViews,
	WID3D11DeviceContext_OMSetBlendState,
	WID3D11DeviceContext_OMSetDepthStencilState,
	WID3D11DeviceContext_SOSetTargets,
	WID3D11DeviceContext_DrawAuto,
	WID3D11DeviceContext_DrawIndexedInstancedIndirect,
	WID3D11DeviceContext_DrawInstancedIndirect,
	WID3D11DeviceContext_Dispatch,
	WID3D11DeviceContext_DispatchIndirect,
	WID3D11DeviceContext_RSSetState,
	WID3D11DeviceContext_RSSetViewports,
	WID3D11DeviceContext_RSSetScissorRects,
	WID3D11DeviceContext_CopySubresourceRegion,
	WID3D11DeviceContext_CopyResource,
	WID3D11DeviceContext_UpdateSubresource,
	WID3D11DeviceContext_CopyStructureCount,
	WID3D11DeviceContext_ClearRenderTargetView,
	WID3D11DeviceContext_ClearUnorderedAccessViewUint,
	WID3D11DeviceContext_ClearUnorderedAccessViewFloat,
	WID3D11DeviceContext_ClearDepthStencilView,
	WID3D11DeviceContext_GenerateMips,
	WID3D11DeviceContext_SetResourceMinLOD,
	WID3D11DeviceContext_GetResourceMinLOD,
	WID3D11DeviceContext_ResolveSubresource,
	WID3D11DeviceContext_ExecuteCommandList,
	WID3D11DeviceContext_HSSetShaderResources,
	WID3D11DeviceContext_HSSetShader,
	WID3D11DeviceContext_HSSetSamplers,
	WID3D11DeviceContext_HSSetConstantBuffers,
	WID3D11DeviceContext_DSSetShaderResources,
	WID3D11DeviceContext_DSSetShader,
	WID3D11DeviceContext_DSSetSamplers,
	WID3D11DeviceContext_DSSetConstantBuffers,
	WID3D11DeviceContext_CSSetShaderResources,
	WID3D11DeviceContext_CSSetUnorderedAccessViews,
	WID3D11DeviceContext_CSSetShader,
	WID3D11DeviceContext_CSSetSamplers,
	WID3D11DeviceContext_CSSetConstantBuffers,
	WID3D11DeviceContext_VSGetConstantBuffers,
	WID3D11DeviceContext_PSGetShaderResources,
	WID3D11DeviceContext_PSGetShader,
	WID3D11DeviceContext_PSGetSamplers,
	WID3D11DeviceContext_VSGetShader,
	WID3D11DeviceContext_PSGetConstantBuffers,
	WID3D11DeviceContext_IAGetInputLayout,
	WID3D11DeviceContext_IAGetVertexBuffers,
	WID3D11DeviceContext_IAGetIndexBuffer,
	WID3D11DeviceContext_GSGetConstantBuffers,
	WID3D11DeviceContext_GSGetShader,
	WID3D11DeviceContext_IAGetPrimitiveTopology,
	WID3D11DeviceContext_VSGetShaderResources,
	WID3D11DeviceContext_VSGetSamplers,
	WID3D11DeviceContext_GetPredication,
	WID3D11DeviceContext_GSGetShaderResources,
	WID3D11DeviceContext_GSGetSamplers,
	WID3D11DeviceContext_OMGetRenderTargets,
	WID3D11DeviceContext_OMGetRenderTargetsAndUnorderedAccessViews,
	WID3D11DeviceContext_OMGetBlendState,
	WID3D11DeviceContext_OMGetDepthStencilState,
	WID3D11DeviceContext_SOGetTargets,
	WID3D11DeviceContext_RSGetState,
	WID3D11DeviceContext_RSGetViewports,
	WID3D11DeviceContext_RSGetScissorRects,
	WID3D11DeviceContext_HSGetShaderResources,
	WID3D11DeviceContext_HSGetShader,
	WID3D11DeviceContext_HSGetSamplers,
	WID3D11DeviceContext_HSGetConstantBuffers,
	WID3D11DeviceContext_DSGetShaderResources,
	WID3D11DeviceContext_DSGetShader,
	WID3D11DeviceContext_DSGetSamplers,
	WID3D11DeviceContext_DSGetConstantBuffers,
	WID3D11DeviceContext_CSGetShaderResources,
	WID3D11DeviceContext_CSGetUnorderedAccessViews,
	WID3D11DeviceContext_CSGetShader,
	WID3D11DeviceContext_CSGetSamplers,
	WID3D11DeviceContext_CSGetConstantBuffers,
	WID3D11DeviceContext_ClearState,
	WID3D11DeviceContext_Flush,
	WID3D11DeviceContext_GetType,
	WID3D11DeviceContext_GetContextFlags,
	WID3D11DeviceContext_FinishCommandList,
};

