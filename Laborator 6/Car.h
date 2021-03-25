#pragma once
class Car {
protected:
	int fuel_consumption;
	int fuel_capacity;
	int avg_speed_RAIN;
	int avg_speed_SUNNY;
	int avg_speed_SNOW;
	const char* name;
	

	Car();
	~Car();

	virtual int Getfuel_consuption()=0;
	virtual int Getfuel_capacity()=0;
	virtual int Getavg_speed_RAIN()=0;
	virtual int Getavg_speed_SNOW() = 0;
	virtual int Getavg_speed_SUNNY() = 0;
	
};