#pragma once
class Sort

{
private:
    int count;
    int *arr;

public:
    //contructori:
    Sort(int, int, int);
    Sort(int, ...);
    Sort(int *array, int count);
    Sort( const char* string);
    Sort();

    void InsertSort(bool ascendent = false);

    void QuickSort(bool ascendent);

    void BubbleSort(bool ascendent = false);

    void Print();

    int  GetElementsCount();

    int  GetElementFromIndex(int index);
};