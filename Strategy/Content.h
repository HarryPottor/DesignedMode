#pragma once
#include "Interface.h"
class Content
{
public:
	Content(Interface *);
	~Content();
	void DoWork();
private:
	Interface * oper;
};

