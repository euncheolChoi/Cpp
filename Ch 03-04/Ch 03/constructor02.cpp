#include "stdafx.h"
#include <iostream>
using namespace std;

class CTest
{

	int m_nData;
public:

	// �������� �Ű������� ���޵� ������ ��� ������ �ʱ�ȭ�Ѵ�!
	// ���� : �Ű������� �ϳ��� ���� �����ڸ� ����Ʈ �����ڶ�� �Ѵ�. ���� ��� CTest() {cout << "CTest::CTest()" << endl;}
	CTest(int nParam) : m_nData(nParam)
	{
		cout << "CTest::CTest" << endl;
	}

	~CTest()
	{
		// ������ �� �Ű������� ���� ���� ����Ѵ�.
		cout << "~CTest::CTest" << m_nData << endl;
	}

};

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "Begin" << endl;
	// ������ ȣ��, CTest Ŭ���� ��ü�� ����.
	// ����Ʈ �����ڴ� ���������Ƿ� ����Ʈ �� ������ ���x , �� CTest a;�� ������.
	CTest a(1);
	cout << "Before b" << endl;
	// ������ ȣ��
	CTest b(2);
	cout << "End" << endl;

	return 0;
}