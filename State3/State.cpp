#include "State.h"
#include "Context.h"
State::State()
{
}

State::~State()
{
}

bool State::ChangeState(Context * con, State * st)
{
	con->ChangeState(st);

	return true;
}

StateA::StateA()
{
}

StateA::~StateA()
{
}

void StateA::OInterface(Context * con)
{
	cout << "AAAAAAAAAAAAA" << endl;
	OChange(con);
}

void StateA::OChange(Context *con)
{
	ChangeState(con, new StateB());
}

StateB::StateB()
{
}

StateB::~StateB()
{
}

void StateB::OInterface(Context * con)
{
	cout << "BBBBBBBBBBBB" << endl;
	OChange(con);
}

void StateB::OChange(Context *con)
{
	ChangeState(con, new StateA());
}