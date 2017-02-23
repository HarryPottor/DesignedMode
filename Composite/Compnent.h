#pragma once
#include <iostream>
using namespace std;
class ICompnent
{
public:
	ICompnent(string name):m_sName(name){}
	virtual ~ICompnent() {}
	virtual void Add(ICompnent* c)=0;
	virtual void Remove(ICompnent *c)=0;
	virtual void Display(int depth)=0;
	virtual void ShowDuty()=0;
protected:
	string m_sName;
};