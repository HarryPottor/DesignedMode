#include "OuterUser.h"

COuterUser::COuterUser(void)
{
}

COuterUser::~COuterUser(void)
{
}

COuterUserBaseInfo * COuterUser::GetUserBaseInfo()
{
	return new COuterUserBaseInfo();
}

COuterUserHomeInfo * COuterUser::GetUserHomeInfo()
{
	return new COuterUserHomeInfo();
}

COuterUserOfficeInfo * COuterUser::GetUserOfficeInfo()
{
	return new COuterUserOfficeInfo(); 
}
