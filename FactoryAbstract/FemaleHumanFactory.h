#pragma once
#include "StandardHumanFactory.h"
template<class T>
class CFemaleHumanFactory :public CStandardHumanFactory<T>
{
	//���� �����ʵ�ֺ������ֿ���������𱨴�
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
