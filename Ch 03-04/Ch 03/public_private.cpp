#include "stdafx.h"
#include <iostream>
using namespace std;

class CMyData
{
	// �⺻ ���� ���� �����ڴ� privata. �ܺ� ���ٻӸ� �ƴ϶� �Ļ� Ŭ�����κ����� ���ٱ��� ��� ����.
	int m_nData;

public:
	int GetData(void)
	{
		return m_nData;
	}
	void SetData(int nParam)
	{
		m_nData = nParam;
	}

};

// ����� �ڵ�. public���� ������ �� �����Ƿ� ��� ������ ������ �� ���� ����.
int _tmain(int argc, _TCHAR* argv[])
{
	CMyData data;
	data.SetData(10);
	cout << data.GetData() << endl;

	return 0;
}