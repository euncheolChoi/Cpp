#include "stdafx.h"
#include <iostream>
using namespace std;

/*

int TestFunc(int nParam1, int nParam2 = 10)
{
	return nParam1 * nParam2;
}

// ����Ʈ �Ķ���� ���� : ȣ������ �ڵ常 ������ �Լ��� ������ �ľ��Ҽ� ����
//��ȣ���� �Լ� �Ű������� ����Ʈ ���� �ݵ�� �����ʺ��� ����ؾ� �Ѵ�.
int _tmain(int agrc, _TCHAR* agrv[])
{
	cout << TestFunc(20,20) << endl;
	cout << TestFunc(20) << endl;

	return 0;
}

*/

// �Լ� ���� ���� : �Լ� �̸�, ���� �̸� ���� ���� �ǹ̸� ���ÿ� ���´�.
// �Լ��� ��� �ĺ��ڰ� ���Ƶ� �Ű������� �ٸ��� �ٸ� �Լ��� �ν�.
//ȣ��Ǵ� �Լ��� �����Ϸ��� ���� �ڵ����� ����
int Add(int a, int b, int c)
{
	cout << "Add( int, int, int) : ";

	return a + b + c;
}

double Add(double a, double b)
{
	cout << "Add(double, double) : ";
	return a + b;
}

int _tmain(int argc, _TCHAR* argv[])
{
	// ���� 
	cout << Add(3, 4, 5) << endl;
	cout << Add(3.3, 4.4) << endl;

	return 0;
}

/*

//��ȣ���� ���ǿ� : ���� ���� + ����Ʈ �Ű����� => ������ ����; "�����ε�� �Լ��� ���� ȣ���� ��ȣ�ϴ�"
void TestFunc(int a)
{
	cout << "TestFunc(int) : " << endl;

}

void TestFunc(int a, int b = 10)
{
	cout << "TestFunc(int, int) : ";

}

int _tmain(int argc, _TCHAR* argv[])
{
	TestFunc(10);
	return 0;
}

*/