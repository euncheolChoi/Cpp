#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{

	int nData = 10;

	// �����Ϳ� ������ ���� ���������δ� �����ϴ�. �߰���, c���� �Լ��� ȣ���� �� 
	// �Ű������� �ּҸ� �����ϴ� ����� '������ ���� ȣ��'�̶�� �ߴµ�, ���⼭ 
	//'����'�� '�ּ�'�� �ǹ��Ѵ�.
	int &ref = nData;
	ref = 20;

	cout << ref << endl; 

	return 0;


}



/*
// �̷� �ڵ�� �Ұ��� = �ֳĸ� pnData�� ���ȭ�Ǿ��⿡, ���ȭ�� ��� ���� 
// �ܼ������� ������ ���� ����.
int a = 1;
int b = 3;

int *const pnData = &a ;
pnData = &b ;   

*/