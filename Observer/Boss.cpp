#include "Boss.h"
#include "Observer.h"
CBoss::CBoss()
{
}

CBoss::~CBoss()
{
}

void CBoss::Notify()
{
	for (vector<IObserver*>::iterator it = vObserverList.begin(); it != vObserverList.end(); it++)
	{
		(*it)->Update();
	}
}

void CBoss::AddObserver(IObserver * observer)
{
	vObserverList.push_back(observer);
}

void CBoss::SubObserver(IObserver * observer)
{
	for (vector<IObserver*>::iterator it = vObserverList.begin() ; it != vObserverList.end(); it++)
	{
		if (*it == observer)
		{
			vObserverList.erase(it);
		}
	}
	
}

string CBoss::GetState()
{

	return state;
}

void CBoss::SetState(string newstate)
{
	state = newstate;
}
