#include "YellowFactor.h"

CYellowFactor::CYellowFactor()
{
}

CYellowFactor::~CYellowFactor()
{
}

IHumen * CYellowFactor::CreateHumen()
{

	return new CYellowHumen;
}
