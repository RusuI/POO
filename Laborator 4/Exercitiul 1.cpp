#include "Sort.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include "Exercitiul 1.h"

int main()
{
    int array[10] = {26,34,24,53,46,89,60,8,30,12};
    Sort obj1(5, 40, 70), //the list that needs to be sorted out of random values
        obj2(6, 5, 36, 24, 69, 96, 23),//the list that needs to be sorted using variadic parameters
        obj3(array, 10),
        obj4("12,7,4,13,28");//he list that needs to be sorted from a string
 
    Sort obj5;
    obj1.InsertSort(false);
    printf("Sortarea pentru obj1:");
    obj1.Print();

    obj2.BubbleSort(false);
    printf("Sortarea pentru obj2:");
    obj2.Print();

    obj3.QuickSort(false);
    printf("Sortarea pentru obj3:");
    obj3.Print();

    obj4.BubbleSort(false);
    printf("Sortarea pentru obj4:");
    obj4.Print();

    obj5.BubbleSort(false);
    printf("Sortarea pentru obj5:");
    obj5.Print();

  
}

