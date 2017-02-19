#pragma once
#include "ICarBuilder.h"
#include "CarModel.h"
#include "BenzModel.h"
class CBenzBuilder :
	public ICarBuilder
{
public:
	CBenzBuilder(void);
	~CBenzBuilder(void);
	void SetSequence(vector<string> *pSeq);
	CCarModel * GetCarModel();
private:
	CCarModel *m_pBenz;
};