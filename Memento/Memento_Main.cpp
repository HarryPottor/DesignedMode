#include "Caretaker.h"
#include "Memento.h"
#include "Role.h"
#include <iostream>
using namespace std;

int main()
{
	CRole *role = new CRole();
	role->state = 100;
	role->Show();
	CCaretaker* caretaker = new CCaretaker();
	caretaker->SetMemento(role->CreateMemento());
	role->state = 89;
	role->Show();

	role->Revert(caretaker->GetMemento());
	role->Show();

	for (int i = 0; i < 500000000; i++)
	{
		caretaker->SetMemento(role->CreateMemento());
	}

	system("pause");
	return 0;
}