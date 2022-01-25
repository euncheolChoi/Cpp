#include "stdafx.h"
#include <iostream>
using namespace std;

// CMyData b(a) 코드가 실행되는 순간 깊은 복사를 수행할 별도의 복사 생성자가 없기 때문에 컴파일러가 스스로 
// 만든 복사 생성자가 작동
// 이 코드가 정상적으로 작동하는 이유는 메모리를 해제하지 않았기 떄문이다.
/*
CMyData(const CMyData &rhs)
{
	m_pnData = rhs.m_pnData ;
}
//위와 같은 복사생성자를 만들어 넣을 것이다.
//따라서 복사생성자를 직접 만들어 넣을때 11번 행 대신 
// m_pnData = new int ; // 메모리를 동적할당하고 
// *m_pnData = *rhs.m_pnData ; // 포인터가 가리키는 위치에 값을 복사한다!

// 깊은 복사가 되도록, 위와 같이 복사 생성자를 수정해야 한다.
*/

class CMyData
{

public:
	CMyData(int nParam)
	{
		m_pnData = new int;
		*m_pnData = nParam;
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
	CMyData b(a);
	cout << a.GetData() << endl;
	cout << b.GetData() << endl;

	return 0;
}


