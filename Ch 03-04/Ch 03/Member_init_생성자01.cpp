#include "stdafx.h"
#include <iostream>
using namespace std;

class CTest
{
public:

	// CTest클래스의 생성자 함수 , 이 함수는 '사용자가 객체를 선언하면 
	// 자동으로 호출됨'
	CTest()
	{
		m_nData = 10;
	}

	int m_nData;

	void PrintData(void)
	{
		cout << m_nData << endl;

	}

};

int _tmain(int argc, _TCHAR* argv[]) {

	//CTest t항을 통해 CTest클래스의 m_nData 멤버를 10으로 초기화시키는 코드를 실행(13번 행) 
	//생성자 함수의 역할이 멤버 변수를 초기화시키는것이기 때문.
	//따라서 사용자코드에 초기화코드를 기술하지 않아도 생성자 함수에서 규정한 값으로 멤버가 자동 초기화됨.

	CTest t;
	t.PrintData();

	return 0;
}