// CLICore.h

#pragma once
#pragma comment(lib, "Core")
#include "../Core/Core.h"
using namespace System;

class DirectX;

namespace CLICore {

	public ref class Core
	{
	protected:
		DirectX *mpInstance;

	public:
		Core();
		virtual ~Core();

  		BOOL Init(int hWnd);
		BOOL DrawScene(bool Clear);
		VOID EndScene();
		VOID SetCamera();
		LPDIRECT3DDEVICE9 GetDeveice();

	private:
		HWND mhWnd;
	};
}
