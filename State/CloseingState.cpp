#include "CloseingState.h"
#include "MyContex.h"
#include <iostream>
using std::cout;
using std::endl;

CCloseingState::CCloseingState(void)
{
}

CCloseingState::~CCloseingState(void)
{
}

void CCloseingState::Open()
{
	m_pContext->SetLiftState(CMyContext::pOpenningState);
	m_pContext->GetLiftState()->Open();
	//this->CLiftState::m_pContext->SetLiftState(CMyContext::pOpenningState);
	//this->CLiftState::m_pContext->GetLiftState()->Open();
}

void CCloseingState::Close()
{
	cout << "µçÌÝÃÅ¹Ø±Õ..." << endl;
}

void CCloseingState::Run()
{
	this->CLiftState::m_pContext->SetLiftState(CMyContext::pRunningState);
	this->CLiftState::m_pContext->GetLiftState()->Run();
}

void CCloseingState::Stop()
{
	this->CLiftState::m_pContext->SetLiftState(CMyContext::pStoppingState);
	this->CLiftState::m_pContext->GetLiftState()->Stop();
}
