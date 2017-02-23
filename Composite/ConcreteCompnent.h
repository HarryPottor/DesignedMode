#pragma once
#include "Compnent.h"
#include <list>
class ConcreteCompnent :public ICompnent
{
public:
	ConcreteCompnent(string name);
	~ConcreteCompnent();
	void Add(ICompnent* c);
	void Remove(ICompnent *c);
	void Display(int depth);
	void ShowDuty();

private:
	list<ICompnent*>comlist;



};
