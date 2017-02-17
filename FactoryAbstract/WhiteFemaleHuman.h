#pragma once
#include "WhiteHuman.h"
class CWhiteFemaleHuman :public CWhiteHuman
{
public:
	CWhiteFemaleHuman(void)
	{
	}
	~CWhiteFemaleHuman(void)
	{
	}
	void Sex()
	{
		cout << "该白种人的性别为女..." << endl;
	}
};