#include "stdafx.h"
#include <iostream>
using namespace std;

class CRefTest
{
public:

	//������ ����� �ݵ�� ������ �ʱ�ȭ ����� �̿��� �ʱ�ȭ�Ѵ�.
	//CRefTest(int nParam) : m_nData(nParam) {}; �̷��� ����? -> ������ ���� �����µ�, �̴� �����ڰ� ����Ű��
	//������ �̹� �����Ǿ��� ����. �Լ��� �Ű������� �Լ� ������ �ڵ� ������ �����Ƿ� ��ȯ�� �� �Ű������� �Ҹ�ȴ�.
	// ���� m_mData(nParam) �� �ᱹ ����� ��� ���� �����ڰ�, �ʱ�ȭ�Ǵ� ����� �ʷ��Ѵ�.

	CRefTest(int &nParam) : m_nData(nParam) {};
	int GetData(void)
	{
		return m_nData; 
	}

private:
	//������ ����� ��ü�� ������ �� �ݵ�� �ʱ�ȭ�ؾ� �Ѵ�
	int &m_nData;
};


int _tmain(int argc, _TCHAR* agrv[])
{
	int a = 10; 
	CRefTest t(a);

	cout << t.GetData() << endl;

	//���� ������ a�� ���� �����Ǿ���!
	a = 20;

	cout << t.GetData() << endl;

	return 0;
}