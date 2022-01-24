#include "stdafx.h"
#include <iostream>
using namespace std;

//생성자와 소멸자. 지금처럼 매개변수가 하나도 없는 생성자를 '디폴트 생성자'라고 함. 클래스 제작자가 생성자와 소멸자를
// 기술하지 않아도 컴파일러가 알아서 만들어 넣는다. 생성자와 소멸자가 없는 클래스는 없다.

class CTest
{

public:
	CTest()
	{
		cout << "CTest::CTest()" << endl;
	}

	~CTest()
	{
		cout << "~CTest::CTest()" << endl;
	}


};

int _tmain(int argc, _TCHAR* agrv[])
{
	cout << "Begin" << endl;
	CTest a;
	cout << "end" << endl;

	return 0;
}

/*
1. main()함수가 호출되기 전에 생성자가 호출될 수 있다
2. 생성자는 다중 정의할 수 있다
3. 소멸자는 다중 정의할 수 없다
4. main()함수가 끝난 후에 소멸자가 호출될 수 있다.
5. 생성자와 소멸자는 생략할 수 있으나 생략할 경우 컴파일러가 만들어 넣는다.

*/