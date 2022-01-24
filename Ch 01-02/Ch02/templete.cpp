#include "stdafx.h"
#include <iostream>
using namespace std;

template <typename T>

// c++에서는 다중정의 보다는 Template를 사용하자! 
// template는 자료형이 들어갈 자리에 구멍을 뚫어놓은 것이라고 생각하자. 자료형을 모호하게 기술하여 
//컴파일러가 유연하게 알맞는 자료형 쓰도록 함
T TestFunc(T a)
{
	cout << "매개변수 a :" << a << endl;
	return a; 
}

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "int\t " << TestFunc(3) << endl;
	cout << "double\t " << TestFunc(3.3) << endl;
	cout << "char*\t " << TestFunc("TestString") << endl;

}

