#include "stdafx.h"
#include <iostream>
using namespace std;

template <typename T>

// c++������ �������� ���ٴ� Template�� �������! 
// template�� �ڷ����� �� �ڸ��� ������ �վ���� ���̶�� ��������. �ڷ����� ��ȣ�ϰ� ����Ͽ� 
//�����Ϸ��� �����ϰ� �˸´� �ڷ��� ������ ��
T TestFunc(T a)
{
	cout << "�Ű����� a :" << a << endl;
	return a; 
}

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "int\t " << TestFunc(3) << endl;
	cout << "double\t " << TestFunc(3.3) << endl;
	cout << "char*\t " << TestFunc("TestString") << endl;

}

