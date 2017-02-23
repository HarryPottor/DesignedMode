#pragma once
#include "Manager.h"

class CBossB :public IManager
{
public:
	CBossB();
	~CBossB();
	void SetSuccessor(IManager* manager);
	void HandleRequrest(CRequrest*);


};

