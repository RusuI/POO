#include "Car.h"
#include "Circuit.h"
#include "Weather.h"
#include <iostream>


Circuit::Circuit() {

	this->currentIndex = 0;
	this->maxIndex = 10;
	this->car = (Car**)(malloc(this->maxIndex * sizeof(Car*)));

	this->length = 0;
}
bool Circuit::AddCar(Car* car) {
	if (this->currentIndex < this->maxIndex)
	{
		this->car[this->currentIndex++] = car;
		return true;
	}
	return false;
}

void Circuit::SetLength(int length) {
	this->length = length;
}

void Circuit::Race() {
	for (int i = 0; i < this->currentIndex; i++) {
		Car* tmp = this->car[i];
		if(tmp->fuel_consumption * tmp->fuel_capacity >= this->length)
		{
			this->finish[this->fin] = tmp->name;
			this->fin++;
		}
		else {
			this->notfinish[this->notfin] = tmp->name;
			this->notfin++;
		}
	}

}


void Circuit::ShowFinalRanks() {

	for (int i = 0; i < this->fin; i++) {
		if (this->weather == 0) {
			printf("%s will finish in ", this->finish[i]);
			int avgSpeed = 0;
			for (int j = 0; j < this->currentIndex; j++)
			{
				Car* tmp = this->car[j];
				
				if (strcmp(tmp->name, finish[i]) == 0)
				{
					avgSpeed = tmp->avg_speed_RAIN;
			
				}
			}
			printf("%d Hours\n", (this->length / avgSpeed));
		}
		else if (this->weather == 1) {
			printf("%s will finish in ", this->finish[i]);
			int avgSpeed;
			for (int j = 0; j <= this->currentIndex; j++)
			{
				Car* tmp = this->car[j];
				if (strcmp(tmp->name, finish[i]) == 0)
				{
					avgSpeed = tmp->avg_speed_SUNNY;
				}
			}
			printf("%d Hours\n", (this->length / avgSpeed));
		}
		else if (this->weather == 2) {
			printf("%s will finish in ", this->finish[i]);
			int avgSpeed;
			for (int j = 0; j <= this->currentIndex; j++)
			{
				Car* tmp = this->car[j];
				if (strcmp(tmp->name, finish[i])==0)
				{
					avgSpeed = tmp->avg_speed_SNOW;
				
				}
			}
			printf("%d Hours\n", (this->length / avgSpeed));
		}
	}

}
void Circuit::ShowWhoDidNotFinis() {
	if (this->notfin== 0) {
		printf("Every car finished the race");
	}
	else {
		for (int i = 0; i < this->notfin; i++) {
			printf("%s did not finish the race \n", this->notfinish[i]);
		}
	}

}
void Circuit::SetWeather(int weat) {
	this->weather = weat;
}
