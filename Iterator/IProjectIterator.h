#pragma once

#include "IIterator.h"
class IProject;
class IProjectIterator:public IIterator
{
public:
	IProjectIterator() {}
	~IProjectIterator(){}
	virtual bool HasNext() = 0;
	virtual IProject *Next() = 0;
private:

};
