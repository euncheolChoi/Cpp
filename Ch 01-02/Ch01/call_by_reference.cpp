#include "stdafx.h"
#include <iostream>
using namespace std;

/*

//�Լ��� �Ű������� �������� ���! 
//�� ����� ���� ū �������� ȣ���� �ڵ常 ������ �Ű������� ���� �����̶�� ���� �˼�����.
//c++������ ���� ȣ���� �ڵ常 ���� �Լ��� ������ Ȯ���ؼ��� �ȵȴ�.

void TestFunc(int &rParam)
{
	//��ȣ���� �Լ����� ������ ���� �����ߴ�.
	rParam = 100;
}

int _tmain(int argc, _TCHAR* argv[])
{

	int nData = 0;
	// ������ ���� �μ�����. ���μ��� �Ű������� �����ϸ� int &Param = nData ; �� �ȴ�.
	// �� ������ ������ �����Ѵ�! �밭 �̷��� ��������! 
	TestFunc(nData);

	cout << nData << endl;
}

*/


// ���� �����̹Ƿ� ȣ���� ������ ���� �ٲ� �� �ִ�.
void Swap(int &a, int &b)
{
	int nTmp = a;
	a = b;
	b = nTmp;

	
}


int _tmain(int argc, _TCHAR* argv[])
{
	int a = 10, b = 20;

	//���� �����̸�, ������ ������ ����. �� ������ ���� ��ȯ
	Swap(a, b);

	cout << "a : " << a << endl;
	cout << "b : " << b << endl;

	return 0;
}