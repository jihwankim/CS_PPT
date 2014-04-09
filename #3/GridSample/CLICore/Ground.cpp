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

	void Ground::Init(CLICore::Core ^core)
	{
		mpInstance->Init(core->GetDeveice());
	}


	void Ground::Create(int nRow, int nCol, float fSize)
	{
		mpInstance->Create(nRow, nCol, fSize);
	}

	void Ground::Render()
	{
		mpInstance->OnRender();
	}
}