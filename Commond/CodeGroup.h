#pragma once
#include "IGroup.h"

class CCodeGroup :public IGroup
{
public:
	CCodeGroup(void);
	~CCodeGroup(void);
	void Find();
	void Add();
	void Delete();
	void Change();
	void Plan();

};
