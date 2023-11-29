#ifndef SortArray_H_
#define SortArray_H_

#include "ErrorClass.hpp"

#include <iostream>
using namespace std;

template <typename T>
class SortedArray{
    private:
        T *arrptr;
        int total;  //total size of an array
        T ptr;      //actual size of an array
        bool boolptr;
    public:
    SortedArray(int , bool);
    void addEnd(T);
    void Addbegin(T);
    void printArray();
    void SortArray();
    void SetSorted(bool);
};


#endif
