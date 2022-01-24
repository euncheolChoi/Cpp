#include "stdafx.h"
#include <iostream>
using namespace std;

/*

int TestFunc(int nParam1, int nParam2 = 10)
{
	return nParam1 * nParam2;
}

// 디폴트 파라미터 단점 : 호출자의 코드만 봐서는 함수의 원형을 파악할수 없다
//피호출자 함수 매개변수의 디폴트 값은 반드시 오른쪽부터 기술해야 한다.
int _tmain(int agrc, _TCHAR* agrv[])
{
	cout << TestFunc(20,20) << endl;
	cout << TestFunc(20) << endl;

	return 0;
}

*/

// 함수 다중 정의 : 함수 이름, 변수 이름 등이 여러 의미를 동시에 갖는다.
// 함수의 경우 식별자가 같아도 매개변수가 다르면 다른 함수로 인식.
//호출되는 함수가 컴파일러에 의해 자동으로 결정
int Add(int a, int b, int c)
{
	cout << "Add( int, int, int) : ";

	return a + b + c;
}

double Add(double a, double b)
{
	cout << "Add(double, double) : ";
	return a + b;
}

int _tmain(int argc, _TCHAR* argv[])
{
	// 따라서 
	cout << Add(3, 4, 5) << endl;
	cout << Add(3.3, 4.4) << endl;

	return 0;
}

/*

//모호성의 끝판왕 : 다중 정의 + 디폴트 매개변수 => 컴파일 오류; "오버로드된 함수에 대한 호출이 모호하다"
void TestFunc(int a)
{
	cout << "TestFunc(int) : " << endl;

}

void TestFunc(int a, int b = 10)
{
	cout << "TestFunc(int, int) : ";

}

int _tmain(int argc, _TCHAR* argv[])
{
	TestFunc(10);
	return 0;
}

*/