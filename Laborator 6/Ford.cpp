#include "Ford.h"
#include "Car.h"

Ford::Ford() {
	this->fuel_capacity = 5;
	this->fuel_consumption = 7;
	this->avg_speed_RAIN = 23;
	this->avg_speed_SUNNY = 67;
	this->avg_speed_SNOW = 34;
	this->name = "Ford";
}
int Ford::Getfuel_consumption() {
	return this->fuel_consumption;
}
int Ford::Getfuel_capacity() {
	return this->fuel_capacity;
}
int Ford::Getavg_speed_RAIN() {
	return this->avg_speed_RAIN;
}
int Ford::Getavg_speed_SUNNY() {
	return this->avg_speed_SUNNY;
}
int Ford::Getavg_speed_SNOW() {
	return this->avg_speed_SNOW;
}
