#pragma once
#include "IGroup.h"

class CPageGroup :public IGroup
{
public:
	CPageGroup(void);
	~CPageGroup(void);
	void Find();
	void Add();
	void Delete();
	void Change();
	void Plan();

};