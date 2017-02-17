#pragma once
#include "StandardHumanFactory.h"
template<class T>
class CMaleHumanFactory:public CStandardHumanFactory<T>
{
public:
	CMaleHumanFactory(){}
	~CMaleHumanFactory(){}
	IHuman * CreateYellowHuman()
	{
		return CreateHuman();
	}
	IHuman * CreateWhiteHuman()
	{
		return CreateHuman();
	}

private:

};
