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
	cout << "��ο������������75�� ��ѧ��78�� ��Ȼ��80" << endl;
}
