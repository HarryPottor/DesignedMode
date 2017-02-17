#pragma once
#include <iostream>
using namespace std;
class Interface_Proxy
{
public:
	Interface_Proxy();
	virtual ~Interface_Proxy();
	virtual void LookFor() = 0;
	virtual void GiveMoney() = 0;
private:

};
