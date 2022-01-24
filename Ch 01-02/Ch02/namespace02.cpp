#include "stdafx.h"
#include <iostream>
using namespace std;




void TestFunc(void)
{
	cout << "::TestFunc() : " << endl;
}

namespace Test
{
	int g_nData = 100;

	//네임스페이스 다중 정의
	namespace DEV
	{
		void TestFunc(void)
		{
			cout << "DEV::Test::TestFunc() " << endl;

		}
	}
	
}



int _tmain(int argc, _TCHAR* argv[])
{
	TestFunc();		//묵시적 전역
	::TestFunc();	//명시적 전역

	Test::DEV::TestFunc();		//다중정의된 namespace
	cout << Test::g_nData << endl;

	return 0;
}