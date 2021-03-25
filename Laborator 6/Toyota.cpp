#include "Toyota.h"
#include "Car.h"

Toyota::Toyota() {
	this->fuel_capacity = 9;
	this->fuel_consumption = 6;
	this->avg_speed_RAIN = 34;
	this->avg_speed_SUNNY = 56;
	this->avg_speed_SNOW = 34;
	this->name = "Toyota";
}

int Toyota::Getfuel_consumption() {
	return this->fuel_consumption;
}
int Toyota::Getfuel_capacity() {
	return this->fuel_capacity;
}
int Toyota::Getavg_speed_RAIN() {
	return this->avg_speed_RAIN;
}
int Toyota::Getavg_speed_SUNNY() {
	return this->avg_speed_SUNNY;
}
int Toyota::Getavg_speed_SNOW() {
	return this->avg_speed_SNOW;
}
