#pragma once
#include "IProduct.h"
class CNewCorp
{
public:
	CNewCorp(IProduct *pproduct);
	virtual ~CNewCorp();
	void MakeMoney();
private:
	IProduct * m_pProduct;
};
