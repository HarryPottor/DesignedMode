#pragma once
#include "IProduct.h"
class CIPod :
	public IProduct
{
public:
	CIPod(void);
	~CIPod(void);
	void BeProducted();
	void BeSelled();
};