#include "stdafx.h"
#include <iostream>	
using namespace std;

// this 포인터 : 제작자가 작성중인, 클래스의 실제 인스턴스에 대한 주소를 가리키는 포인터 
// this 포인터는 (고유한)휴대폰의 시리얼 번호같은 것! 문제는 이 시리얼 번호가 제작과정이 아니라 생산단계에 결정된다는 것.
//아직 결정되지 않은 시리얼 번호를 이용해야 하는 프로그램 코드를 짜야 할 수도 있다.
// 이때 현 시점에서 미래의 시리얼 번호에 접근하는 방법이 바로 this 포인터이다.

class CMyData
{
public:

	// 첫 번째 매개변수로 전달된 인스턴스의 주소는 '이름이 this인 포인터 변수(지역변수)에 저장된다'
	CMyData(int nParam) : m_nData(nParam) { };
	void PrintData()
	{	
		//멤버변수 m_nData의 값
		cout << m_nData << endl;

		//CMyData 클래스의 멤버인 m_nData값
		cout << CMyData::m_nData << endl;
		// 메서드를 호출한 인스턴스의 m_nData멤버 값
		cout << this->m_nData << endl;

		// 메서드를 호출한 인스턴스의 CMyData 클래스 멤버 m_nData값
		cout << this->CMyData::m_nData << endl;
	}

private:
	int m_nData;
};

int _tmain(int argc, _TCHAR* argv[])
{
	CMyData a(5), b(10);
	a.PrintData();
	b.PrintData();

	return 0;
}