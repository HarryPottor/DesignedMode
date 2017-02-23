#include "Boss.h"
#include "CBAOberver.h"
#include "NBAObserver.h"
#include "Observer.h"
#include "Subject.h"

#include <iostream>
using namespace std;

int main()
{
	ISubject *subject = new CBoss();
	NBAOberver * nba1 = new NBAOberver(subject);
	NBAOberver* nba2 = new NBAOberver(subject);
	CBAOberver * cba1 = new CBAOberver(subject);

	subject->AddObserver(nba1);
	subject->AddObserver(nba2);
	subject->AddObserver(cba1);

	subject->SetState(" Boss is comming!");
	subject->Notify();


	delete subject;
	delete nba1;
	delete nba2;
	delete cba1;

	system("pause");
	return 0;
}