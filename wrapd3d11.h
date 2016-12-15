#pragma once
#include <stdint.h>
#include <d3d11.h>
#include "file_writer.h"


enum D3D11Interfaces{
	ID3D11_Asyncronous = 0,
	ID3D11_BlendState,
	ID3D11_BlendState1,
	ID3D11_CommandList,
	ID3D11_Counter,
	ID3D11_DepthStencilState,
	ID3D11_Device,
	ID3D11_Device1,
	ID3D11_Device2,
	ID3D11_Device3,
	ID3D11_Device4,
	ID3D11_DeviceChild,
	ID3D11_DeviceContext,
	ID3D11_DeviceContext1,
	ID3D11_DeviceContext2,
	ID3D11_DeviceContext3,
	ID3D_DeviceContextState,
	ID3D11_InputLayout,
	ID3D11_Multithread,
	ID3D11_Predicate,
	ID3D11_Query,
	ID3D11_Query1,
	ID3D11_RasterizerState,
	ID3D11_RasterizerState1,
	ID3D11_RasterizerState2,
	ID3D11_SamplerState,
	ID3D11_Debug,
	ID3D11_InfoQueue,
	ID3D11_RefDefaultTrackingOptions,
	ID3D11_RefTrackingOptions,
	ID3D11_SwitchToRef,
	ID3D11_TracingDevice,
	ID3D11_Buffer,
	ID3D11_DepthStencilView,
	ID3D11_RenderTargetView,
	ID3D11_RenderTargetView1,
	ID3D11_Resource,
	ID3D11_ShaderResourceView,
	ID3D11_ShaderResourceView1,
	ID3D11_Texture1D,
	ID3D11_Texture2D,
	ID3D11_Texture2D1,
	ID3D11_Texture3D,
	ID3D11_Texture3D1,
	ID3D11_UnorderedAccessView,
	ID3D11_UnorderedAccessView1,
	ID3D11_View,
	ID3D11_ClassInstance,
	ID3D11_ClassLinkage,
	ID3D11_ComputeShader,
	ID3D11_DomainShader,
	ID3D11_FunctionLinkingGraph,
	ID3D11_FunctionReflection,
	ID3D11_FunctionParameterReflection,
	ID3D11_GeometryShader,
	ID3D11_HullShader,
	ID3D11_LibraryReflection,
	ID3D11_Linker,
	ID3D11_LinkingNode,
	ID3D11_Module,
	ID3D11_ModuleInstance,
	ID3D11_PixelShader,
	ID3D11_ShaderReflection,
	ID3D11_ShaderReflectionConstantBuffer,
	ID3D11_ShaderReflectionType,
	ID3D11_ShaderReflectionVariable,
	ID3D11_ShaderTrace,
	ID3D11_ShaderTraceFactory,
	ID3D11_VertexShader,

	D3D11Interfaces__End,
};

struct WrapInterfaceTables{
	void** TableOriginal;
	void** TableSimple;
	void** TableData;
};

#define TRACE_SIMPLE	0
#define TRACE_DATA		1

#define MAKE_FUNC_ID(flag, interface, func) (((uint32_t)flag << 30) | ((uint32_t)interface << 8) | ((uint32_t)(func)))

#define GetVTable(pInterface) (*(void**)pInterface)

extern uint32_t CallCounter;
void PatchvTable(void** pvTable, uint32_t interface_id, uint32_t func_num);
extern bool vTablePatched[D3D11Interfaces__End];

static inline uint32_t IncrementCounter()
{
	//return CallCounter++;
	return InterlockedIncrement(&CallCounter);
}

#include "d3d11/D3D11SubResourceSize.h"

#include "d3d11/ID3D11Device.h"
#include "d3d11/ID3D11DeviceContext.h"

struct WrapInterfaceTables InterfaceAddrTable[/*D3D11Interfaces__End*/] = {
	NULL, NULL, NULL,
	NULL, NULL, NULL,
	NULL, NULL, NULL,
	NULL, NULL, NULL,
	NULL, NULL, NULL,
	NULL, NULL, NULL,
	ID3D11DeviceOriginalFuncs, ID3D11DeviceSimpleFuncs, ID3D11DeviceDataFuncs,
	NULL, NULL, NULL,
	NULL, NULL, NULL,
	NULL, NULL, NULL,
	NULL, NULL, NULL,
	NULL, NULL, NULL,
	ID3D11DeviceContextOriginalFuncs, ID3D11DeviceContextSimpleFuncs, NULL,
};