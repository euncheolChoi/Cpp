#include "stdafx.h"
#include <iostream>
using namespace std;

// namespace : c++�� �����ϴ� ���� ��ҵ�(����, �Լ�, Ŭ���� ��)�� �� ���ַ� �����ֱ� ���� ����
// '�Ҽ�'�� �������� ��������.
// using namespace Test�� ����ϸ� namespace�� �����ϰ� ����� �� �ִ�. ���� ����ϴ� namespace�� ���! 
namespace Test
{
	//g_nData�� Test��� ���ӽ����̽��� ���Ѵ�.
	int g_nData = 100;

	void TestFunc(void)
	{
		cout << "Test::TestFunc() " << endl;

	}
}


// _tmain() �Լ��� ����� ���� ���ӽ����̽��� ����
int _tmain(int argc, _TCHAR* argv[])
{
	Test::TestFunc();
	cout << Test::g_nData << endl;

	return 0;
}