#include "HighScoreDecorator.h"

CHighScoreDecorator::CHighScoreDecorator(ISchoolReport * psr):CReportDecorator(psr)
{
}

CHighScoreDecorator::~CHighScoreDecorator()
{
}

void CHighScoreDecorator::Report()
{
	ReportHighScore();
	CReportDecorator::Report();
}

void CHighScoreDecorator::ReportHighScore()
{
	cout << "这次考试语文最高是75， 数学是78， 自然是80" << endl;
}
