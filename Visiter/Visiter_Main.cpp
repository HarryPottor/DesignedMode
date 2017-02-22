
#include "Content.h"
#include "CMen.h"
#include "CWomen.h"
#include "Love.h"
#include "Person.h"
#include "Visiter.h"

#include <iostream>
using namespace std;
int main()
{
	
	CContent * content = new CContent();
	IPerson *men = new CMen();
	IPerson * women = new CWomen();
	content->AddPerson(men);
	content->AddPerson(women);

	IVisiter * love = new CLove();
	content->ShowPerson(love);

	delete content;
	delete men;
	delete women;
	delete love;
	
	system("pause");
	return 0;
}