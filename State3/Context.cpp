#include "Context.h"
#include "State.h"
Context::Context()
{
}

Context::Context(State * state)
{
	m_state = state;
}

Context::~Context()
{
	delete m_state;
}

void Context::ContextInterface()
{
	m_state->OInterface(this);
}

void Context::ContextChangeState()
{
	m_state->OChange(this);
}

bool Context::ChangeState(State * state)
{
	if (m_state != NULL)
	{
		delete m_state;
	}
	m_state = state;

	return true;
}


