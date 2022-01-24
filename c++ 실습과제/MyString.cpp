#include "stdafx.h"
#include "MyString.h"

/*
//주어진 조건을 바탕으로 내가 작성했던 코드. 작동은 했으나, 
//동적할당한 메모리를 언제 해제해야 하는지, 예외조건 처리에 미흡했다

CMyString::CMyString()
	: m_pszData(NULL)
	, m_nLength(0)
{
}


CMyString::~CMyString()
{
	
}


int CMyString::SetString(const char* pszParam)
{
	//매개변수로 전달된 문자열의 길이를 측정하고 m_nLength에 저장.
	// -> 널문자 이용, 인덱스 차이 이용
	char *m_pszData = new char[32];
	m_pszData = (char*) pszParam; 
	
	//매개변수가 NULL이거나 문자열의 길이가 0인 경우 
	if (pszParam == NULL)	cout << "문자를 입력하세요" << endl;
	else
	{
		int index = 0;
		while (m_pszData[index] != '\0')
		{

			++index;
		}
		m_nLength = index;

	}
	cout << m_nLength << endl;


	return 0;
}


const char* CMyString::GetString()
{
	return m_pszData;
}


void CMyString::Release()
{
	delete[] m_pszData;
	return;

}

*/

// 모범답안 코드


CMyString::CMyString()
	: m_pszData(NULL)
	, m_nLength(0)
{
}


CMyString::~CMyString()
{
	//객체가 소멸하기 전에 메모리를 해제한다
	Release();
}


int CMyString::SetString(const char* pszParam)
{
	
	// 새로운 문자열 할당에 앞서 기존 정보를 해제한다.
	Release(); 

	//NULL을 인수로 함수를 호출한 것은 메모리를 해제하고
	//NULL로 초기화하는 것으로 볼수 있다

	if (pszParam == NULL)
		return 0;

	int nLength = strlen(pszParam);

	if (nLength == 0)
		return 0;

	//문자열의 끝인 NULL 문자를 고려해 메모리를 동적할당한다
	//나는 하드코딩으로 직접 사이즈를 지정했다. 유지보수 측면에서 안좋다.
	// 이거에 대한 키워드가 있었는데.. 뭐였지?
	
	m_pszData = new char[nLength + 1];

	strcpy_s(m_pszData, sizeof(char) * (nLength + 1), pszParam);
	m_nLength = nLength;

	//문자열의 길이를 반환
	return nLength;
}

const char* CMyString::GetString()
{
	return m_pszData;
}

void CMyString::Release()
{
	//이 함수가 여러 번 호출될 경우를 고려해 주요 멤버를 초기화
	if (m_pszData != NULL)
	{
		delete[] m_pszData;
	}
	m_pszData = NULL;
	m_nLength = 0;
}