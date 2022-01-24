#include "stdafx.h"
#include <iostream>
using namespace std;

class CTest
{
public:

	//생성자 초기화 목록을 이용한 멤버 초기화!
	//초기화 목록을 이용하려면 반드시 함수 원형 다음에 콜론을 기술해야 한다.
	// c++11부터는 멤버 변수 선언과 동시에 초기화할 수 있다. 초기화 목록은 그냥 알아만 두자!
	CTest()
		: m_nData1(10), m_nData2(20)
	{}

	// 두 개의 멤버 데이터 선언

	int m_nData1;
	int m_nData2;

	//멤버 함수 선언(정의는 분리)
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