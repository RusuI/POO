#pragma once
#include "Car.h"
class Mazda : public Car {

	Mazda();

	int Getfuel_consumption();
	int Getfuel_capacity();
	int Getavg_speed_RAIN();
	int Getavg_speed_SNOW();
	int Getavg_speed_SUNNY();
};
