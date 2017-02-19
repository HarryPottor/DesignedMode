#pragma once
#include "BenzBuilder.h"
#include "BenzModel.h"
#include "BMWBuilder.h"
#include "BMWModel.h"
#include <iostream>
#include <vector>
using namespace std;

class CDirector
{
public:
	CDirector();
	~CDirector();
	CBenzModel * GetABenzModel();
	CBenzModel * GetBBenzModel();
	CBMWModel * GetCBMWModel();
	CBMWModel * GetDBMWModel();
private:
	vector<string> * m_pSeqence;
	CBenzBuilder * m_pBenzBuilder;
	CBMWBuilder * m_pBMWBuilder;
};
