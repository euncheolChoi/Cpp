#include "stdafx.h"
#include <iostream>
using namespace std;

class CTest
{
public:

	CTest()
		: m_nData1(10), m_nData2(20)
	{}


	int m_nData1;
	int m_nData2;

	void PrintData(void);
	

};

void CTest::PrintData(void)
{
	cout << m_nData1 << endl;
	cout << m_nData2 << endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
	CTest t;
	t.PrintData();

	return 0;
}