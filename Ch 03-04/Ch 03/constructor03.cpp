#include "stdafx.h"
#include <iostream>
using namespace std;

class CTest
{
	int m_nData;

public:
	CTest()
	{
		cout << "CTest::CTest" << endl;
	}

	~CTest()
	{
		cout << "~CTest::CTest" << endl;
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "Begin" << endl;
	CTest *pData = new CTest;
	cout << "Test" << endl;

	delete pData;
	cout << "end" << endl;

	return 0;

}

