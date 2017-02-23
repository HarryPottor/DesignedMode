#pragma once
#include "Subject.h"
class CBoss :public ISubject
{
public:
	CBoss();
	~CBoss();

	void Notify();
	void AddObserver(IObserver* observer);
	void SubObserver(IObserver* observer);
	string GetState();
	void SetState(string);

};