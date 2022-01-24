#include "stdafx.h"
#include "MyString.h"

/*
//�־��� ������ �������� ���� �ۼ��ߴ� �ڵ�. �۵��� ������, 
//�����Ҵ��� �޸𸮸� ���� �����ؾ� �ϴ���, �������� ó���� �����ߴ�

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
	//�Ű������� ���޵� ���ڿ��� ���̸� �����ϰ� m_nLength�� ����.
	// -> �ι��� �̿�, �ε��� ���� �̿�
	char *m_pszData = new char[32];
	m_pszData = (char*) pszParam; 
	
	//�Ű������� NULL�̰ų� ���ڿ��� ���̰� 0�� ��� 
	if (pszParam == NULL)	cout << "���ڸ� �Է��ϼ���" << endl;
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

// ������ �ڵ�


CMyString::CMyString()
	: m_pszData(NULL)
	, m_nLength(0)
{
}


CMyString::~CMyString()
{
	//��ü�� �Ҹ��ϱ� ���� �޸𸮸� �����Ѵ�
	Release();
}


int CMyString::SetString(const char* pszParam)
{
	
	// ���ο� ���ڿ� �Ҵ翡 �ռ� ���� ������ �����Ѵ�.
	Release(); 

	//NULL�� �μ��� �Լ��� ȣ���� ���� �޸𸮸� �����ϰ�
	//NULL�� �ʱ�ȭ�ϴ� ������ ���� �ִ�

	if (pszParam == NULL)
		return 0;

	int nLength = strlen(pszParam);

	if (nLength == 0)
		return 0;

	//���ڿ��� ���� NULL ���ڸ� ����� �޸𸮸� �����Ҵ��Ѵ�
	//���� �ϵ��ڵ����� ���� ����� �����ߴ�. �������� ���鿡�� ������.
	// �̰ſ� ���� Ű���尡 �־��µ�.. ������?
	
	m_pszData = new char[nLength + 1];

	strcpy_s(m_pszData, sizeof(char) * (nLength + 1), pszParam);
	m_nLength = nLength;

	//���ڿ��� ���̸� ��ȯ
	return nLength;
}

const char* CMyString::GetString()
{
	return m_pszData;
}

void CMyString::Release()
{
	//�� �Լ��� ���� �� ȣ��� ��츦 ����� �ֿ� ����� �ʱ�ȭ
	if (m_pszData != NULL)
	{
		delete[] m_pszData;
	}
	m_pszData = NULL;
	m_nLength = 0;
}