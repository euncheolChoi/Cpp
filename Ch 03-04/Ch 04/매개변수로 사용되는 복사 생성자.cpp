#include "stdafx.h"
#include <iostream>
using namespace std;

class CTestData
{
public:
	// int �� �Ű����� �ϳ��� ������
	CTestData(int nParam) : m_nData(nParam)
	{
		cout << "CTestData(int)" << endl;
	}

	//���� ������ 
	CTestData(const CTestData &rhs) : m_nData(rhs.m_nData)
	{
		cout << "CTestData(const CTestData &) " << endl;
	}

	int GetData() const
	{
		return m_nData;
	}

	void SetData(int nParam)
	{
		m_nData = nParam;
	}

private:
	int m_nData = 0;
};

/*
// �Ʒ� �Լ��� ������ : ���������δ� ������ ������, �� �Լ��� ȣ���ϱ� ���� TestFunc(a)��� �Լ��� 
// �����ߴ�. CTestData param �ֱ� ������, �������� CTestFunc ��ü�� 2����� ���� ����. 
// �Դٰ� �Լ��� ȣ��� �� �Ű������� param�� ȣ������ a�� �������� �ΰ� ���纻�� ������
void TestFunc(CTestData param)
{
	cout << "TestFunc() " << endl;

	param.SetData(20);
}
*/

//�ذ��
//�߿��� ��!! ������� �ڵ常 ������ call by reference���� call by value���� �˼��� ����.
// ���� �Լ��� ���μ��� ����� ������ �Լ� ȣ�� ������ ���� ���氡���ϴ�. -> �Լ��� �Ű����� ������ 
//Ŭ���� �����̶�� ������ ����� ������ �����ؾ� �Ѵ�(const ���)

// CTestData Ŭ������ ��ü�� ���� ������ �Ű������� �޴´� 
//�Ű������� ���� �����̹Ƿ� ��ü�� �������� �ʴ´�.
void TestFunc(const CTestData &param)
{
	cout << "TestFunc() " << endl;
	//��ȣ���� �Լ����� �Ű����� �ν��Ͻ��� ���� �ٲ� �� ����!
	// param.SetData(20);
}


//����� �ڵ�
int _tmain(int argc, _TCHAR* argv[])
{
	
	cout << "**************Begin*****************" << endl;
	CTestData a(10);
	TestFunc(a);

	cout << "a: " << a.GetData() << endl;
	cout << "***********end**************" << endl;

	return 0;
}