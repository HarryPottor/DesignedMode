#pragma once
#include "ISchoolReport.h"
class CReportDecorator :public ISchoolReport
{
public:
	CReportDecorator(ISchoolReport* psr);
	virtual ~CReportDecorator();
	void Report();
	void Sign(string name);
private:
	ISchoolReport *m_pSchoolReport;

};