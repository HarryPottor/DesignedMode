#pragma once

#include "IHumen.h"
class IFactor
{
public:
	IFactor();
	virtual ~IFactor();
	virtual IHumen* CreateHumen() = 0;
private:

};