#pragma once
class Number

{
	int base;
	const char* value;

	// add data members

public:

	Number(const char* value, int base); // where base is between 2 and 16

	~Number();

	Number( Number& number); //copy constructor
	Number( Number&& number); //move constructor
	// add operators and copy/move constructor
	Number operator+(Number number);
	Number operator+(int nr);
	Number operator-(Number number);
	Number operator-(int nr);



	void SwitchBase(int newBase);

	void Print();

	int  GetDigitsCount(); // returns the number of digits for the current number

	int  GetBase(); // returns the current base

}