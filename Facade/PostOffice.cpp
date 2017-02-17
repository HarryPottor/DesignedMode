#include "PostOffice.h"

CPostOffice::CPostOffice()
{
	m_pLetterPolice = new CLetterPolice;
	m_pLetterProcess = new CLetter;
}

CPostOffice::~CPostOffice()
{
	delete m_pLetterPolice;
	delete m_pLetterProcess;
}

void CPostOffice::SendLetter(string context, string address)
{
	m_pLetterProcess->WriteContent(context);
	m_pLetterProcess->WriteEnvelope(address);
	m_pLetterPolice->CheckLetter(m_pLetterProcess);
	m_pLetterProcess->InfoEnvelope();
	m_pLetterProcess->SendLetter();
}


