#pragma once
#include "IProduct.h"
class CHouse :
	public IProduct
{
public:
	CHouse(void);
	~CHouse(void);
	void BeProducted();
	void BeSelled();
};