#pragma once
#include <intrin.h>

//#define max(a, b) ((a) > (b) ? (a) : (b))

static size_t _calcDataSize(DXGI_FORMAT Format, UINT Width, UINT Height, UINT RowPitch)
{
	if(Width == 0 || Height == 0) {
		return 0;
	}

	size_t BlockSize = 0;
	UINT BlockWidth = 1;
	UINT BlockHeight = 1;
	switch(Format) {
	case DXGI_FORMAT_UNKNOWN:
		return 0;
	case DXGI_FORMAT_R32G32B32A32_TYPELESS:
	case DXGI_FORMAT_R32G32B32A32_FLOAT:
	case DXGI_FORMAT_R32G32B32A32_UINT:
	case DXGI_FORMAT_R32G32B32A32_SINT:
		BlockSize = 128;
		break;
	case DXGI_FORMAT_R32G32B32_TYPELESS:
	case DXGI_FORMAT_R32G32B32_FLOAT:
	case DXGI_FORMAT_R32G32B32_UINT:
	case DXGI_FORMAT_R32G32B32_SINT:
		BlockSize = 96;
		break;
	case DXGI_FORMAT_R16G16B16A16_TYPELESS:
	case DXGI_FORMAT_R16G16B16A16_FLOAT:
	case DXGI_FORMAT_R16G16B16A16_UNORM:
	case DXGI_FORMAT_R16G16B16A16_UINT:
	case DXGI_FORMAT_R16G16B16A16_SNORM:
	case DXGI_FORMAT_R16G16B16A16_SINT:
	case DXGI_FORMAT_R32G32_TYPELESS:
	case DXGI_FORMAT_R32G32_FLOAT:
	case DXGI_FORMAT_R32G32_UINT:
	case DXGI_FORMAT_R32G32_SINT:
	case DXGI_FORMAT_R32G8X24_TYPELESS:
	case DXGI_FORMAT_D32_FLOAT_S8X24_UINT:
	case DXGI_FORMAT_R32_FLOAT_X8X24_TYPELESS:
	case DXGI_FORMAT_X32_TYPELESS_G8X24_UINT:
		BlockSize = 64;
		break;
	case DXGI_FORMAT_R10G10B10A2_TYPELESS:
	case DXGI_FORMAT_R10G10B10A2_UNORM:
	case DXGI_FORMAT_R10G10B10A2_UINT:
	case DXGI_FORMAT_R11G11B10_FLOAT:
	case DXGI_FORMAT_R8G8B8A8_TYPELESS:
	case DXGI_FORMAT_R8G8B8A8_UNORM:
	case DXGI_FORMAT_R8G8B8A8_UNORM_SRGB:
	case DXGI_FORMAT_R8G8B8A8_UINT:
	case DXGI_FORMAT_R8G8B8A8_SNORM:
	case DXGI_FORMAT_R8G8B8A8_SINT:
	case DXGI_FORMAT_R16G16_TYPELESS:
	case DXGI_FORMAT_R16G16_FLOAT:
	case DXGI_FORMAT_R16G16_UNORM:
	case DXGI_FORMAT_R16G16_UINT:
	case DXGI_FORMAT_R16G16_SNORM:
	case DXGI_FORMAT_R16G16_SINT:
	case DXGI_FORMAT_R32_TYPELESS:
	case DXGI_FORMAT_D32_FLOAT:
	case DXGI_FORMAT_R32_FLOAT:
	case DXGI_FORMAT_R32_UINT:
	case DXGI_FORMAT_R32_SINT:
	case DXGI_FORMAT_R24G8_TYPELESS:
	case DXGI_FORMAT_D24_UNORM_S8_UINT:
	case DXGI_FORMAT_R24_UNORM_X8_TYPELESS:
	case DXGI_FORMAT_X24_TYPELESS_G8_UINT:
	case DXGI_FORMAT_R9G9B9E5_SHAREDEXP:
	case DXGI_FORMAT_B8G8R8A8_UNORM:
	case DXGI_FORMAT_B8G8R8X8_UNORM:
	case DXGI_FORMAT_R10G10B10_XR_BIAS_A2_UNORM:
	case DXGI_FORMAT_B8G8R8A8_TYPELESS:
	case DXGI_FORMAT_B8G8R8A8_UNORM_SRGB:
	case DXGI_FORMAT_B8G8R8X8_TYPELESS:
	case DXGI_FORMAT_B8G8R8X8_UNORM_SRGB:
	case DXGI_FORMAT_AYUV:
		BlockSize = 32;
		break;
	case DXGI_FORMAT_R8G8_TYPELESS:
	case DXGI_FORMAT_R8G8_UNORM:
	case DXGI_FORMAT_R8G8_UINT:
	case DXGI_FORMAT_R8G8_SNORM:
	case DXGI_FORMAT_R8G8_SINT:
	case DXGI_FORMAT_R16_TYPELESS:
	case DXGI_FORMAT_R16_FLOAT:
	case DXGI_FORMAT_D16_UNORM:
	case DXGI_FORMAT_R16_UNORM:
	case DXGI_FORMAT_R16_UINT:
	case DXGI_FORMAT_R16_SNORM:
	case DXGI_FORMAT_R16_SINT:
	case DXGI_FORMAT_B5G6R5_UNORM:
	case DXGI_FORMAT_B5G5R5A1_UNORM:
	case DXGI_FORMAT_B4G4R4A4_UNORM:
	case DXGI_FORMAT_A8P8:
		BlockSize = 16;
		break;
	case DXGI_FORMAT_R8_TYPELESS:
	case DXGI_FORMAT_R8_UNORM:
	case DXGI_FORMAT_R8_UINT:
	case DXGI_FORMAT_R8_SNORM:
	case DXGI_FORMAT_R8_SINT:
	case DXGI_FORMAT_A8_UNORM:
	case DXGI_FORMAT_P8:
		BlockSize = 8;
		break;
	case DXGI_FORMAT_R1_UNORM:
		BlockSize = 1;
		break;
	case DXGI_FORMAT_R8G8_B8G8_UNORM:
	case DXGI_FORMAT_G8R8_G8B8_UNORM:
	case DXGI_FORMAT_YUY2:
		BlockSize = 32;
		BlockWidth = 2;
		break;
	case DXGI_FORMAT_BC1_TYPELESS:
	case DXGI_FORMAT_BC1_UNORM:
	case DXGI_FORMAT_BC1_UNORM_SRGB:
	case DXGI_FORMAT_BC4_TYPELESS:
	case DXGI_FORMAT_BC4_UNORM:
	case DXGI_FORMAT_BC4_SNORM:
		BlockSize = 64;
		BlockWidth = 4;
		BlockHeight = 4;
		break;
	case DXGI_FORMAT_BC2_TYPELESS:
	case DXGI_FORMAT_BC2_UNORM:
	case DXGI_FORMAT_BC2_UNORM_SRGB:
	case DXGI_FORMAT_BC3_TYPELESS:
	case DXGI_FORMAT_BC3_UNORM:
	case DXGI_FORMAT_BC3_UNORM_SRGB:
	case DXGI_FORMAT_BC5_TYPELESS:
	case DXGI_FORMAT_BC5_UNORM:
	case DXGI_FORMAT_BC5_SNORM:
	case DXGI_FORMAT_BC6H_TYPELESS:
	case DXGI_FORMAT_BC6H_UF16:
	case DXGI_FORMAT_BC6H_SF16:
	case DXGI_FORMAT_BC7_TYPELESS:
	case DXGI_FORMAT_BC7_UNORM:
	case DXGI_FORMAT_BC7_UNORM_SRGB:
		BlockSize = 128;
		BlockWidth = 4;
		BlockHeight = 4;
		break;

	case DXGI_FORMAT_NV12:
		return (Height + (Height + 1) / 2) * RowPitch;

	case DXGI_FORMAT_Y410:
	case DXGI_FORMAT_Y416:
	case DXGI_FORMAT_P010:
	case DXGI_FORMAT_P016:
	case DXGI_FORMAT_420_OPAQUE:
	case DXGI_FORMAT_Y210:
	case DXGI_FORMAT_Y216:
	case DXGI_FORMAT_NV11:
	case DXGI_FORMAT_AI44:
	case DXGI_FORMAT_IA44:
		Log("apitrace: warning: %s: unsupported DXGI format %u\n", __FUNCTION__, Format);
		return 0;

	default:
		Log("apitrace: warning: %s: unknown DXGI format %u\n", __FUNCTION__, Format);
		return 0;
	}

	Width = (Width + BlockWidth - 1) / BlockWidth;
	Height = (Height + BlockHeight - 1) / BlockHeight;

	size_t size = (Width * BlockSize + 7) / 8;

	if(Height > 1) {
		size += (Height - 1) * RowPitch;
	}

	return size;
}

