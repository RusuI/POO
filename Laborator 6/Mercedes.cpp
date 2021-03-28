#include "Mercedes.h"
#include "Car.h"

Mercedes::Mercedes() {

	this->fuel_capacity = 67;
	this->fuel_consumption = 10;
	this->avg_speed_RAIN = 34;
	this->avg_speed_SUNNY = 67;
	this->avg_speed_SNOW = 40;
	this->name = "Mercedes";
}

int Mercedes::Getfuel_consumption() {
	return this->fuel_consumption;
}
int Mercedes::Getfuel_capacity() {
	return this->fuel_capacity;
}
int Mercedes::Getavg_speed_RAIN() {
	return this->avg_speed_RAIN;
}
int Mercedes::Getavg_speed_SUNNY() {
	return this->avg_speed_SUNNY;
}
int Mercedes::Getavg_speed_SNOW() {
	return this->avg_speed_SNOW;
}

