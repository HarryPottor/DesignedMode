#pragma once

#include "ICarBuilder.h"
#include "CarModel.h"
#include "BMWModel.h"
class CBMWBuilder :
	public ICarBuilder
{
public:
	CBMWBuilder(void);
	~CBMWBuilder(void);
	void SetSequence(vector<string> *pSeq);
	CCarModel * GetCarModel();
private:
	CCarModel *m_pBMW;
};