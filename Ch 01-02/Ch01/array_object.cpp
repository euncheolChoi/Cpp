#include "stdafx.h"
#include <iostream>
using namespace std; 

/*
int main(void)
{

	int a = 10;
	int b(a);
	//c�� ������ �ڵ����� b�� ������ ���󰣴�!
	//�ʱ갪�� ���Ŀ� ���� �����ϴ� �ν��Ͻ��� ������ �ڵ����� �����ȴ�
	auto c(b);
}

*/
	
int _tmain(int argc, _TCHAR* argv[])
{
	// �ν��Ͻ��� �������� �����ϴ� ���(�ʱ갪 ���x)
	int *pData = new int;

	//�ʱ갪�� ����ϴ� ���
	int *pNewData = new int(10);

	*pData = 5;
	cout << *pData << endl;
	cout << *pNewData << endl;

	delete pData;
	delete pNewData;

	//���⼭���� �ٸ� ����
	
	// ��ü�� �迭 ���·� ���� �����Ѵ�. 
	int *arr = new int[5];
	for (int i = 0; i < 5; ++i)
	{
		arr[i] = (i + 1) * 10;

	}

	for (int i = 0; i < 5; ++i)
	{
		cout << arr[i] << endl;
	}

	delete[] arr;
	return 0;




}


