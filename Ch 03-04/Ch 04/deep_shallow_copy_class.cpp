#include "stdafx.h"
#include <iostream>
using namespace std;

// CMyData b(a) �ڵ尡 ����Ǵ� ���� ���� ���縦 ������ ������ ���� �����ڰ� ���� ������ �����Ϸ��� ������ 
// ���� ���� �����ڰ� �۵�
// �� �ڵ尡 ���������� �۵��ϴ� ������ �޸𸮸� �������� �ʾұ� �����̴�.
/*
CMyData(const CMyData &rhs)
{
	m_pnData = rhs.m_pnData ;
}
//���� ���� ��������ڸ� ����� ���� ���̴�.
//���� ��������ڸ� ���� ����� ������ 11�� �� ��� 
// m_pnData = new int ; // �޸𸮸� �����Ҵ��ϰ� 
// *m_pnData = *rhs.m_pnData ; // �����Ͱ� ����Ű�� ��ġ�� ���� �����Ѵ�!

// ���� ���簡 �ǵ���, ���� ���� ���� �����ڸ� �����ؾ� �Ѵ�.
*/

class CMyData
{

public:
	CMyData(int nParam)
	{
		m_pnData = new int;
		*m_pnData = nParam;
	}

	int GetData()
	{
		if (m_pnData != NULL)
			return *m_pnData;
		return 0;
	}
private:
	int *m_pnData = nullptr;
};

int _tmain(int argc, _TCHAR* argv[])
{
	CMyData a(10);
	CMyData b(a);
	cout << a.GetData() << endl;
	cout << b.GetData() << endl;

	return 0;
}


