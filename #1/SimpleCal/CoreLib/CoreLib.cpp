// CoreLib.cpp : DLL 응용 프로그램을 위해 내보낸 함수를 정의합니다.
//

#include "stdafx.h"

extern "C" {

	__declspec(dllexport) int Add(int a, int b);
};

int Add(int a, int b)
{
	return a + b;
}