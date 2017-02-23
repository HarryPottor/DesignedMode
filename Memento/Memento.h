#pragma once

class CMemento
{
public:
	CMemento(int value):state(value){}
	int GetState()
	{
		return state;
	}
private:
	int state;


};