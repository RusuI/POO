#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include "Header.h"

using namespace std;

bool compare(int a, int b) {
	if (a < b) return 1;
	else return 0;
}

bool equal(int a, int b) {
	if (a == b) return 1;
	else return 0;
}

float operator"" _Kelvin(unsigned long long int x)
{

    return (float)(x - 273.15);
}

float operator"" _Fahrenheit(unsigned long long int x) {
    return((x -32 )/1.8);
}

int main() {

  
    float a = 300_Kelvin;

    float b = 120_Fahrenheit;

    cout << a << " " << b<<endl;

    



	Vector<int> s1;
	s1.push(2);
	s1.push(5);
	s1.push(1);
	s1.push(28);
	s1.push(23);
	
	s1.print();
	
	s1.insert(14, 1);
	s1.print();
	
	s1.sort(*compare);
	printf("Array sorted in ascending order ");
	s1.print();
	printf("\n\n");
	s1.insert(15, 1);
	printf("Object at fifth index ");
	printf("%d \n\n", s1.get(5));
	s1.print();
	printf("Number of elements in the array: ");
	printf("%d \n\n", s1.count());
	s1.push(30);
	printf("First index of 28 ");
	printf("%i\n",s1.firstIndexOf(nullptr,28));


	printf("Array ");
	s1.print();

	printf("\n\n");

	printf("Set at index 7 number 9 \n");
	s1.set(9, 7);
	printf("Array ");
	s1.print();

	printf("\n\n");

	printf("Remove element at index 3 \n");
	s1.remove(3);
	printf("Array ");
	s1.print();

	s1.push(10);
	s1.push(54);
	s1.push(32);
	s1.sort(nullptr);
	printf("\n\n");
	printf("Array sorted in ascending order ");
	s1.print();

	printf("\n\n Take out ");
	printf("%d  ", s1.pop());

	printf("\n\n");
	printf("Array ");
	s1.print();


	printf("First index of 5:");
	 printf("%i",s1.firstIndexOf(nullptr,5));
}