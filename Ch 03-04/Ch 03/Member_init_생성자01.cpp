#include "stdafx.h"
#include <iostream>
using namespace std;

class CTest
{
public:

	// CTestŬ������ ������ �Լ� , �� �Լ��� '����ڰ� ��ü�� �����ϸ� 
	// �ڵ����� ȣ���'
	CTest()
	{
		m_nData = 10;
	}

	int m_nData;

	void PrintData(void)
	{
		cout << m_nData << endl;

	}

};

int _tmain(int argc, _TCHAR* argv[]) {

	//CTest t���� ���� CTestŬ������ m_nData ����� 10���� �ʱ�ȭ��Ű�� �ڵ带 ����(13�� ��) 
	//������ �Լ��� ������ ��� ������ �ʱ�ȭ��Ű�°��̱� ����.
	//���� ������ڵ忡 �ʱ�ȭ�ڵ带 ������� �ʾƵ� ������ �Լ����� ������ ������ ����� �ڵ� �ʱ�ȭ��.

	CTest t;
	t.PrintData();

	return 0;
}