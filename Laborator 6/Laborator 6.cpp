#include "Car.h"
#include "Circuit.h"
#include "Dacia.h"
#include "Ford.h"
#include "Mazda.h"
#include "Toyota.h"
#include "Mercedes.h"
#include <iostream>
int main()

{

	Circuit c;
	c.SetLength(100);

	c.SetWeather(Weather::RAIN);

	c.AddCar(new Dacia());

	c.AddCar(new Toyota());

	c.AddCar(new Mercedes());

	c.AddCar(new Ford());

	c.AddCar(new Mazda());

	c.Race();

	c.ShowFinalRanks(); // it will print the time each car needed to finish the circuit sorted from the fastest car to the   slowest.

	c.ShowWhoDidNotFinis(); // it is possible that some cars don't have enough fuel to finish the circuit

	return 0;

}