#include "stdafx.h"
#include <iostream>
using namespace std;

//�ܼ� ���� �����ڰ� ����ü�� Ŭ�������� �⺻������ �����! a = b �ϸ� ��� ����� ���� �״�� �����Ѵ�.
//���� �����ڸ� �������� ��� ��ü�� �ݵ�� �ܼ����Կ����ڵ� �������ؾ� �Ѵ�.

class CMyData
{
public:
	CMyData(int nParam)
	{
		m_pnData = new int;
		*m_pnData = nParam;

	}
	CMyData(const CMyData &rhs)
	{
		cout << "CMyData(const CMyData &rhs)" << endl; 

		m_pnData = new int;
		//�����Ͱ� ����Ű�� ��ġ�� ���� �����Ѵ�
		*m_pnData = *rhs.m_pnData;
	}

	~CMyData()
	{
		delete m_pnData;
	}

	//�ܼ����� �Լ��� ����, ���⼭ operator= �� �Լ��� �̸��̴�. �ܼ������̱⿡ �̷��� �̸��� ���� ��.
	//CMyData& : CMyData �� ���� �����ڸ� ��ȯ.
	CMyData& operator=(const CMyData &rhs)
	{
		*m_pnData = *rhs.m_pnData;
		//��ü �ڽſ� ���� ������ ��ȯ�Ѵ�.
		return *this;
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
	CMyData b(20);
	// �ܼ� ���� ������ �Լ��� �����߱� ������ �ܼ������� �õ��ϸ� ����� ���� �״�� �����Ѵ�!
	a = b;
	cout << a.GetData() << endl;

	return 0;
}
