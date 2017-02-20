#pragma once
#include "ReportDecorator.h"
#include "ISchoolReport.h"

class CSortDecorator :public CReportDecorator
{
public:
	CSortDecorator(ISchoolReport* psr);
	~CSortDecorator();
	void Report();
private:
	void ReportSort();

};