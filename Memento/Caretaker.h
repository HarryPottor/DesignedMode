#pragma once
#include "Memento.h"
#include <iostream>

class CCaretaker
{
public:
	CCaretaker()
	{
		mement = NULL;
	}
	void SetMemento(CMemento* mem)
	{
		
		if (mement)
		{
			delete mement;
		}
		
		mement = mem;
	}
	CMemento* GetMemento()
	{
		return mement;
	}
private:
	CMemento * mement;


};