static size_t _calcDataSize(DXGI_FORMAT Format, UINT Width, UINT Height, UINT RowPitch, UINT Depth, UINT DepthPitch)
{
	if(Depth == 0) {
		return 0;
	}

	size_t size = _calcDataSize(Format, Width, Height, RowPitch);
	if(size && Depth > 1) {
		size += (Depth - 1) * DepthPitch;
	}

	return size;
}


static size_t _calcMipDataSize(UINT MipLevel, DXGI_FORMAT Format, UINT Width, UINT Height, UINT RowPitch, UINT Depth = 1, UINT DepthPitch = 0) {
	if(Width == 0 || Height == 0 || Depth == 0) {
		return 0;
	}

	Width = max(Width >> MipLevel, UINT(1));
	Height = max(Height >> MipLevel, UINT(1));
	Depth = max(Depth >> MipLevel, UINT(1));

	return _calcDataSize(Format, Width, Height, RowPitch, Depth, DepthPitch);
}

inline uint32_t GetNumMipLevels(UINT Width, UINT Height = 1, UINT Depth = 1) {
	uint32_t MipLevels = 0;
	do {
		++MipLevels;
		Width >>= 1;
		Height >>= 1;
		Depth >>= 1;
	} while(Width || Height || Depth);
	return MipLevels;
}

