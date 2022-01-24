#include "stdafx.h"
#include <iostream>
using namespace std;

//r-value : 연산의 중간과정에서 발생. 임시결과는 기본적으로 상수이므로 r-value참조가 됨
int TestFunc(int nParam)
{

	int nResult = nParam * 2;
	return nResult;
}

int _tmain(int argc, _TCHAR* argv[])
{

	int nInput = 0;
	cout << "Input number : " << endl;
	cin >> nInput;
	
	// 산술연산으로 만들어진 임시 객체에 대한 r-value 참조 
	// r-value 참조라는것은 곧 사라질 대상에 대해 참조자를 부여할 수 있다는 것
	int &&rdata = nInput + 5;
	cout << rdata << endl;

	// 함수 반환으로 만들어진 임시 객체에 대한 r-value 참조
	int &&result = TestFunc(10);

	result += 10;
	cout << result << endl;

	return 0;
}