#include "stdafx.h"
#include <iostream>
using namespace std;

//�����ڿ� �Ҹ���. ����ó�� �Ű������� �ϳ��� ���� �����ڸ� '����Ʈ ������'��� ��. Ŭ���� �����ڰ� �����ڿ� �Ҹ��ڸ�
// ������� �ʾƵ� �����Ϸ��� �˾Ƽ� ����� �ִ´�. �����ڿ� �Ҹ��ڰ� ���� Ŭ������ ����.

class CTest
{

public:
	CTest()
	{
		cout << "CTest::CTest()" << endl;
	}

	~CTest()
	{
		cout << "~CTest::CTest()" << endl;
	}


};

int _tmain(int argc, _TCHAR* agrv[])
{
	cout << "Begin" << endl;
	CTest a;
	cout << "end" << endl;

	return 0;
}

/*
1. main()�Լ��� ȣ��Ǳ� ���� �����ڰ� ȣ��� �� �ִ�
2. �����ڴ� ���� ������ �� �ִ�
3. �Ҹ��ڴ� ���� ������ �� ����
4. main()�Լ��� ���� �Ŀ� �Ҹ��ڰ� ȣ��� �� �ִ�.
5. �����ڿ� �Ҹ��ڴ� ������ �� ������ ������ ��� �����Ϸ��� ����� �ִ´�.

*/