#pragma once
#include <Windows.h>
#include "Application/Layer.h"

class WindowLayer : public Layer
{
public:
	WindowLayer(int width, int height, HINSTANCE appInstance)
		: width(width), height(height), appInstance(appInstance)
	{
		
	}
	void OnInit() override;
	void OnUpdate(float deltaTime) override;
	void OnShutDown() override;
	bool ShouldQuit() override;
private:
	bool InitWindow();

	HINSTANCE appInstance;
	HWND      mhMainWnd = nullptr;
	int width;
	int height;
	
	MSG msg = { 0 };
};