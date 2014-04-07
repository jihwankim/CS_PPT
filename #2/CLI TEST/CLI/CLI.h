// CLI.h

#pragma once
#pragma comment(lib, "Core")

using namespace System;

class Test;

namespace CLI {

	public ref class WrapTest
	{
	protected:
		Test *mpTest;

	public :
		WrapTest();
		virtual ~WrapTest();

		int Add(int a, int b);
		// TODO: 여기에 이 클래스에 대한 메서드를 추가합니다.
	};
}
