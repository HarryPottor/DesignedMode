#include "Content.h"
#include "Add.h"
#include "Sub.h"
#include "Mul.h"

int main()
{
	Content * con1 = new Content(new Add);
	con1->DoWork();
	delete con1;

	con1 = new Content(new Sub);
	con1->DoWork();
	delete con1;

	con1 = new Content(new Mul);
	con1->DoWork();
	delete con1;

	system("pause");
	return 0;
}