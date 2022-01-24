#include "stdafx.h"
#include <iostream>
using namespace std;

/*

//함수의 매개변수가 참조자인 경우! 
//이 경우의 가장 큰 문제점은 호출자 코드만 봐서는 매개변수가 참조 형식이라는 것을 알수없다.
//c++에서는 절대 호출자 코드만 보고 함수의 원형을 확신해서는 안된다.

void TestFunc(int &rParam)
{
	//피호출자 함수에서 원본의 값을 변경했다.
	rParam = 100;
}

int _tmain(int argc, _TCHAR* argv[])
{

	int nData = 0;
	// 참조에 의한 인수전달. 실인수랑 매개변수랑 연결하면 int &Param = nData ; 가 된다.
	// 즉 참조자 형식을 만족한다! 대강 이렇게 이해하자! 
	TestFunc(nData);

	cout << nData << endl;
}

*/


// 참조 전달이므로 호출자 변수의 값을 바꿀 수 있다.
void Swap(int &a, int &b)
{
	int nTmp = a;
	a = b;
	b = nTmp;

	
}


int _tmain(int argc, _TCHAR* argv[])
{
	int a = 10, b = 20;

	//참조 전달이며, 참조자 형식을 만족. 두 변수의 값을 교환
	Swap(a, b);

	cout << "a : " << a << endl;
	cout << "b : " << b << endl;

	return 0;
}