#include "CarModel.h"

CCarModel::CCarModel()
{
}

CCarModel::~CCarModel()
{
}

void CCarModel::Run()
{
	vector<string>::const_iterator it = m_pSequence->begin();
	for (; it < m_pSequence->end(); it++)
	{
		string actionName = *it;
		if (actionName.compare("start") == 0)
		{
			Start();
		}
		if (actionName.compare("stop") == 0)
		{
			Stop();
		}
		if (actionName.compare("alarm") == 0)
		{
			Alarm();
		}
		if (actionName.compare("engine boom") == 0)
		{
			EngineBoom();
		}
	}
}

void CCarModel::SetSequence(vector<string>* pSeq)
{
	m_pSequence = pSeq;
}
