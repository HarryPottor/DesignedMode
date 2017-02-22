#include "UserInfo.h"
#include <iostream>
using namespace std;

int main()
{

	IUserInfo * userInfo = new CNewUserInfo;
	IUserBO* userBO = (IUserBO*)userInfo;
	userBO->SetUserName("Lily");
	cout << userInfo->GetUserName().c_str() << endl;
	IUserBiz* userBiz = (IUserBiz*)userInfo;
	userBiz->ChangeName("Lucy");

	cout << userInfo->GetUserName().c_str() << endl;

	system("pause");
	return 0;
}