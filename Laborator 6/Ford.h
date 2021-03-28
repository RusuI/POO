#pragma once
#include "Car.h"
class Ford : public virtual Car {
public:

	Ford();

	int Getfuel_consumption();
	int Getfuel_capacity();
	int Getavg_speed_RAIN();
	int Getavg_speed_SNOW();
	int Getavg_speed_SUNNY();
};