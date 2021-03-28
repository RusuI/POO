#pragma once
#include "Car.h"
class Mercedes : virtual public Car {
public:
	Mercedes();

	int Getfuel_consumption();
	int Getfuel_capacity();
	int Getavg_speed_RAIN();
	int Getavg_speed_SNOW();
	int Getavg_speed_SUNNY();

};

