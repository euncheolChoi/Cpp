#include "stdafx.h"
#include <iostream>
using namespace std;

//���� ��� for�� => ��ü �迭 ��ҿ� ������ ��쿡 �������

int _tmain(int argc, _TCHAR* argv[])
{
	int aList[5] = { 10,20,30,40,50 };

	//c��Ÿ�� �ݺ���
	for (int i = 0; i < 5; ++i)
	{
		cout << aList[i] << ' ';
	}
	cout << endl;

	//���� ��� for��
	//�迭 ����� ���Ŀ� ���� n�� ������ ��������.

	//�迭��Ұ� ��̵��� aList(��Ұ���) ��ŭ �ݺ��ȴ�. ��ü��ҿ� ������.
	//�� ��� read only�̹Ƿ� �迭 ��� ������ �Ұ����ϴ�. 
	for (auto n : aList)
	{
		cout << n << ' ';

	}
	cout << endl;

	//�����ڸ� ��� �������� �����ϸ� �迭�� ���� �����Ҽ� ������, ��ü ��ҿ� ���� �����Ҽ��ִ�. 
	for (auto &n : aList)
	{
		aList[n] = 10;
		cout << aList[n] << ' ';
		
	}
	cout << endl;


	return 0;
}