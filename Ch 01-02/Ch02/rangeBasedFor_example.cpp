#include "stdafx.h"
#include <iostream>
using namespace std;
#define max 5


/* 
//���� ó���� �ۼ��Ϸ��� �ڵ�. ui_����� �и� ���谳�� ����Ϸ� ������ ����. �ϴ��� ������ ��������
void Swap(int &a, int &b)
{
	int Temp = a;
	a = b;
	b = Temp;

}
int FuncSort(int &aList)
{
	//�������ķ� �˷��� �������� ����
	for (int i = 0; i < 4; ++i)
	{
		int nTmp = 0;
		for (int j = i + 1; j < 5; ++j)
		{
			if (aList[i] > aList[j])
			{
				Swap(aList[i], aList[j]);
			}
		}
	}

	return 0;
}


int _tmain(int argc, _TCHAR* atgv[])
{

	int aList[5] = { 10,30, 40,50, 20 };
	FuncSort(*aList);
	
	for (auto n : aList)
	{
		cout << n << endl;

	}

	return 0;
}

*/
 
// int�迭�� ������������ ������ �� ȭ�鿡 ����� ���. �� �迭 ������ ����� ���� 
// �ݵ�� ���� ��� for���� ����϶�.
void Swap(int &a, int &b)
{
	int Tmp = 0;
	Tmp = a;
	a = b;
	b = Tmp;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int aList[max] = { 40, 10, 20, 50, 30 };

	for (int i = 0; i < max - 1; i++)
	{
		for (int j = i + 1; j < max; j++)
		{
			if (aList[i] > aList[j])
			{
				Swap(aList[i], aList[j]);
			}
		}


	}

	for (auto n : aList)
		cout << n << ' ';

	cout << endl;

	return 0;
}