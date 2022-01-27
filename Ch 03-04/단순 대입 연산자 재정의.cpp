#include "stdafx.h"
#include <iostream>
using namespace std;

//단순 대입 연산자가 구조체나 클래스에도 기본적으로 적용됨! a = b 하면 모든 멤버의 값을 그대로 복사한다.
//복사 생성자를 만들어놓는 모든 객체는 반드시 단순대입연산자도 재정의해야 한다.

class CMyData
{
public:
	CMyData(int nParam)
	{
		m_pnData = new int;
		*m_pnData = nParam;

	}
	CMyData(const CMyData &rhs)
	{
		cout << "CMyData(const CMyData &rhs)" << endl; 

		m_pnData = new int;
		//포인터가 가리키는 위치에 값을 복사한다
		*m_pnData = *rhs.m_pnData;
	}

	~CMyData()
	{
		delete m_pnData;
	}

	//단순대입 함수를 정의, 여기서 operator= 는 함수의 이름이다. 단순대입이기에 이렇게 이름을 정한 것.
	//CMyData& : CMyData 에 대한 참조자를 반환.
	CMyData& operator=(const CMyData &rhs)
	{
		*m_pnData = *rhs.m_pnData;
		//객체 자신에 대한 참조를 반환한다.
		return *this;
	}

	int GetData()
	{
		if (m_pnData != NULL)
			return *m_pnData;

		return 0;
	}

private:
	int *m_pnData = nullptr;
};

int _tmain(int argc, _TCHAR* argv[])
{
	CMyData a(10);
	CMyData b(20);
	// 단순 대입 연산자 함수를 정의했기 때문에 단순대입을 시도하면 멤버의 값을 그대로 복사한다!
	a = b;
	cout << a.GetData() << endl;

	return 0;
}
