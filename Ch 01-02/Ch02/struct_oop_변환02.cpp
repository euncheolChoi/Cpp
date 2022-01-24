#include <stdio.h>
#include "stdafx.h"
#include <iostream>
using namespace std;

// 제작자 코드 
// 함수 포인터 : 함수의 주소를 저장하는 포인터.	 우리가 항상 사용해오던 
// 함수도 사실 주소값이 해당 함수의 내용을 가르키고있는것이다. 즉 함수의 이름은 포인터이다.
/*
void function()	{}
void main()
{
	// Function의 주소값이 출력된다. 
	//해당 함수의 주소값을 포인터에 저장시켜 사용하는게 함수 포인터!
	cout << Function << endl;  
}

//함수포인터의 형태 예시

int Add(int num1, int num2)
{
    return num1 + num2;
}
 
void main()
{
    int num1 = 10;
    int num2 = 20;

	//반환값이 int이고 매개변수로 int값 2개를 받는 함수의 주소를 받을 수 있는 
	//포인터를 만들었다. 

	//함수포인터는 무조건 반환값과 매개변수의 갯수가 동일해야만 사용 가능하기때문에 둘중 하나라도 다를경우
	//함수포인터의 해당 함수의 주소를 넘길수 없다.
    
	int(*ptr_add)(int, int) = Add;
    cout << ptr(10, 20) << endl;
}


*/
typedef struct USERDATA
{
	int nAge;
	char szName[32];

	//함수 포인터의 이름은 내가 짓고싶은걸로 지으면 된다.
	//USERDATA 구조체의 포인터(객체주소)를 받는 함수 포인터를 구조체의 멤버로 넣는다
	void(*Print_USERDATA)(struct USERDATA *);	

} USERDATA;

void PrintData(USERDATA *pUser)
{
	printf("%d, %s\n", pUser->nAge, pUser->szName);
}


int main(void)
{
	USERDATA user = { 20, "ennCheol", PrintData };
	user.Print_USERDATA(&user);

	return 0;
}
