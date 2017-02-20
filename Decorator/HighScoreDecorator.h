#pragma once
#include "ISchoolReport.h"
#include "ReportDecorator.h"

class CHighScoreDecorator :public CReportDecorator
{
public:
	CHighScoreDecorator(ISchoolReport*psr);
	~CHighScoreDecorator();
	void Report();
private:
	void ReportHighScore();

};