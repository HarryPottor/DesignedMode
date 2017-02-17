#pragma once
#include "IFactor.h"
#include "WhiteHumen.h"

class CWhiteFactor:public IFactor 
{
public:
	CWhiteFactor();
	~CWhiteFactor();
	IHumen* CreateHumen();
private:

};
