#include "stdafx.h"
#include <iostream>
using namespace std;
#define max 5


/* 
//내가 처음에 작성하려던 코드. ui_기능의 분리 설계개념 사용하려 했으나 실패. 일단은 구현에 집중하자
void Swap(int &a, int &b)
{
	int Temp = a;
	a = b;
	b = Temp;

}
int FuncSort(int &aList)
{
	//선택정렬로 알려진 버블정렬 구현
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
 
// int배열을 오름차순으로 정렬한 후 화면에 결과를 출력. 단 배열 내용을 출력할 때는 
// 반드시 범위 기반 for문을 사용하라.
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