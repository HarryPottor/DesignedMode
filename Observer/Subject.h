#pragma once
#include <iostream>
#include <vector>
using namespace std;

class IObserver;
class ISubject
{
public:
	ISubject(){}
	virtual ~ISubject() {}
	virtual void Notify() = 0;

	virtual void AddObserver(IObserver* observer) = 0;
	virtual void SubObserver(IObserver* observer) = 0;
	virtual string GetState() = 0;
	virtual void SetState(string) = 0;
protected:
	vector<IObserver*> vObserverList;
	string state;
};
