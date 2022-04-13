#include "DX12Application.h"

#include "Layers/WindowLayer.h"

void DX12Application::Init()
{
	LayerManager.PushLayer(std::make_shared<WindowLayer>(800, 600, appInstance));
}

void DX12Application::Uninit()
{
}
