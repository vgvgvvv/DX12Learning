#include "DX12Application.h"

#include "WindowLayer.h"

void DX12Application::Init()
{
	LayerManager.PushLayer(new WindowLayer(800, 600, appInstance));
}

void DX12Application::Uninit()
{
}
