#pragma once
class IProduct
{
public:
	IProduct(){}
	virtual ~IProduct(){}

	virtual void  BeProducted() = 0;
	virtual void  BeSelled() = 0;

private:

};