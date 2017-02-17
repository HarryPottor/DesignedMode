#pragma once
#include "Interface.h"
class StuB :public Interface_Proxy
{
public:
	StuB();
	~StuB();
	void LookFor();
	void GiveMoney();

private:

};
