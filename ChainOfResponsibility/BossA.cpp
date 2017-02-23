#include "BossA.h"
#include "Requrest.h"
#include <iostream>
using namespace std;
CBossA::CBossA()
{
}

CBossA::~CBossA()
{
}

void CBossA::SetSuccessor(IManager * manager)
{
	m_pSuccessor = manager;
}

void CBossA::HandleRequrest(CRequrest * request)
{

	if (request->GetLevel() < 3)
	{
		cout << "Boss A handle this requrest:" << request->GetName().c_str() << endl;
	}
	else
	{
		cout << "Boss A Can't handle, give the request to successor" << endl;
		m_pSuccessor->HandleRequrest(request);
	}
}
