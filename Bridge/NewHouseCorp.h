#pragma once

#include "NewCorp.h"
#include "House.h"

class CNewHouseCorp:public CNewCorp
{
public:
	CNewHouseCorp(CHouse * pHouse);
	~CNewHouseCorp();
	void MakeMoney();
private:

};
