#include "stdafx.h"
#include <iostream>
using namespace std;

class CMyData
{
	// 기본 접근 제어 지시자는 privata. 외부 접근뿐만 아니라 파생 클래스로부터의 접근까지 모두 차단.
	int m_nData;

public:
	int GetData(void)
	{
		return m_nData;
	}
	void SetData(int nParam)
	{
		m_nData = nParam;
	}

};

// 사용자 코드. public에만 접근할 수 있으므로 멤버 변수에 접근할 수 없는 상태.
int _tmain(int argc, _TCHAR* argv[])
{
	CMyData data;
	data.SetData(10);
	cout << data.GetData() << endl;

	return 0;
}