#pragma once
#include "Visiter.h"
#include <iostream>
using namespace std;
class CLove :public IVisiter
{
public:
	void GetMenResult();
	void GetWomenResult();
};