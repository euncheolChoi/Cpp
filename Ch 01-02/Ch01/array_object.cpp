#include "stdafx.h"
#include <iostream>
using namespace std; 

/*
int main(void)
{

	int a = 10;
	int b(a);
	//c의 형식은 자동으로 b의 형식을 따라간다!
	//초깃값의 형식에 맞춰 선언하는 인스턴스의 형식이 자동으로 결정된다
	auto c(b);
}

*/
	
int _tmain(int argc, _TCHAR* argv[])
{
	// 인스턴스만 동적으로 생성하는 경우(초깃값 기술x)
	int *pData = new int;

	//초깃값을 기술하는 경우
	int *pNewData = new int(10);

	*pData = 5;
	cout << *pData << endl;
	cout << *pNewData << endl;

	delete pData;
	delete pNewData;

	//여기서부터 다른 예제
	
	// 객체를 배열 형태로 동적 생성한다. 
	int *arr = new int[5];
	for (int i = 0; i < 5; ++i)
	{
		arr[i] = (i + 1) * 10;

	}

	for (int i = 0; i < 5; ++i)
	{
		cout << arr[i] << endl;
	}

	delete[] arr;
	return 0;




}


