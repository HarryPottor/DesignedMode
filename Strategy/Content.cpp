#include "Content.h"

Content::Content(Interface * objInterface)
{
	oper = objInterface;
}

Content::~Content()
{
	delete oper;
}

void Content::DoWork()
{
	oper->DoWork();
}
