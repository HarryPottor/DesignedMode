#pragma once
#include "IUserInfo.h"

class CUserInfo : public IUserInfo
{
public:
	CUserInfo();
	~CUserInfo();
	string GetUserName();
	string GetHomeAddress();
	string GetMobileNumber();
	string GetOfficeTelNumber();
	string GetJobPosition();
	string GetHomeTelNumber();
private:

};
