#include "CarModel.h"
#include "Car1.h"
#include "Car2.h"

int main()
{
	CarModel * cm = new Car1;
	cm->CarRun();
	delete cm;

	CarModel * cm2 = new Car2;
	cm2->CarRun();
	delete cm2;


	system("pause");
	return 0;
}