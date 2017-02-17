#pragma once
#include "StandardHumanFactory.h"
template<class T>
class CFemaleHumanFactory :public CStandardHumanFactory<T>
{
	//这里 如果把实现和声明分开，则会引起报错
public:
	CFemaleHumanFactory(){}
	~CFemaleHumanFactory(){}
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
