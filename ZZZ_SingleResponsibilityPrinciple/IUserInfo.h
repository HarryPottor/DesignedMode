#pragma once

#include <iostream>
#include "IUserBO.h"
#include "IUserBiz.h"

using std::string;

class IUserInfo:public IUserBO, IUserBiz
{
public:
	IUserInfo() {}
	virtual ~IUserInfo() {}

private:

};
