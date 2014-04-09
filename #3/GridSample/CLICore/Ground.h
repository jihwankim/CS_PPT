// CLICore.h

#pragma once
#pragma comment(lib, "Core")
#include "../Core/Ground.h"
#include "CLICore.h"
using namespace System;

class CGround;

namespace CLICore {

	public ref class Ground
	{
	protected:
		CGround *mpInstance;
		CLICore::Core ^mCore;

	public:
		Ground();
		virtual ~Ground();

		void Init(CLICore::Core ^core);
		void Create( int nRow, int nCol, float fSize);
		void Render();
	};
}
