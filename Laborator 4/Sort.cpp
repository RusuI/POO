#include <iostream>
#include "Sort.h"
#include <random>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

Sort::Sort(int count, int min, int max) {
	this->count = count;
	this->arr = new int[count];
	time_t t;
	srand((unsigned)time(&t));
	for (int i = 0; i < this->count; i++)
		this->arr[i] = min + rand() % ((max + 1) - min);
}
Sort::Sort(int *array, int count) {
	this->count = count;
	this->arr = array;
}
Sort::Sort(int count, ...) {
	this->count = count;
	this->arr = new int[count];
	va_list vl;
	va_start(vl, count);
	for (int i = 0; i < count; i++)
		this->arr[i] = va_arg(vl, int);
	va_end(vl);
}

Sort::Sort(const char* string) {
	int count = 0;
	for (int i = 0; i<strlen(string); i++)
		if (string[i] == ',')
			count++;
	count++;
	this->arr = new int[count];
	this->count = count++;
	int number = 0, i = 0;
	for (int j= 0; j<strlen(string); j++)
	{
		if (string[j] == ',')
		{
			this->arr[i++] = number;
			number = 0;
			continue;
		}
		number = number * 10 + (string[j] - '0');
	}
	this->arr[i++] = number;
}

Sort::Sort(): arr(new int[6]{ 1, 2, 3, 4, 5, 6 }) {
	this->count = 6;
}

void Sort::InsertSort(bool ascendent) {
	int key, j;
	for (int i = 0; i < this->count; i++) {

		key = this->arr[i];
		j = i;
		while (j > 0 && this->arr[j - 1] > key)
		{
			this->arr[j] = this->arr[j - 1];
			j--;
		}
		this->arr[j] = key;
	}

}
void Swap(int a[], int i, int j) {
	int temp = a[j];
	a[j] = a[i];
	a[i] = temp;
}
void sort(int a[], int left, int right) {
	if (left < right) {
		int pivot = a[right];
		int pos = left - 1;
		for (int i = left; i < right; i++)
			if (a[i] <= pivot)
				Swap(a, ++pos, i);
		Swap(a, pos + 1, right);
		sort(a, left, pos);
		sort(a, pos + 1, right);
	}

}

void Sort::QuickSort(bool ascendent)
{
	sort(this->arr, 0, this->count-1);

}
			
void Sort::BubbleSort(bool ascendent) {
	int i, j;
	for (i = 0; i < this->count - 1; i++) 
	{ 
		for (j = 0; j < this->count - i - 1; j++)
			if (this->arr[j] > this->arr[j + 1])
			{
				int tmp = this->arr[j];
				this->arr[j] = this->arr[j+1];
				this->arr[j+1] = tmp;
			}
			  
	}

}

int Sort::GetElementsCount() {
	return this->count;
}

int  Sort::GetElementFromIndex(int index) {
	return this->arr[index];
}

void Sort::Print() {
	int count = GetElementsCount();
	for (int i = 0; i < count; i++)
		printf("%i ", GetElementFromIndex(i));
	printf("\n");
}