// CoreLib.cpp : DLL ���� ���α׷��� ���� ������ �Լ��� �����մϴ�.
//

#include "stdafx.h"

extern "C" {

	__declspec(dllexport) int Add(int a, int b);
};

int Add(int a, int b)
{
	return a + b;
}