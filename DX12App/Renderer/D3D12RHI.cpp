#include "D3D12RHI.h"
#include "D3DUtil.h"

using Microsoft::WRL::ComPtr;

void D3D12RHI::Init()
{
#if defined(DEBUG) || defined(_DEBUG) 
	// Enable the D3D12 debug layer.
	EnableDebugLayer();
#endif
}

void D3D12RHI::EnableDebugLayer()
{
	ComPtr<ID3D12Debug> debugController;
	ThrowIfFailed(D3D12GetDebugInterface(IID_PPV_ARGS(&debugController)));
	debugController->EnableDebugLayer();
}
