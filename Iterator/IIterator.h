#pragma once
class IProject;
class IIterator
{
public:
	IIterator(){}
	virtual ~IIterator(){}
	virtual bool HasNext() = 0;
	virtual IProject * Next() = 0;
};