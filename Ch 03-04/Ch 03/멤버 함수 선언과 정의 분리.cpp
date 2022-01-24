#include "stdafx.h"
#include <iostream>
using namespace std;

class CTest
{
public:

	// CTest클래스의 생성자 함수 , 인스턴스가 생성되면 멤버 데이터를 자동으로 초기화.
	CTest()
	{
		m_nData = 10;
	}

	// 멤버 데이터 선언
	int m_nData;

	// 멤버 함수 선언 및 정의
	void PrintData(void);
	
};

void CTest::PrintData(void)
{
	// 주의: m_nData는 CTest의 멤버 변수인 int m_nData이다 => 식별자 검색 순서 문제 때문.
	// 모든 멤버 함수는 기본적으로 지역변수, 멤버변수, 전역변수 순으로 식별자를 검색함
	cout << m_nData << endl;
}

int _tmain(int argc, _TCHAR* argv[]) {

	//CTest t항을 통해 CTest클래스의 m_nData 멤버를 10으로 초기화시키는 코드를 실행(13번 행) 
	//생성자 함수의 역할이 멤버 변수를 초기화시키는것이기 때문.
	//따라서 사용자코드에 초기화코드를 기술하지 않아도 생성자 함수에서 규정한 값으로 멤버가 자동 초기화됨.

	CTest t;
	t.PrintData();

	return 0;
}