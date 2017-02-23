#pragma once
#include "Subject.h"
class IObserver
{
public:
	IObserver() {}
	virtual ~IObserver() {}
	
	virtual void Update() = 0;
protected:
	ISubject * m_pSubject;

};