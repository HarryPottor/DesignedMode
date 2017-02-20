#pragma once

#include "ICommand.h"

class CAddRequirementCommand : public ICommand
{
public:
	CAddRequirementCommand(void);
	~CAddRequirementCommand(void);
	void Execute();
};