#include "MyContex.h"

COpenningState* CMyContext::pOpenningState = NULL;
CCloseingState *CMyContext::pCloseingState = NULL;
CRunningState *CMyContext::pRunningState = NULL;
CStoppingState *CMyContext::pStoppingState = NULL;

CMyContext::CMyContext()
{
	m_pLiftState = NULL;
	pOpenningState = new COpenningState();
	pCloseingState = new CCloseingState();
	pRunningState = new CRunningState();
	pStoppingState = new CStoppingState();
}

CMyContext::~CMyContext(void)
{
	delete pOpenningState;
	pOpenningState = NULL;
	delete pCloseingState;
	pCloseingState = NULL;
	delete pRunningState;
	pRunningState = NULL;
	delete pStoppingState;
	pStoppingState = NULL;
}

CLiftState * CMyContext::GetLiftState()
{
	return m_pLiftState;
}

void CMyContext::SetLiftState(CLiftState *pLiftState)
{
	this->m_pLiftState = pLiftState;
	this->m_pLiftState->SetContext(this);
}

void CMyContext::Open()
{
	this->m_pLiftState->Open();
}

void CMyContext::Close()
{
	this->m_pLiftState->Close();
}

void CMyContext::Run()
{
	this->m_pLiftState->Run();
}

void CMyContext::Stop()
{
	this->m_pLiftState->Stop();
}
