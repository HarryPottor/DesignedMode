#pragma once
#include "YellowHuman.h"

class CYellowMaleHuman :public CYellowHuman
{
public:
	CYellowMaleHuman() {}
	~CYellowMaleHuman() {}
	void Sex()
	{
		cout << "该黄种人的性别为男..." << endl;
	}

private:

};
