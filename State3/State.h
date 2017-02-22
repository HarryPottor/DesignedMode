#pragma once

#include <iostream>
using namespace std;
class Context;

class State
{
public:
	State();
	virtual ~State();
	virtual void  OInterface(Context*) = 0;
	virtual void OChange(Context*) = 0;
protected:
	bool ChangeState(Context*, State * st);

private:

};

class StateA:public State
{
public:
	StateA();
	virtual ~StateA();
	virtual void OInterface(Context*);
	virtual void OChange(Context*);
private:

};


class StateB :public State
{
public:
	StateB();
	virtual ~StateB();
	virtual void OInterface(Context*);
	virtual void OChange(Context*);
private:

};
