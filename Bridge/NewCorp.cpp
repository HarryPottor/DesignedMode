#include "NewCorp.h"

CNewCorp::CNewCorp(IProduct *pproduct)
{
	m_pProduct = pproduct;
}

CNewCorp::~CNewCorp()
{
}

void CNewCorp::MakeMoney()
{
	m_pProduct->BeProducted();
	m_pProduct->BeSelled();
}
