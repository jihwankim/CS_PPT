// 기본 DLL 파일입니다.

#include "stdafx.h"

#include "CLICore.h"


namespace CLICore
{
 	Core::Core() : mpInstance(new DirectX)
	{
 
 	}
	Core::~Core()
	{
		if (mpInstance)
		{
			delete mpInstance;
			mpInstance = nullptr;
		}
	}

	BOOL Core::Init(int hWnd)
	{
		return mpInstance->Init((HWND)hWnd);
	}

	BOOL Core::DrawScene(bool Clear)
	{
		return mpInstance->DrawScene(Clear);
	}

	VOID Core::EndScene()
	{
		mpInstance->EndScene();
	}

	LPDIRECT3DDEVICE9 Core::GetDeveice()
	{
		return mpInstance->GetDeveice();
	}

	VOID Core::SetCamera()
	{
		mpInstance->SetCamera();
	}

}