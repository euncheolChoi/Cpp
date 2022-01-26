#include "stdafx.h"
#include <iostream>
using namespace std;

class CTestData
{
public:
	// int 형 매개변수 하나인 생성자
	CTestData(int nParam) : m_nData(nParam)
	{
		cout << "CTestData(int)" << endl;
	}

	//복사 생성자 
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
// 아래 함수의 문제점 : 문법적으로는 문제가 없지만, 이 함수를 호출하기 위해 TestFunc(a)라는 함수가 
// 등장했다. CTestData param 있기 때문에, 쓸데없이 CTestFunc 객체가 2개라는 점이 문제. 
// 게다가 함수가 호출될 때 매개변수인 param은 호출자의 a를 원본으로 두고 복사본이 생성됨
void TestFunc(CTestData param)
{
	cout << "TestFunc() " << endl;

	param.SetData(20);
}
*/

//해결법
//중요한 점!! 사용자의 코드만 봐서는 call by reference인지 call by value인지 알수가 없다.
// 따라서 함수의 실인수로 기술한 변수가 함수 호출 때문에 값이 변경가능하다. -> 함수의 매개변수 형식이 
//클래스 형식이라면 무조건 상수형 참조로 선언해야 한다(const 사용)

// CTestData 클래스의 객체에 대한 참조를 매개변수로 받는다 
//매개변수가 참조 형식이므로 객체가 생성되지 않는다.
void TestFunc(const CTestData &param)
{
	cout << "TestFunc() " << endl;
	//피호출자 함수에서 매개변수 인스턴스의 값을 바꿀 수 없다!
	// param.SetData(20);
}


//사용자 코드
int _tmain(int argc, _TCHAR* argv[])
{
	
	cout << "**************Begin*****************" << endl;
	CTestData a(10);
	TestFunc(a);

	cout << "a: " << a.GetData() << endl;
	cout << "***********end**************" << endl;

	return 0;
}