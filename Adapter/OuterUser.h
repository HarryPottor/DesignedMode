#pragma once
#include "IOuterUser.h"

class COuterUser:public IOuterUser
{
public:
	COuterUser(void);
	~COuterUser(void);
	COuterUserBaseInfo * GetUserBaseInfo();
	COuterUserHomeInfo * GetUserHomeInfo();
	COuterUserOfficeInfo * GetUserOfficeInfo();
};