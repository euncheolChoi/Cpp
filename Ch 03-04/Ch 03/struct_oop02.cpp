#include <stdio.h>	
#include "stdafx.h"


//class는 정말 간단하게 생각하면 함수를 포함할 수 있는 구조체! 
class USERDATA
{
//접근자에 대한 문제때문에 public. 일단은 넘어가기.
public:

	int nAge;
	char szName[32];

	//nAge나 szName이 Print()함수 내부에 선언된 지역변수가 아니라 Print함수가 속한
	//클래스의 멤버 변수이다!
	void Print(void)
	{
		printf("%d, %s\n", nAge, szName);
	}

};



int _tmain(int argc, _TCHAR* argv[]) {

	//매우 c다운 코드. 기존 구조체 초기화 방법 그대로 사용, '멤버변수 초기화'를 사용자가 알아서 
	//하도록 방치함. => c++에서는 생성자라는 함수로 해결.
	USERDATA user = { 20, "최은철" };

	user.Print();

	return 0;

}