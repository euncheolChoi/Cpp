#include "stdafx.h"
#include <iostream>
using namespace std;

//r-value : ������ �߰��������� �߻�. �ӽð���� �⺻������ ����̹Ƿ� r-value������ ��
int TestFunc(int nParam)
{

	int nResult = nParam * 2;
	return nResult;
}

int _tmain(int argc, _TCHAR* argv[])
{

	int nInput = 0;
	cout << "Input number : " << endl;
	cin >> nInput;
	
	// ����������� ������� �ӽ� ��ü�� ���� r-value ���� 
	// r-value ������°��� �� ����� ��� ���� �����ڸ� �ο��� �� �ִٴ� ��
	int &&rdata = nInput + 5;
	cout << rdata << endl;

	// �Լ� ��ȯ���� ������� �ӽ� ��ü�� ���� r-value ����
	int &&result = TestFunc(10);

	result += 10;
	cout << result << endl;

	return 0;
}