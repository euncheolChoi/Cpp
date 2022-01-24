#include "stdafx.h"
#include <iostream>
using namespace std;

// namespace : c++가 지원하는 각종 요소들(변수, 함수, 클래스 등)을 한 범주로 묶어주기 위한 문법
// '소속'의 개념으로 생각하자.
// using namespace Test를 사용하면 namespace를 생략하고 사용할 수 있다. 자주 사용하는 namespace의 경우! 
namespace Test
{
	//g_nData는 Test라는 네임스페이스에 속한다.
	int g_nData = 100;

	void TestFunc(void)
	{
		cout << "Test::TestFunc() " << endl;

	}
}


// _tmain() 함수는 참고로 전역 네임스페이스에 속함
int _tmain(int argc, _TCHAR* argv[])
{
	Test::TestFunc();
	cout << Test::g_nData << endl;

	return 0;
}