inline uint32_t GetNumMipLevels1D(const D3D11_TEXTURE1D_DESC *pDesc){
	uint32_t MipLevels;

	if(pDesc->MipLevels == 0){
		if(_BitScanReverse((unsigned long*)&MipLevels, pDesc->Width) == 0){
			MipLevels = 0;
		}
		MipLevels = MipLevels + 1;
	}else{
		MipLevels = pDesc->MipLevels;
	}

	return MipLevels;
}

inline uint32_t GetNumMipLevels2D(const D3D11_TEXTURE2D_DESC *pDesc){
	uint32_t MipLevels;

	if(pDesc->MipLevels == 0){
		uint32_t MipLevelsX, MipLevelsY;

		if(_BitScanReverse((unsigned long*)&MipLevelsX, pDesc->Width) == 0){
			MipLevelsX = 0;
		}
		
		if(_BitScanReverse((unsigned long*)&MipLevelsY, pDesc->Height) == 0){
			MipLevelsY = 0;
		}

		MipLevels = max(MipLevelsX, MipLevelsY) + 1;
	}else{
		MipLevels = pDesc->MipLevels;
	}

	return MipLevels;
}

inline uint32_t GetNumMipLevels3D(const D3D11_TEXTURE3D_DESC *pDesc){
	uint32_t MipLevels;

	if(pDesc->MipLevels == 0){
		uint32_t MipLevelsX, MipLevelsY, MipLevelsZ;

		if(_BitScanReverse((unsigned long*)&MipLevelsX, pDesc->Width) == 0){
			MipLevelsX = 0;
		}

		if(_BitScanReverse((unsigned long*)&MipLevelsY, pDesc->Height) == 0){
			MipLevelsY = 0;
		}

		if(_BitScanReverse((unsigned long*)&MipLevelsZ, pDesc->Depth) == 0){
			MipLevelsZ = 0;
		}

		MipLevels = max(MipLevelsX, max(MipLevelsY, MipLevelsZ)) + 1;
	}else{
		MipLevels = pDesc->MipLevels;
	}

	return MipLevels;
}

inline uint32_t GetNumSubResources1D(const D3D11_TEXTURE1D_DESC *pDesc) {
	return GetNumMipLevels1D(pDesc) * pDesc->ArraySize;
}

inline uint32_t GetNumSubResources2D(const D3D11_TEXTURE2D_DESC *pDesc) {
	return GetNumMipLevels2D(pDesc) * pDesc->ArraySize;
}

inline uint32_t GetNumSubResources3D(const D3D11_TEXTURE3D_DESC *pDesc) {
	return GetNumMipLevels3D(pDesc);
}

static inline size_t CalcSubresourceSize1D(const D3D11_TEXTURE1D_DESC *pDesc, uint32_t Subresource, uint32_t MipLevelsNum) {
	uint32_t MipLevel = Subresource % MipLevelsNum;
	return _calcMipDataSize(MipLevel, pDesc->Format, pDesc->Width, 1, 0, 1, 0);
}

static inline size_t CalcSubresourceSize2D(const D3D11_TEXTURE2D_DESC *pDesc, uint32_t Subresource, uint32_t MipLevelsNum, uint32_t RowPitch) {
	uint32_t MipLevel = Subresource % MipLevelsNum;
	return _calcMipDataSize(MipLevel, pDesc->Format, pDesc->Width, pDesc->Height, RowPitch, 1, 0);
}

static inline size_t CalcSubresourceSize3D(const D3D11_TEXTURE3D_DESC *pDesc, uint32_t Subresource, uint32_t RowPitch, uint32_t SlicePitch) {
	uint32_t MipLevel = Subresource;
	return _calcMipDataSize(MipLevel, pDesc->Format, pDesc->Width, pDesc->Height, RowPitch, pDesc->Depth, SlicePitch);
}
