// Lab3_Ex2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Canvas.h"
int main()
{
	Canvas canvas(40,40);

	canvas.DrawRect(4, 4, 15, 15, '*');
	canvas.Print();
	canvas.Clear();
	canvas.FillRect(4, 4, 15, 15, '#');
	canvas.Print();
	canvas.Clear();
	canvas.DrawLine(3, 4, 15, 16,'$');
	canvas.Print();
	canvas.Clear();
	canvas.DrawCircle(15, 15, 9, '*');
    canvas.Print();
	canvas.Clear();
	canvas.FillCircle(15, 15, 9, '*');
	canvas.Print();


}


