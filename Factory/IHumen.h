#pragma once
#include <iostream>
using namespace std;
class IHumen
{
public:
	IHumen();
	virtual ~IHumen();
	virtual void Cry() = 0;
private:

};
