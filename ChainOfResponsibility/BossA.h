#pragma once
#include "Manager.h"

class CBossA :public IManager
{
public:
	CBossA();
	~CBossA();
	void SetSuccessor(IManager* manager);
	void HandleRequrest(CRequrest*);


};

