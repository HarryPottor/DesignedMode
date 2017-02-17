#pragma once

#include "IHuman.h"

class IHumanFactory
{
public:
	IHumanFactory(){}
	virtual ~IHumanFactory(){}
	virtual IHuman * CreateYellowHuman() = 0;
	virtual IHuman * CreateWhiteHuman() = 0;
private:

};
