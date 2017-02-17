//OuterUserInfo.h//��IUserInfo�ӿ�������ʵ���࣬�������ⲿϵͳʵ���ʵ��
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