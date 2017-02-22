#include <iostream>
#include "Context.h"
#include "State.h"
using namespace std;

int main()
{
	State *st = new StateA();

	Context * con = new Context(st);
	for (int i = 0; i < 500000; i++)
	{
		con->ContextInterface();
	}
	
	
	con->ContextInterface();

	if (con != NULL)
	{
		delete con;
	}

	if (st !=NULL)
	{
		st = NULL;
	}
	system("pause");
	return 0;
}