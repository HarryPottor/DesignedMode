#include "Emperor.h"

void DoIt()
{
	CEmperor * pEmperor1 = CEmperor::GetInstance();
	pEmperor1->SetEmperorTag("3");
	pEmperor1->EmperorInfo();

	CEmperor * pEmperor2 = CEmperor::GetInstance();
	pEmperor2->EmperorInfo();

	CEmperor * pEmperor3 = CEmperor::GetInstance();
	pEmperor3->EmperorInfo();

	CEmperor * pEmperor4 = CEmperor::GetInstance();
	pEmperor4->EmperorInfo();

	
	//CEmperor * pEmperor5 = NULL;
	CEmperor * pEmperor5 = pEmperor4;
	pEmperor5->EmperorInfo();
	
	//CEmperor::ReleaseInstance();
}

int main()
{
	DoIt();
	system("pause");
	return 0;
}