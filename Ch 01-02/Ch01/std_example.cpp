// hello.cpp.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.

// std : 표준이라는 의미. afx는 application framework. 따라서 표준 애플리케이션 프레임워크
// 미리 컴파일된 헤더 = 프로젝트 파일 전체에 적용하고 싶은 선언을 작성할 목적으로 존재하는파일
#include "stdafx.h"

// c++에선 사용자 정의 헤더가 아닌 표준 헤더 파일들은 모두 .h 확장명을 생략함 -> cout, endl 같은 객체 사용하기 위함.
#include <iostream>


int _tmain(int argc, _TCHAR* argv[])
{

	// std : 네임스페이스, 개념상 '소속'
	std::cout << 10 << std::endl;
	std::cout << 10.5F << std::endl;
	std::cout << 3 + 4 << std::endl;

	return 0;
}

