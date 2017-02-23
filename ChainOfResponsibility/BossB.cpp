#include "BossB.h"
#include "Requrest.h"
#include <iostream>
using namespace std;
CBossB::CBossB()
{
}

CBossB::~CBossB()
{
}

void CBossB::SetSuccessor(IManager * manager)
{
	m_pSuccessor = manager;
}

void CBossB::HandleRequrest(CRequrest * request)
{

	if (request->GetLevel() >= 3)
	{
		cout << "Boss B handle this requrest:" << request->GetName().c_str() << endl;
	}
	else
	{
		m_pSuccessor->HandleRequrest(request);
	}
}
