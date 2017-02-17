#pragma once
#include "Interface.h"

class Proxy : public Interface_Proxy
{
public:
	Proxy(Interface_Proxy*);
	~Proxy();
	void LookFor();
	void GiveMoney();

private:
	Interface_Proxy * proxy;
};
