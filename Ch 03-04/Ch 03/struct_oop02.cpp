#include <stdio.h>	
#include "stdafx.h"


//class�� ���� �����ϰ� �����ϸ� �Լ��� ������ �� �ִ� ����ü! 
class USERDATA
{
//�����ڿ� ���� ���������� public. �ϴ��� �Ѿ��.
public:

	int nAge;
	char szName[32];

	//nAge�� szName�� Print()�Լ� ���ο� ����� ���������� �ƴ϶� Print�Լ��� ����
	//Ŭ������ ��� �����̴�!
	void Print(void)
	{
		printf("%d, %s\n", nAge, szName);
	}

};



int _tmain(int argc, _TCHAR* argv[]) {

	//�ſ� c�ٿ� �ڵ�. ���� ����ü �ʱ�ȭ ��� �״�� ���, '������� �ʱ�ȭ'�� ����ڰ� �˾Ƽ� 
	//�ϵ��� ��ġ��. => c++������ �����ڶ�� �Լ��� �ذ�.
	USERDATA user = { 20, "����ö" };

	user.Print();

	return 0;

}