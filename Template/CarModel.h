#pragma once
#include <iostream>
using namespace std;

class CarModel
{
public:
	CarModel();
	virtual ~CarModel();
	void CarRun();
	virtual void Start() = 0;
	virtual bool Alarm() = 0;
	virtual void Beam() = 0;
	virtual void Stop() = 0;
private:

};
