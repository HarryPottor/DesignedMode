#pragma once

#include "NewCorp.h"
#include "IProduct.h"

class CShanZhaiCorp:public CNewCorp
{
public:
	CShanZhaiCorp(IProduct *pproduct);
	~CShanZhaiCorp();
	void MakeMoney();
private:

};
