#include "stdafx.h"
#include <iostream>
using namespace std;

class CMyData
{
public:
	// 디폴트 생성자 함수
	CMyData()
	{
		cout << "CMyData()" << endl;
	}

	//복사 생성자 선언 및 정의 (복사 생성자 문법)
	CMyData(const CMyData &rhs)

	{
		//새로 생성되는 객체든 원본 객체는 모두 m_nData를 가지므로 복사본 생성 순간에 
		// 이 둘이 한꺼번에 나타난다. 이 두가지를 명시적으로 구별하고자 l-vlaue에 의도적으로 
		// this->m_nData 라고 쓴다!
		this->m_nData = rhs.m_nData;
		cout << "CMyData(const CMyData &rhs)" << endl;

	}

	int GetData(void) const { return m_nData; }
	void SetData(int nParam) { m_nData = nParam; }

private:
	int m_nData;

};

int _tmain(int argc, _TCHAR* argv[])
{
	//디폴트 생성자가 호출되는 경우
	CMyData a;
	a.SetData(10);

	//복사 생성자가 호출되는 경우
	CMyData b(a);
	cout << b.GetData() << endl;

	return 0;
}


// 생성자 쓰는 이유 중 하나 -> 클래스 멤버 변수는 생성자를 이용해서 초기화할 수 있다.
// 생성자를 이용하는 함수의 가장 큰 특징 : 1. 반환 자료형이 없다. 2. 호출하는 함수가 아님. 적절한 시기에 
// 내부에서 자동으로 호출되는 함수.