#include "stdafx.h"
#include <string>
#include <cstdio>
#include <iostream>

// c책에서 배웠던 대로라면, UI와 기능을 분리해야 한다 했으므로, 출력을 담당하는 부분은 _tmain()에서 
// 밖으로 빼놓으면 좋을 것 같다는 생각이 든다. 
int _tmain(int argc, _TCHAR* argv[])
{
	int nAge;
	std::cout << "나이를 입력하세요" << std::endl;
	std::cin >> nAge;

	char szJob[32];
	std::cout << "직업을 입력하세요" << std::endl;
	std::cin >> szJob;

	// string 클래스 인스턴스 선언
	std::string strName;
	std::cout << "이름을 입력하세요" << std::endl;
	std::cin >> strName;

	std::cout << "당신의 이름은 " << strName << "이고, "
		<< "직업은 " << szJob << "입니다" << std::endl;

	return 0;
}