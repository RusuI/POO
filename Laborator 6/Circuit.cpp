#include "Car.h"
#include "Circuit.h"
#include "Weather.h"
#include <iostream>


Circuit::Circuit() {

	this->currentIndex = 0;
	this->maxIndex = 10;
	this->car = (Car**)(malloc(this->maxIndex * sizeof(Car*)));
}
bool Circuit::AddCar(Car* car) {
	if (this->currentIndex < this->maxIndex)
	{
		this->car[this->currentIndex++] = car;
		return true;
	}
	return false;
}

void ShowFinalRanks() {

}
void ShowWhoDidNotFinis() {

}
