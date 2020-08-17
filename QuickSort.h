#pragma once
#include "SortingAlgorithm.h"

template <class T>
class QuickSort : public SortingAlgorithm<T>
{
public:
	QuickSort();
	virtual ~QuickSort();
	virtual void sort(T array[], int start, int end, bool ascending);
private:
	int partition(T array[], int start, int end);
};

template<class T>
QuickSort<T>::QuickSort()
{
    //nothing
}

template<class T>
QuickSort<T>::~QuickSort()
{
    //nothing
}

template<class T>
void QuickSort<T>::sort(T array[], int start, int end, bool ascending)
{
    if (start < end)
    {
        int index = partition(array, start, end);
        sort(array, start, index - 1, ascending);
        sort(array, index + 1, end, ascending);
    }
}

template<class T>
int QuickSort<T>::partition(T array[], int start, int end)
{
    int pivot = array[end];
    int j = start - 1;
    for (int i = start; i < end; i++)
    {
        if (array[i] <= pivot)
        {
            j++;
            swap<T*>(&array[j], &array[i]);
        }
    }
    swap<T*>(&array[j + 1], &array[end]);
    return j + 1;
}

template <typename T>
void swap(T a, T b)
{
    auto t = *a;
    *a = *b;
    *b = t;
}
