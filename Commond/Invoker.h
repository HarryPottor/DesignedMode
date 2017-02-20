#pragma once
#include "ICommand.h"

class CInvoker
{
public:
	CInvoker();
	~CInvoker();
	void SetCommand(ICommand* pcommand);
	void Action();
private:
	ICommand * m_pCommand;
};