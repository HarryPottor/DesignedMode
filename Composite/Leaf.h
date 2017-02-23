#pragma once

#include "Compnent.h"

class CLeaf:public ICompnent
{
public:
	CLeaf(string name):ICompnent(name){}
	~CLeaf(){}
	void Add(ICompnent* c){}
	void Remove(ICompnent *c){}
	void Display(int depth)
	{
		cout << (*(new string(depth,'-')) + m_sName).c_str() << endl;
		//cout << m_sName.c_str() << endl;
	}
	void ShowDuty()
	{
		cout << m_sName.c_str() << "µÄÔðÈÎ" << endl;
	}
};