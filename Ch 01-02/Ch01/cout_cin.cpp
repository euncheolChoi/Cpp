#include "stdafx.h"
#include <string>
#include <cstdio>
#include <iostream>

// cå���� ����� ��ζ��, UI�� ����� �и��ؾ� �Ѵ� �����Ƿ�, ����� ����ϴ� �κ��� _tmain()���� 
// ������ �������� ���� �� ���ٴ� ������ ���. 
int _tmain(int argc, _TCHAR* argv[])
{
	int nAge;
	std::cout << "���̸� �Է��ϼ���" << std::endl;
	std::cin >> nAge;

	char szJob[32];
	std::cout << "������ �Է��ϼ���" << std::endl;
	std::cin >> szJob;

	// string Ŭ���� �ν��Ͻ� ����
	std::string strName;
	std::cout << "�̸��� �Է��ϼ���" << std::endl;
	std::cin >> strName;

	std::cout << "����� �̸��� " << strName << "�̰�, "
		<< "������ " << szJob << "�Դϴ�" << std::endl;

	return 0;
}