#pragma once
#include "Visiter.h"
class IPerson
{
public:
	virtual void ShowResult(IVisiter* visiter) = 0;

};