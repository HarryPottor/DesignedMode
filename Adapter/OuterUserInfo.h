//OuterUserInfo.h//由IUserInfo接口派生的实体类，并引入外部系统实体的实例
#pragma once
#include "IUserInfo.h"
#include "OuterUser.h"

#include <iostream>

using namespace std;

class COuterUserInfo :
	public IUserInfo
{
public:
	COuterUserInfo(void);
	~COuterUserInfo(void);
	string GetUserName();
	string GetHomeAddress();
	string GetMobileNumber();
	string GetOfficeTelNumber();
	string GetJobPosition();
	string GetHomeTelNumber();
private:
	COuterUser *m_pOuterUser;
};