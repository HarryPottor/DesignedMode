
#include "MyContex.h"
#include "OpenningState.h"
#include "CloseingState.h"
#include "RunningState.h"
#include "StoppingState.h"
#include <iostream>
using std::cout;
using std::endl;


void DoNew()
{
	//LiftState.h, LiftState.cpp, OpenningState.h, CloseingState.h, RunningState.h, StoppingState.h
	//Context.h, Context.cpp
	CMyContext context;
	CCloseingState closeingState;
	context.SetLiftState(&closeingState);
	context.Close();
	context.Open();
	context.Close();
	context.Run();
	context.Stop();

}

int main()
{
	cout << "----------使用模式之后----------" << endl;
	DoNew();

	system("pause");
	return 0;
}