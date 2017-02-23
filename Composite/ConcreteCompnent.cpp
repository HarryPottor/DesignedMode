#include "ConcreteCompnent.h"

ConcreteCompnent::ConcreteCompnent(string name):ICompnent(name)
{
	
}

ConcreteCompnent::~ConcreteCompnent()
{
}

void ConcreteCompnent::Add(ICompnent * c)
{
	comlist.push_back(c);
}

void ConcreteCompnent::Remove(ICompnent * c)
{
	comlist.remove(c);
}

void ConcreteCompnent::Display(int depth)
{
	cout << (*(new string(depth,'-')) + m_sName).c_str() << endl;
	//cout << m_sName.c_str() << endl;
	for each (ICompnent* var in comlist)
	{
		var->Display(depth + 2);
	}
}

void ConcreteCompnent::ShowDuty()
{
	for each (ICompnent* var in comlist)
	{
		var->ShowDuty();

	}
}
