#pragma once
#include "ILetterProcess.h"

class CLetter:public ILetterProcess
{
public:
	CLetter();
	~CLetter();
	void WriteContent(string content) ;
	void WriteEnvelope(string address);
	void InfoEnvelope() ;
	void SendLetter() ;


private:

};
