#include "stdafx.h"
#include <iostream>	
using namespace std;

// this ������ : �����ڰ� �ۼ�����, Ŭ������ ���� �ν��Ͻ��� ���� �ּҸ� ����Ű�� ������ 
// this �����ʹ� (������)�޴����� �ø��� ��ȣ���� ��! ������ �� �ø��� ��ȣ�� ���۰����� �ƴ϶� ����ܰ迡 �����ȴٴ� ��.
//���� �������� ���� �ø��� ��ȣ�� �̿��ؾ� �ϴ� ���α׷� �ڵ带 ¥�� �� ���� �ִ�.
// �̶� �� �������� �̷��� �ø��� ��ȣ�� �����ϴ� ����� �ٷ� this �������̴�.

class CMyData
{
public:

	// ù ��° �Ű������� ���޵� �ν��Ͻ��� �ּҴ� '�̸��� this�� ������ ����(��������)�� ����ȴ�'
	CMyData(int nParam) : m_nData(nParam) { };
	void PrintData()
	{	
		//������� m_nData�� ��
		cout << m_nData << endl;

		//CMyData Ŭ������ ����� m_nData��
		cout << CMyData::m_nData << endl;
		// �޼��带 ȣ���� �ν��Ͻ��� m_nData��� ��
		cout << this->m_nData << endl;

		// �޼��带 ȣ���� �ν��Ͻ��� CMyData Ŭ���� ��� m_nData��
		cout << this->CMyData::m_nData << endl;
	}

private:
	int m_nData;
};

int _tmain(int argc, _TCHAR* argv[])
{
	CMyData a(5), b(10);
	a.PrintData();
	b.PrintData();

	return 0;
}