// CLICore.h

#pragma once
#pragma comment(lib, "Core")
#pragma comment(lib, "d3d9")
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
  		void Render();

	private:
		HWND mhWnd;
	};
}
