#pragma once
#include <iostream>
using namespace std;

class ILetterProcess
{
public:
	ILetterProcess();
	virtual ~ILetterProcess();

	virtual void WriteContent(string content) = 0;
	virtual void WriteEnvelope(string address) = 0;
	virtual void InfoEnvelope() = 0;
	virtual void SendLetter() = 0;


private:

};
