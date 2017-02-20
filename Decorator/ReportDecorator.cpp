#include "ReportDecorator.h"

CReportDecorator::CReportDecorator(ISchoolReport * psr)
{
	m_pSchoolReport = psr;
}

CReportDecorator::~CReportDecorator()
{

}

void CReportDecorator::Report()
{
	m_pSchoolReport->Report();
}

void CReportDecorator::Sign(string name)
{
	m_pSchoolReport->Sign(name);
}
