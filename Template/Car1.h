#pragma once
#include "CarModel.h"

class Car1:public CarModel
{
public:
	Car1();
	~Car1();
	void Start();
	bool Alarm();
	void Beam();
	void Stop();
private:

};