#include "Mazda.h"
#include "Car.h"

Mazda::Mazda() {
	this->fuel_capacity = 6;
	this->fuel_consumption = 3;
	this->avg_speed_RAIN = 34;
	this->avg_speed_SUNNY = 67;
	this->avg_speed_SNOW = 34;
	this->name = "Mazda";
}

int Mazda::Getfuel_consumption() {
	return this->fuel_consumption;
}
int Mazda::Getfuel_capacity() {
	return this->fuel_capacity;
}
int Mazda::Getavg_speed_RAIN() {
	return this->avg_speed_RAIN;
}
int Mazda::Getavg_speed_SUNNY() {
	return this->avg_speed_SUNNY;
}
int Mazda::Getavg_speed_SNOW() {
	return this->avg_speed_SNOW;
}
