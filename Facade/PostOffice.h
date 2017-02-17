#pragma once
#include "ILetterProcess.h"
#include "LetterPolice.h"
#include "Letter.h"

class CPostOffice
{
public:
	CPostOffice();
	~CPostOffice();

	void SendLetter(string context, string address);

private:
	ILetterProcess * m_pLetterProcess;
	CLetterPolice * m_pLetterPolice;

};
