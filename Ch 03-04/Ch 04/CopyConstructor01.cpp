#include "stdafx.h"
#include <iostream>
using namespace std;

class CMyData
{
public:
	// ����Ʈ ������ �Լ�
	CMyData()
	{
		cout << "CMyData()" << endl;
	}

	//���� ������ ���� �� ���� (���� ������ ����)
	CMyData(const CMyData &rhs)

	{
		//���� �����Ǵ� ��ü�� ���� ��ü�� ��� m_nData�� �����Ƿ� ���纻 ���� ������ 
		// �� ���� �Ѳ����� ��Ÿ����. �� �ΰ����� ��������� �����ϰ��� l-vlaue�� �ǵ������� 
		// this->m_nData ��� ����!
		this->m_nData = rhs.m_nData;
		cout << "CMyData(const CMyData &rhs)" << endl;

	}

	int GetData(void) const { return m_nData; }
	void SetData(int nParam) { m_nData = nParam; }

private:
	int m_nData;

};

int _tmain(int argc, _TCHAR* argv[])
{
	//����Ʈ �����ڰ� ȣ��Ǵ� ���
	CMyData a;
	a.SetData(10);

	//���� �����ڰ� ȣ��Ǵ� ���
	CMyData b(a);
	cout << b.GetData() << endl;

	return 0;
}


// ������ ���� ���� �� �ϳ� -> Ŭ���� ��� ������ �����ڸ� �̿��ؼ� �ʱ�ȭ�� �� �ִ�.
// �����ڸ� �̿��ϴ� �Լ��� ���� ū Ư¡ : 1. ��ȯ �ڷ����� ����. 2. ȣ���ϴ� �Լ��� �ƴ�. ������ �ñ⿡ 
// ���ο��� �ڵ����� ȣ��Ǵ� �Լ�.