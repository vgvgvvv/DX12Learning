#pragma once
#include "Application/Application.h"
#include <Windows.h>

class DX12Application : public Application
{
public:
	DX12Application(HINSTANCE appInstance)
		: appInstance(appInstance)
	{

	}
protected:
	void Init() override;
	void Uninit() override;

private:
	HINSTANCE appInstance = nullptr;
};
