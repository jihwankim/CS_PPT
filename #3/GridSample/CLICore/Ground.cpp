// 기본 DLL 파일입니다.

#include "stdafx.h"

#include "Ground.h"


namespace CLICore
{
	Ground::Ground() : mpInstance(new CGround)
	{
		
	}
	Ground::~Ground()
	{
		if (mpInstance)
		{
			mpInstance->OnRelease();
			delete mpInstance;
			mpInstance = nullptr;
		}
	}

	void Ground::Create(CLICore::Core ^core, int nRow, int nCol, float fSize)
	{
		mpInstance->Create(core->GetDeveice(), nRow, nCol, fSize);
	}

	void Ground::Render()
	{
		mpInstance->OnRender();
	}
}