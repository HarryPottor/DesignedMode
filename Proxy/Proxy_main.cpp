#include "Proxy.h"
#include "StuA.h"
#include "StuB.h"

int main()
{
	Proxy * proxy = new Proxy(new StuA);
	proxy->LookFor();
	proxy->GiveMoney();
	delete proxy;

	proxy = new Proxy(new StuB);
	proxy->LookFor();
	proxy->GiveMoney();
	delete proxy;

	_CrtDumpMemoryLeaks();

	system("pause");
	return 0;
}