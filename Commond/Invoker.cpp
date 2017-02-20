#include "Invoker.h"

CInvoker::CInvoker()
{
}

CInvoker::~CInvoker()
{
}

void CInvoker::SetCommand(ICommand * pcommand)
{
	m_pCommand = pcommand;
}

void CInvoker::Action()
{
	m_pCommand->Execute();
}
