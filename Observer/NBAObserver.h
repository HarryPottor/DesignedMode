#pragma once
#include "Observer.h"
#include "Subject.h"
#include <iostream>
using namespace std;
class NBAOberver :public IObserver
{
public:
	NBAOberver(ISubject*);
	~NBAOberver();
	void Update();




};

