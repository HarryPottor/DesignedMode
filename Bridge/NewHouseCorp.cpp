#include "NewHouseCorp.h"
#include <iostream>
using std::cout;
using std::endl;
CNewHouseCorp::CNewHouseCorp(CHouse * pHouse):CNewCorp(pHouse)
{
}

CNewHouseCorp::~CNewHouseCorp()
{
}

void CNewHouseCorp::MakeMoney()
{
	this->CNewCorp::MakeMoney();
	cout << "���ز���˾׬��Ǯ�ˡ�����" << endl;
}
