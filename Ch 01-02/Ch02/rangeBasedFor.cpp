#include "stdafx.h"
#include <iostream>
using namespace std;

//범위 기반 for문 => 전체 배열 요소에 접근할 경우에 사용하자

int _tmain(int argc, _TCHAR* argv[])
{
	int aList[5] = { 10,20,30,40,50 };

	//c스타일 반복문
	for (int i = 0; i < 5; ++i)
	{
		cout << aList[i] << ' ';
	}
	cout << endl;

	//범위 기반 for문
	//배열 요소의 형식에 따라 n의 형식이 결정난다.

	//배열요소가 몇개이든지 aList(요소갯수) 만큼 반복된다. 전체요소에 접근함.
	//이 경우 read only이므로 배열 요소 수정이 불가능하다. 
	for (auto n : aList)
	{
		cout << n << ' ';

	}
	cout << endl;

	//참조자를 요소 형식으로 선언하면 배열의 값을 수정할수 있으나, 전체 요소에 대해 수정할수있다. 
	for (auto &n : aList)
	{
		aList[n] = 10;
		cout << aList[n] << ' ';
		
	}
	cout << endl;


	return 0;
}