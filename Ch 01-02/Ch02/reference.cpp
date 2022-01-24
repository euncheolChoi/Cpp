#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{

	int nData = 10;

	// 포인터와 참조는 내부 구조상으로는 동일하다. 추가로, c에서 함수를 호출할 때 
	// 매개변수로 주소를 전달하는 기법을 '참조에 의한 호출'이라고 했는데, 여기서 
	//'참조'란 '주소'를 의미한다.
	int &ref = nData;
	ref = 20;

	cout << ref << endl; 

	return 0;


}



/*
// 이런 코드는 불가능 = 왜냐면 pnData는 상수화되었기에, 상수화된 대상에 대해 
// 단순대입을 수행할 수는 없다.
int a = 1;
int b = 3;

int *const pnData = &a ;
pnData = &b ;   

*/