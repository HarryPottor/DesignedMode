#include "OpenningState.h"
#include "MyContex.h"
#include <iostream>
using std::cout;
using std::endl;

COpenningState::COpenningState(void)
{
}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
COpenningState::~COpenningState(void)
{
}

void COpenningState::Open()
{
	cout << "µçÌÝÃÅ¿ªÆô..." << endl;
}

void COpenningState::Close()
{
	this->CLiftState::m_pContext->SetLiftState(CMyContext::pCloseingState);
	this->CLiftState::m_pContext->GetLiftState()->Close();
}

void COpenningState::Run()                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
{
	//do nothing
}

void COpenningState::Stop()
{
	//do nothing
}
