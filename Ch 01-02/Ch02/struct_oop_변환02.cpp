#include <stdio.h>
#include "stdafx.h"
#include <iostream>
using namespace std;

// ������ �ڵ� 
// �Լ� ������ : �Լ��� �ּҸ� �����ϴ� ������.	 �츮�� �׻� ����ؿ��� 
// �Լ��� ��� �ּҰ��� �ش� �Լ��� ������ ����Ű���ִ°��̴�. �� �Լ��� �̸��� �������̴�.
/*
void function()	{}
void main()
{
	// Function�� �ּҰ��� ��µȴ�. 
	//�ش� �Լ��� �ּҰ��� �����Ϳ� ������� ����ϴ°� �Լ� ������!
	cout << Function << endl;  
}

//�Լ��������� ���� ����

int Add(int num1, int num2)
{
    return num1 + num2;
}
 
void main()
{
    int num1 = 10;
    int num2 = 20;

	//��ȯ���� int�̰� �Ű������� int�� 2���� �޴� �Լ��� �ּҸ� ���� �� �ִ� 
	//�����͸� �������. 

	//�Լ������ʹ� ������ ��ȯ���� �Ű������� ������ �����ؾ߸� ��� �����ϱ⶧���� ���� �ϳ��� �ٸ����
	//�Լ��������� �ش� �Լ��� �ּҸ� �ѱ�� ����.
    
	int(*ptr_add)(int, int) = Add;
    cout << ptr(10, 20) << endl;
}


*/
typedef struct USERDATA
{
	int nAge;
	char szName[32];

	//�Լ� �������� �̸��� ���� ��������ɷ� ������ �ȴ�.
	//USERDATA ����ü�� ������(��ü�ּ�)�� �޴� �Լ� �����͸� ����ü�� ����� �ִ´�
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
