#include <iostream>
#include <string.h>
#include "Student.h"
#include "functions.h"

void Student::Set_name(char *name) {
	this->name = name;

}
char * Student::Get_name() {
	return this->name;
}
void Student::Set_mathematics(float grade) {
	if (grade >= 1.0 and grade <= 10.0)
	{
		this->mathematics = grade;
	}
	else
	{
		printf("%s", "Invalid value");

	}

}
float Student::Get_mathematics() {
	return this->mathematics;
}
void Student::Set_english(float grade) {
	if (grade >= 1.0 and grade <= 10.0)
	{
		this->english = grade;
	}
	else
	{
		printf("%s", "Invalid value");

	}

}
float Student::Get_english() {
	return this->english;
}
void Student::Set_history(float grade) {
	if (grade >= 1.0 and grade <= 10.0)
	{
		this->history = grade;
	}
	else
	{
		printf("%s", "Invalid value");

	}

}
float Student::Get_history() {
	return this->history;
}

int Student::Avg(){
	return int((this->history + this->mathematics + this->english) / 3);
}
