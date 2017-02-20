#include "SortDecorator.h"

CSortDecorator::CSortDecorator(ISchoolReport * psr):CReportDecorator(psr)
{
}

CSortDecorator::~CSortDecorator()
{
}

void CSortDecorator::Report()
{
	CReportDecorator::Report();
	ReportSort();
}

void CSortDecorator::ReportSort()
{
	cout << "����������38��..." << endl;
}
