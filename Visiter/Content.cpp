#include "Content.h"

void CContent::AddPerson(IPerson * person)
{
	vPerson.push_back(person);
}

void CContent::ShowPerson(IVisiter * visiter)
{
	for each (IPerson* var in vPerson)
	{
		var->ShowResult(visiter);
	}
}
