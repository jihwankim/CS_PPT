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
		// TODO: ���⿡ �� Ŭ������ ���� �޼��带 �߰��մϴ�.
	};
}
