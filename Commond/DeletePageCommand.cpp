#include "DeletePageCommand.h"

CDeletePageCommand::CDeletePageCommand(void)
{
}

CDeletePageCommand::~CDeletePageCommand(void)
{
}

void CDeletePageCommand::Execute()
{
	ICommand::m_ppg->Find();
	ICommand::m_ppg->Delete();
	ICommand::m_ppg->Plan();
}
