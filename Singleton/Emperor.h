#pragma once

#include <iostream>
#include <Windows.h>
using namespace std;

class CEmperor
{
public:
	static CEmperor * GetInstance();
	static void ReleaseInstance();
	void EmperorInfo(void);
	void SetEmperorTag(string tag);


private:
	CEmperor(void);
	virtual ~CEmperor(void);

	CEmperor(const CEmperor&);
	CEmperor & operator=(const CEmperor&);

	static CEmperor * m_pEmperor;
	static HANDLE m_pMutex;
	string m_EmperorTag;


	//创建一个 对象，在其释放的时候，清除单例的资源。这是为了以防 忘记调用 ReleaseInstance
	class CGarbo
	{
	public:
		CGarbo()
		{
			cout << "Create Garbo" << endl;
		}
		~CGarbo()
		{
			cout << "Destroy Garbo" << endl;
			if (NULL != m_pEmperor)
			{
				WaitForSingleObject(m_pMutex, INFINITE);
				if (NULL != m_pEmperor)
				{
					cout << "Remove instance" << endl;
					delete m_pEmperor;
					m_pEmperor = NULL;
				}
				ReleaseMutex(m_pMutex);
			}
			if (NULL != m_pMutex)
			{
				cout << "Delete mutex" << endl;
				CloseHandle(m_pMutex);
				m_pMutex = NULL;
			}
		}
	};
	static CGarbo m_Garbo;

};

