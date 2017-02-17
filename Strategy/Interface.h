#pragma once
#include <iostream>
using namespace std;
class Interface
{
public:
	Interface();
	virtual ~Interface();
	virtual void DoWork() = 0;
private:

};
