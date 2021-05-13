#pragma once
#include <iostream>
#include "exceptie.h"

using namespace std;

class Compare

{

public:

    virtual int CompareElements(void* e1, void* e2) = 0;

};

template<class T>

class ArrayIterator

{

private:

    int Current;
    T** List_begin;

public:

    ArrayIterator(T** e) :List_begin(e), Current(0) {};
    ArrayIterator(const ArrayIterator& otherArrayIt) {
        List_begin = otherArrayIt.List_begin;
        Current = otherArrayIt.Current;
    }

    ArrayIterator& operator ++ () {
        ++Current;
        return *this;
    }

    ArrayIterator& operator -- () {
        --Current;
        return *this;
    }

    bool operator= (const ArrayIterator<T>& otherArrayIt) {
        return List_begin + Current == otherArrayIt.List_begin + otherArrayIt.Current;
    }

    bool operator!=(const ArrayIterator<T>& otherArrayIt) {
        return List_begin + Current != otherArrayIt.List_begin + otherArrayIt.Current;
    }

    const T& operator*() {
        return **(List_begin + Current);
    }

    T* GetElement() {
        return *(List_begin + Current);
    }
    ~ArrayIterator() {
    }

};

template<class T>

class Array

{

private:

    T** List;

    int Capacity

        int Size;

public:

    Array() :Array(0) {};

    ~Array() {

        for (int i = 0; i < Size; ++i)
            delete List[i];
        delete[] List;
    }

    Array(int capacity) :Capacity(capacity), Size(0) {
        this->List = new T * [this->Capacity];
    }; // Lista e alocata cu 'capacity' elemente

    Array(const Array<T>& otherArray) {
        this->Capacity = otherArray.Capacity;
        this->Size = otherArray.Size;
        this->List = new T * [this->Capacity];
        for (int i = 0; i < this->Size; ++i) {
            this->List[i] = new T;
            *this->List[i] = *otherArray.List[i];
        }
    };



    T& operator[] (int index) {
        if (index < 0 || index >= Size)
            throw exceptie2();
        return *List[index];
    };



    const Array<T>& operator+=(const T& newElem) {

        return Insert(Size, newElem);

    };

    void reallocate_memory(const int& new_capacity) {
        T** new_list = new T * [new_capacity];
        for (int i = 0; i < Size; ++i) {
            new_list[i] = new T;
            *new_list[i] = *List[i];
        }
        for (int i = 0; i < Size; ++i)
            delete List[i];
        delete[] List;
        Capacity = new_capacity;
        List = new_list;
    }

    const Array<T>& Insert(int index, const T& newElem) {

        if (index<0 || index>Size)
            throw exceptie2();
        if (Size + 1 >= Capacity) reallocate_memory(Capacity * 2 + 1);
        List[Size] = new T;
        ++Size;
        for (int i = Size - 1; i >= index + 1; --i) {
            *List[i] = *List[i - 1];
        }
        *List[index] = newElem;
        return *this;
    };

    const Array<T>& Insert(int index, const Array<T> otherArray) {
        if (index<0 || index>Size)
            throw exceptie2();
        if (Size + otherArray.Size >= Capacity)
            reallocate_memory(Capacity + otherArray.Capacity);
        for (int i = Size + otherArray.Size - 1; i >= Size; --i)
            List[i] = new T;
        Size += otherArray.Size;
        for (int i = Size - 1; i >= index + otherArray.Size; --i) {

            *List[i] = *List[i - otherArray.Size];
        }
        for (int i = 0; i < otherArray.Size; ++i)
            *List[index + i] = *otherArray.List[i];
        return *this;
    };

    const Array<T>& Delete(int index) {
        if (index < 0 || index >= Size)
            throw exceptie2();
        --Size;
        for (int i = index; i < Size; ++i)
            *List[i] = *List[i + 1];
        return *this;
    };



    bool operator=(const Array<T>& otherArray) {
        if (otherArray.Size >= Capacity)
            reallocate_memory(otherArray.Capacity);
        for (int i = Size; i < otherArray.Size; ++i)
            List[i] = new T;
        Size = otherArray.Size;
        for (int i = 0; i < Size; ++i)
            *List[i] = *otherArray.List[i];
        return true;
    }



    void Sort() {
        for (int i = 0; i < Size; ++i)
            for (int j = i + 1; j < Size; ++j)
                if (*List[i] > *List[j])
                    swap(List[i], List[j]);
    };

    void Sort(int(*compare)(const T&, const T&)) {
        for (int i = 0; i < Size; ++i)
            for (int j = i + 1; j < Size; ++j)
                if (compare(*List[i], *List[j]) == 1)
                    swap(List[i], List[j]);
    }

    void Sort(Compare* comparator) {
        for (int i = 0; i < Size; ++i)
            for (int j = i + 1; j < Size; ++j)
                if (comparator->CompareElements(List[i], List[j]) == 1)
                    swap(List[i], List[j]);
    };



    // functii de cautare - returneaza pozitia elementului sau -1 daca nu exista

    int BinarySearch(const T& elem) {
        int low = 0, high = Size - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (*List[mid] == elem)
                return mid;
            if (*List[mid] < elem)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return -1;
    }

    int BinarySearch(const T& elem, int(*compare)(const T&, const T&)) {
        int low = 0, high = Size - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (compare(*List[mid], elem) == 0)
                return mid;
            if (compare(*List[mid], elem) == -1)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return -1;
    }

    int BinarySearch(const T& elem, Compare* comparator) {
        int low = 0, high = Size - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (comparator->CompareElements(List[mid], const_cast<T*>(&elem)) == 0)
                return mid;
            if (comparator->CompareElements(List[mid], const_cast<T*>(&elem)) == -1)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return -1;
    }



    int Find(const T& elem) {
        for (int i = 0; i < Size; ++i)
            if (*List[i] == elem)
                return i;
        return -1;
    }

    int Find(const T& elem, int(*compare)(const T&, const T&)) {
        for (int i = 0; i < Size; ++i)
            if (compare(*List[i], elem) == 0)
                return i;
        return -1;
    }

    int Find(const T& elem, Compare* comparator) {
        for (int i = 0; i < Size; ++i)
            if (comparator->CompareElements(List[i], const_cast<T*>(&elem)) == 1)
                return i;
        return -1;
    }



    int GetSize() { return Size; };

    int GetCapacity() { return Capacity; };



    ArrayIterator<T> GetBeginIterator() {
        return ArrayIterator<T>(&List[0]);
    }

    ArrayIterator<T> GetEndIterator() {
        return ArrayIterator<T>(&List[Size]);
    }
    T** begin() {
        return &List[0];
    }
    T** end() {
        return &List[Size];
    }

};

