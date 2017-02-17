#pragma once

#include "IHumanFactory.h"
#include "IHuman.h"

template<class T>
class CStandardHumanFactory:public IHumanFactory
{
public:
	CStandardHumanFactory(){}
	~CStandardHumanFactory(){}
	IHuman * CreateHuman()
	{
		return new T;
	}

private:

};
