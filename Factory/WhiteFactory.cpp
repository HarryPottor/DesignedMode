#include "WhiteFactory.h"

CWhiteFactor::CWhiteFactor()
{
}

CWhiteFactor::~CWhiteFactor()
{
}



IHumen * CWhiteFactor::CreateHumen()
{
	return new CWhiteHumen;
}
