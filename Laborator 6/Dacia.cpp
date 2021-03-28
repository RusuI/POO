
#include "Car.h"
#include "Dacia.h"

Dacia::Dacia() {
	this->fuel_capacity = 59;
	this->fuel_consumption = 6;
	this->avg_speed_RAIN = 55;
	this->avg_speed_SUNNY = 66;
	this->avg_speed_SNOW = 78;
	this->name = "Dacia";

}

int Dacia::Getfuel_consumption() {
	return this->fuel_consumption;
}
int Dacia::Getfuel_capacity() {
	return this->fuel_capacity;
}
int Dacia::Getavg_speed_RAIN() {
	return this->avg_speed_RAIN;
}
int Dacia::Getavg_speed_SUNNY() {
	return this->avg_speed_SUNNY;
}
int Dacia::Getavg_speed_SNOW() {
	return this->avg_speed_SNOW;
}
