#include "stdafx.h"	
#include <stdio.h>
using namespace std;

//this �����͸� �����ϱ� ���� c�������� Ǯ� ����( ���� ������ ���� ��!)

class CMyData
{

public:
	CMyData(int nParam) : m_nData(nParam) { };
	void PrintData(CMyData *pData)
	{
		//�޼����� ���ڷ� ���� �ν��Ͻ��� �ּҸ� CMyData Ŭ������ ���ο� ������ ���� 
		// *this �� �����Ѵ�.
		// �� �������� this�����͸� �̿��� ������ �����͸� �̿��� ����ü ��� ���ٰ� ����
		CMyData *this = pData;

		cout << m_nData << endl;
		cout << CMyData::m_nData << endl;
		cout << this->m_nData << endl;
		cout << this->CMyData::m_nData;

		
	}
};

int _tmian(int argc, _TCHAR* argv[])
{
	CMyData a(5);
	//�̷��� �޼��带 ȣ���ϴ� �ν��Ͻ��� �ּҸ� �Ѱ��ش�.
	a.PrintData(&a);

	return 0;
}