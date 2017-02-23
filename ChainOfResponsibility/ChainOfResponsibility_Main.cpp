#include "BossA.h"
#include "Requrest.h"
#include "BossB.h"
#include "Manager.h"

int main()
{
	CBossA * bossA = new CBossA();
	CBossB * bossB = new CBossB();
	bossA->SetSuccessor(bossB);

	CRequrest * request = new CRequrest();
	request->SetLevel(2);
	request->SetName("Çë¼Ù");
	bossA->HandleRequrest(request);

	request->SetLevel(5);
	request->SetName("ÉýÖµ");
	bossA->HandleRequrest(request);
	delete request;

	delete bossA;
	delete bossB;

	system("pause");
	return 0;
}
