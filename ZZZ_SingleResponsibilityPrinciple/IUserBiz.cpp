#include "IUserBiz.h"

IUserBiz::IUserBiz()
{
	m_pUserObject = new IUserBO;
}

IUserBiz::~IUserBiz()
{
	delete m_pUserObject;
}

bool IUserBiz::ChangeName(string name)
{
	m_pUserObject->SetUserName(name);
	return true;
}

bool IUserBiz::DeleteUser()
{
	return true;
}
