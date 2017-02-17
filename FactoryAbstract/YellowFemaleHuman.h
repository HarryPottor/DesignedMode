#pragma once
#include "YellowHuman.h"

class CYellowFemaleHuman:public CYellowHuman
{
public:
	CYellowFemaleHuman(){}
	~CYellowFemaleHuman(){}
	void Sex()
	{
		cout << "该黄种人的性别为女..." << endl;
	}

private:

};
