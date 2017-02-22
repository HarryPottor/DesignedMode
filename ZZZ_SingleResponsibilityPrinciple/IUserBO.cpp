#include "IUserBO.h"

void IUserBO::SetUserID(string userID)
{
	m_sUserID = userID;
}

string IUserBO::GetUserID()
{
	return m_sUserID;
}

void IUserBO::SetUserName(string name)
{
	m_sName = name;
}

string IUserBO::GetUserName()
{
	return m_sName;
}
