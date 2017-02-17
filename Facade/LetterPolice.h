#pragma once
#include "ILetterProcess.h"

class CLetterPolice
{
public:
	CLetterPolice();
	~CLetterPolice();

	void CheckLetter(ILetterProcess* pLetter);
private:

};
