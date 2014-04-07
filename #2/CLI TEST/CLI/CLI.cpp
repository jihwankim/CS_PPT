// 기본 DLL 파일입니다.

#include "stdafx.h"

#include "../Core/Core.h"
#include "CLI.h"

namespace CLI
{
	WrapTest::WrapTest() : mpTest(new Test)
	{

	}
	WrapTest::~WrapTest()
	{
		if (mpTest)
		{
			delete mpTest;
			mpTest = nullptr;
		}
	}

	int WrapTest::Add(int a, int b)
	{
		return mpTest->Add(a, b);
	}
}