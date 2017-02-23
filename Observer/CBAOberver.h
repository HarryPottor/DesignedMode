#pragma once
#include "Observer.h"
#include "Subject.h"
#include <iostream>
using namespace std;
class CBAOberver :public IObserver
{
public:
	CBAOberver(ISubject*);
	~CBAOberver();
	void Update();




};
