#include "ShanZhaiCorp.h"
#include <iostream>
using namespace std;
CShanZhaiCorp::CShanZhaiCorp(IProduct *pproduct):CNewCorp(pproduct)
{
}

CShanZhaiCorp::~CShanZhaiCorp()
{
}

void CShanZhaiCorp::MakeMoney()
{
	this->CNewCorp::MakeMoney();
	cout << "ÎÒ×¬Ç®Ñ½...." << endl;
}
