#include "SortedArray.hpp"

template <typename T>
SortedArray<T>::SortedArray(int array_size, bool b)
{
    total = array_size;
    ptr = arr.size();
    boolptr = b;
    int *arr = new int[array_size];
}

template <typename T>
void SortedArray<T>::addEnd(T val)
{
    if (ptr == total)
    {
        throw ErrorClass();
    }
    else if (boolptr)
    {
        else
        {
            arr[ptr] = val;
            SortArray();
        }
    }
    else
    {
        arr[ptr] = val;
    }
}

template <typename T>
void SortedArray<T>::Addbegin(T val)
{
    if (ptr == total)
    {
        throw ErrorClass();
    }
    else if (boolptr)
    {
        else
        {
            for (int i = ptr; i > 0; i--)
            {
                arr[i] = arr[i - 1];
            }
            arr[0] = val;
            SortArray();
        }
    }
    else
    {
        for (int i = ptr; i > 0; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[0] = val;
    }
}

template <typename T>
void SortedArray<T>::SortArray()
{
    int min_index = -1;
    for (int i = 0; i < (total - 1); i++)
    {
        min_index = i;
        for (int j = i + 1; j < total; j++)
        {
            if (arr[j] < arr[min_index])
                min_index = j;
            if (min_index != i)
                swap(&arr[min_idx], &arr[i]);
        }
    }
}

template <typename T>
void SortedArray<T>::printArray()
{
    for (int i = 0; i < total; i++)
    {
        cout << arr[i] << " ";
    }
}

template <typename T>
void SortedArray<T>::SetSorted(bool b)
{
    boolptr =b;
}