//�û��� ҵ�����
#pragma once
#include <iostream>
using std::string;
class IUserBO
{
public:
	IUserBO() {}
	virtual ~IUserBO() {}

	void SetUserID(string userID);
	string GetUserID();
	void SetUserName(string name);
	string GetUserName();

private:
	string m_sUserID;
	string m_sName;
};
