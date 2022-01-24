#include "stdafx.h"	
#include <stdio.h>
using namespace std;

//this 포인터를 설명하기 위해 c문법으로 풀어쓴 형태( 문법 오류가 나긴 함!)

class CMyData
{

public:
	CMyData(int nParam) : m_nData(nParam) { };
	void PrintData(CMyData *pData)
	{
		//메서드의 인자로 들어온 인스턴스의 주소를 CMyData 클래스의 새로운 포인터 변수 
		// *this 에 저장한다.
		// 그 다음부터 this포인터를 이용한 접근은 포인터를 이용한 구조체 멤버 접근과 동일
		CMyData *this = pData;

		cout << m_nData << endl;
		cout << CMyData::m_nData << endl;
		cout << this->m_nData << endl;
		cout << this->CMyData::m_nData;

		
	}
};

int _tmian(int argc, _TCHAR* argv[])
{
	CMyData a(5);
	//이렇게 메서드를 호출하는 인스턴스의 주소를 넘겨준다.
	a.PrintData(&a);

	return 0;
}