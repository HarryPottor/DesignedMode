#include "AddRequirementCommand.h"

CAddRequirementCommand::CAddRequirementCommand(void)
{
}

CAddRequirementCommand::~CAddRequirementCommand(void)
{

}

void CAddRequirementCommand::Execute()
{
	ICommand::m_prg->Find();
	ICommand::m_prg->Add();
	ICommand::m_prg->Plan();
}
