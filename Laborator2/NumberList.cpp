 #include <iostream>
 #include <stdio.h>
 #include <algorithm>
 #include "NumberList.h"
using namespace std;

void NumberList::Init() {

	this->count=0;
}
bool NumberList::Add(int x) {
	if (this->count >= 10)
	{
		return false;
	}
	
	this->numbers[this->count] = x;
	this->count++;
	
}

void NumberList::Sort() {

	sort(this->numbers,this->numbers + this->count);
}

void NumberList::Print() {
	for (int i = 0; i < this->count; i++)
	{
		printf("%i ", this->numbers[i]);
	}
}
