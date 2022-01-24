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

	//���ӽ����̽� ���� ����
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
	TestFunc();		//������ ����
	::TestFunc();	//����� ����

	Test::DEV::TestFunc();		//�������ǵ� namespace
	cout << Test::g_nData << endl;

	return 0;
}