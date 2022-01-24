#include <stdio.h>
#include "stdafx.h"
#include <iostream>
using namespace std;

// 제작자 코드 
typedef struct USERDATA
{
	int nAge;
	char szName[32];
	

} USERDATA;

void PrintData(USERDATA *pUser)
{
	printf("%d, %s\n", pUser->nAge, pUser->szName);
}


/*
// 사용자 코드
void main(void)
{
	USERDATA user = { 20, "EUNCHEOL" };
	//사용자가 자료구조의 멤버를 알아야 하며, 적절한 출력 형식도 알아햐 함
	printf("%d, %s\n", user.nAge, user.szName);

	return 0;
}

*/

//따라서 이렇게 작성한 코드가 사용자를 배려한 코드
// 자료구조를 설계한 사람이 그것을 출력하는 함수까지 만들어준다면 사용자는 구조체의 멤버에 
// 일일이 접근할 필요가 없다.
int main(void)
{
	USERDATA user = { 20, "ennCheol" };
	PrintData(&user);

	return 0;
}
