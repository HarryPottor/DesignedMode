#pragma once
#pragma once
class CMyContext;
class CLiftState
{
public:
	CLiftState(void);
	virtual ~CLiftState(void);
	void SetContext(CMyContext *pContext);
	virtual void Open() = 0;
	virtual void Close() = 0;
	virtual void Run() = 0;
	virtual void Stop() = 0;
protected:
	CMyContext *m_pContext;
};