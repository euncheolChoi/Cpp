#include "stdafx.h"
#include <iostream>
using namespace std;

class CTest
{
public:

	// CTestŬ������ ������ �Լ� , �ν��Ͻ��� �����Ǹ� ��� �����͸� �ڵ����� �ʱ�ȭ.
	CTest()
	{
		m_nData = 10;
	}

	// ��� ������ ����
	int m_nData;

	// ��� �Լ� ���� �� ����
	void PrintData(void);
	
};

void CTest::PrintData(void)
{
	// ����: m_nData�� CTest�� ��� ������ int m_nData�̴� => �ĺ��� �˻� ���� ���� ����.
	// ��� ��� �Լ��� �⺻������ ��������, �������, �������� ������ �ĺ��ڸ� �˻���
	cout << m_nData << endl;
}

int _tmain(int argc, _TCHAR* argv[]) {

	//CTest t���� ���� CTestŬ������ m_nData ����� 10���� �ʱ�ȭ��Ű�� �ڵ带 ����(13�� ��) 
	//������ �Լ��� ������ ��� ������ �ʱ�ȭ��Ű�°��̱� ����.
	//���� ������ڵ忡 �ʱ�ȭ�ڵ带 ������� �ʾƵ� ������ �Լ����� ������ ������ ����� �ڵ� �ʱ�ȭ��.

	CTest t;
	t.PrintData();

	return 0;
}