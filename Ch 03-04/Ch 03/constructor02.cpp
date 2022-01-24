#include "stdafx.h"
#include <iostream>
using namespace std;

class CTest
{

	int m_nData;
public:

	// 생성자의 매개변수로 전달된 값으로 멤버 변수를 초기화한다!
	// 참고 : 매개변수가 하나도 없는 생성자를 디폴트 생성자라고 한다. 예를 들어 CTest() {cout << "CTest::CTest()" << endl;}
	CTest(int nParam) : m_nData(nParam)
	{
		cout << "CTest::CTest" << endl;
	}

	~CTest()
	{
		// 생성할 때 매개변수로 받은 값을 출력한다.
		cout << "~CTest::CTest" << m_nData << endl;
	}

};

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "Begin" << endl;
	// 생성자 호출, CTest 클래스 객체를 선언.
	// 디폴트 생성자는 생략했으므로 디폴트 값 생성은 허용x , 즉 CTest a;는 오류다.
	CTest a(1);
	cout << "Before b" << endl;
	// 생성자 호출
	CTest b(2);
	cout << "End" << endl;

	return 0;
}