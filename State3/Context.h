#pragma once

class State;
class Context
{
public:
	Context();
	Context(State* state);
	~Context();

	void ContextInterface();
	void ContextChangeState();

private:
	friend class State;
	bool ChangeState(State* state);
private:
	State* m_state;

};