#pragma once
#include <iostream>
using namespace std;

class IUserInfo
{
public:
	IUserInfo()
	{
	}

	virtual ~IUserInfo()
	{
	}
	virtual string GetUserName() = 0;
	virtual string GetHomeAddress() = 0;
	virtual string GetMobileNumber() = 0;
	virtual string GetOfficeTelNumber() = 0;
	virtual string GetJobPosition() = 0;
	virtual string GetHomeTelNumber() = 0;
private:

};