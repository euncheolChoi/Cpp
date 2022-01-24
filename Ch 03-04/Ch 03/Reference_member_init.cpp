#include "stdafx.h"
#include <iostream>
using namespace std;

class CRefTest
{
public:

	//참조형 멤버는 반드시 생성자 초기화 목록을 이용해 초기화한다.
	//CRefTest(int nParam) : m_nData(nParam) {}; 이렇게 쓰면? -> 쓰레기 값이 나오는데, 이는 참조자가 가리키는
	//원본이 이미 삭제되었기 때문. 함수의 매개변수는 함수 내부의 자동 변수와 같으므로 반환될 때 매개변수는 소멸된다.
	// 따라서 m_mData(nParam) 은 결국 사라질 대상에 대한 참조자가, 초기화되는 결과를 초래한다.

	CRefTest(int &nParam) : m_nData(nParam) {};
	int GetData(void)
	{
		return m_nData; 
	}

private:
	//참조형 멤버는 객체가 생성될 때 반드시 초기화해야 한다
	int &m_nData;
};


int _tmain(int argc, _TCHAR* agrv[])
{
	int a = 10; 
	CRefTest t(a);

	cout << t.GetData() << endl;

	//참조 원본인 a의 값이 수정되었다!
	a = 20;

	cout << t.GetData() << endl;

	return 0;
}