#include "Clothes.h"
#include "House.h"
#include "IPod.h"
#include "NewHouseCorp.h"
#include "ShanZhaiCorp.h"
#include <iostream>

using namespace std;

int main()
{
	CHouse house;
	CNewHouseCorp newHouseCorp(&house);
	newHouseCorp.MakeMoney();
	cout << endl;

	CClothes clothes;
	CShanZhaiCorp shanzhaiCorp(&clothes);
	shanzhaiCorp.MakeMoney();
	cout << endl;




	system("pause");
	return 0;
}