#include "CarModel.h"

CarModel::CarModel()
{
}

CarModel::~CarModel()
{
}

void CarModel::CarRun()
{
	Start();
	if (Alarm())
	{
		Beam();
	}

	Stop();
}
