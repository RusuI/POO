#pragma once
#include "Car.h"
#include "Weather.h"
class Circuit {
public:
	int currentIndex;
	int maxIndex;
	Car** car;
	const char* finish[10];
	const char* notfinish[10];
	int fin=0, notfin=0;
	int weather;
	int length;





	Circuit();
	bool AddCar(Car* car);

	void SetLength(int length);
	void Race();
	void ShowFinalRanks();
	void ShowWhoDidNotFinis();
	void SetWeather(int weather);

};