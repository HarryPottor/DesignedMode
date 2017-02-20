#pragma once
#include "ISchoolReport.h"

class CFouthGradeSchoolReport:public ISchoolReport
{
public:
	CFouthGradeSchoolReport();
	~CFouthGradeSchoolReport();
	void Report();
	void Sign(string name);
};