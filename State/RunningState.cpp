#include "RunningState.h"
#include "MyContex.h"
#include <iostream>
using std::cout;
using std::endl;

CRunningState::CRunningState(void)
{
}

CRunningState::~CRunningState(void)
{
}

void CRunningState::Open()
{
	//do nothing
}

void CRunningState::Close()
{
	//do nothing
}

void CRunningState::Run()
{
	cout << "����������..." << endl;
}

void CRunningState::Stop()
{
	this->CLiftState::m_pContext->SetLiftState(CMyContext::pStoppingState);
	this->CLiftState::m_pContext->GetLiftState()->Stop();
}

