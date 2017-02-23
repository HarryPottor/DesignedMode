#pragma once
#include "Memento.h"
#include <iostream>
using namespace std;

class CRole
{
public:
	int state;
	CMemento* CreateMemento()
	{
		return new CMemento(state);
	}
	void Revert(CMemento*mement)
	{
		state = mement->GetState();
	}
	void Show()
	{
		cout << "state = " << state << endl;
	}

};