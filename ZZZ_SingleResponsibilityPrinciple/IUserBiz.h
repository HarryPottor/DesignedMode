//�û���ҵ���߼�
#pragma once
#include <iostream>
#include "IUserBO.h"
using std::string;

class IUserBiz
{
public:
	IUserBiz();
	virtual ~IUserBiz();

	bool ChangeName(string name);
	bool DeleteUser();
private:
	IUserBO * m_pUserObject;
};
