#pragma once
#include "Person.h"
#include "Visiter.h"
#include <vector>
using namespace std;
class CContent
{
public:
	void AddPerson(IPerson *person);
	void ShowPerson(IVisiter * visiter);

private:

	vector<IPerson*> vPerson;

};
