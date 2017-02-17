#include "Emperor.h"

CEmperor* CEmperor::m_pEmperor = NULL;
HANDLE CEmperor::m_pMutex = CreateMutex(NULL, FALSE, NULL);
CEmperor::CGarbo CEmperor::m_Garbo;


CEmperor::CEmperor(void)
{
	cout << "create cemperor instance" << endl;
}

CEmperor::~CEmperor(void)
{
	cout << "destroy cemperor instance" << endl;
}

CEmperor::CEmperor(const CEmperor&)
{

}

CEmperor & CEmperor::operator=(const CEmperor & e)
{
	cout << " Copy construct" << endl;
	return *this;
}



CEmperor * CEmperor::GetInstance()
{
	if (NULL == m_pEmperor)
	{
		WaitForSingleObject(m_pMutex, INFINITE);
		if (NULL == m_pEmperor)
		{
			m_pEmperor = new CEmperor();
		}
		ReleaseMutex(m_pMutex);
	}
	return m_pEmperor;
}

void CEmperor::ReleaseInstance()
{
	if (NULL != m_pEmperor)
	{
		WaitForSingleObject(m_pMutex, INFINITE);
		if (NULL != m_pEmperor)
		{
			delete m_pEmperor;
			m_pEmperor = NULL;
		}
		ReleaseMutex(m_pMutex);
	}
}

void CEmperor::EmperorInfo(void)
{
	char buf[50] = { 0 };
	sprintf_s(buf, 50, "...........................(%s)", m_EmperorTag.c_str());
	string msg(buf);
	cout << msg.c_str() << endl;
}

void CEmperor::SetEmperorTag(string tag)
{
	m_EmperorTag = tag;
}


