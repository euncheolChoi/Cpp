#include <stdio.h>
#include "stdafx.h"
#include <iostream>
using namespace std;

// ������ �ڵ� 
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
// ����� �ڵ�
void main(void)
{
	USERDATA user = { 20, "EUNCHEOL" };
	//����ڰ� �ڷᱸ���� ����� �˾ƾ� �ϸ�, ������ ��� ���ĵ� �˾��� ��
	printf("%d, %s\n", user.nAge, user.szName);

	return 0;
}

*/

//���� �̷��� �ۼ��� �ڵ尡 ����ڸ� ����� �ڵ�
// �ڷᱸ���� ������ ����� �װ��� ����ϴ� �Լ����� ������شٸ� ����ڴ� ����ü�� ����� 
// ������ ������ �ʿ䰡 ����.
int main(void)
{
	USERDATA user = { 20, "ennCheol" };
	PrintData(&user);

	return 0;
}
