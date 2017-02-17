#include "IFactor.h"
#include "YellowFactor.h"
#include "WhiteFactory.h"


void CreateYellow();
void CreateWhite();


int main()
{
	CreateYellow();
	CreateWhite();
	system("pause");
	return 0;
}

void CreateYellow()
{
	IFactor * factory = new CYellowFactor();
	factory->CreateHumen()->Cry();
	delete factory;
}


void CreateWhite()
{
	IFactor * factory = new CWhiteFactor();
	factory->CreateHumen()->Cry();
	delete factory;
}

