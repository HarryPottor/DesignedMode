#pragma once
#include "ICommand.h"

class CDeletePageCommand:public ICommand
{
public:
	CDeletePageCommand(void);
	~CDeletePageCommand(void);
	void Execute();
private:

};
