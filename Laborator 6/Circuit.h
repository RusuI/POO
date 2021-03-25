#pragma once
#include "Car.h"
#include "Weather.h"
class Circuit {
public :
	int currentIndex;
	int maxIndex;
	Car** car;
	Weather 


	Circuit();
	bool AddCar(Car* car);


	 void SetWeather();
	 void ShowFinalRanks();
	 void ShowWhoDidNotFinis();
	 
};