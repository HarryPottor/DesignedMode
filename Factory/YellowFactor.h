#pragma once
#include "IFactor.h"
#include "YellowHumen.h"
class CYellowFactor:public IFactor
{
public:
	CYellowFactor();
	~CYellowFactor();
	IHumen* CreateHumen();
private:

};
