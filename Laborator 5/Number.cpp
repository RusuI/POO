#include <iostream>
#include <string>
#include <string.h>
#include "Number.h"

Number::Number(const char* value, int base) {
	if (base > 12 || base < 2) {
		printf("Base not between 2 and 16.");
		this->base = -1;
		}

	else
	this->base = base;
	this->value = value;
}

Number::~Number() {
	delete value;
	value = nullptr;
	this->base = 0;

}

Number::Number(Number& number) {
	this->value = number.value;
	this->base = number.base;
}
Number::Number(Number&& number) {
	this->value = number.value;
	this->base = number.base;
	number.value = nullptr;
	number.base = 0;

}


int Number::GetBase() {
	return this->base;
}
int Number::GetDigitsCount() {
	return strlen(value);

}
int Base_10(const char* value, int base) {
	int result = 0, P = 1;
	for (int i = strlen(value) - 1; i >= 0; --i)
	{
		int digit;
		    if (value[i] == 'A') 
			    digit = 10;
		else 
			if (value[i] == 'B') 
			    digit = 11;
		else
			if (value[i] == 'C') 
			    digit = 12;
		else 
			if (value[i] == 'D')
				digit = 13;
		else 
			if (value[i] == 'E') 
				digit = 14;
		else
			if (value[i] == 'F') 
				digit = 15;
		else
	    digit = value[i] - '0';
		result = result + digit * P;
		P = P * base;
	}
	return result;
}

void Number::SwitchBase(int newBase)
{
	int number = Base_10(this->value, this->base);
	int x = 0, k = 0;
	char* new_value;
	new_value = (char*)malloc(sizeof(char) * 25);
	while (number)
	{
		int c = number % newBase;
		number = number / newBase;
		char d;
		if (c == 10) 
			d = 'A';
		else
		if (c == 11)
			d = 'B';
		else
		if (c == 12) 
			d = 'C';
		else 
		if (c == 13) 
			d = 'D';
		else
		if (c == 14)
			d = 'E';
		else
		if (c == 15)
			d = 'F';
		else 
			d = c + '0';
		new_value[k++] = d;
	}
	new_value[k] = '\0';
	for (int i = 0; i <= (k - 1) / 2; i++)
	{
		int aux = new_value[i];
		new_value[i] = new_value[k - 1 - i];
		new_value[k - 1 - i] = aux;
	}
	this->value= new_value;
	this->base = newBase;
}

void Number::Print()
{
	printf("%s\n", this->value);
}

