#pragma once
#include "CarModel.h"

class CBenzModel:public CCarModel
{
public:
	CBenzModel();
	~CBenzModel();

protected:
	void Start();
	void Stop();
	void Alarm();
	void EngineBoom();

};
