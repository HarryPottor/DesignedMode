#pragma once
#include <iostream>
using namespace std;

class ISchoolReport
{
public:
	ISchoolReport() {}
	virtual ~ISchoolReport() {}

	virtual void Report() = 0;
	virtual void Sign(string name) = 0;
};

