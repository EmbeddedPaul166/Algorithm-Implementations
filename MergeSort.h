#pragma once
#include "SortingAlgorithm.h"

template <class T>
class MergeSort : public SortingAlgorithm<T>
{
public:
    MergeSort();
    virtual ~MergeSort();
    virtual void sort(T array[], int start, int end, bool ascending);
private:
    void merge(T array[], int start, int middle, int end);
};

template<class T>
MergeSort<T>::MergeSort()
{
    //nothing
}

template<class T>
MergeSort<T>::~MergeSort()
{
    //nothing
}

template<class T>
void MergeSort<T>::sort(T array[], int start, int end, bool ascending)
{
    if (start < end)
    {
        int middle = (start + end) / 2;
        sort(array, start, middle, ascending);
        sort(array, middle + 1, end, ascending);

        merge(array, start, middle, end);
    }
}

template<class T>
void MergeSort<T>::merge(T array[], int start, int middle, int end)
{
    int n1 = middle - start + 1;
    int n2 = end - middle;

    int* L = new int[n1];
    int* R = new int[n2];

    for (int i = 0; i < n1; i++)
    {
        L[i] = array[start + i];
    }

    for (int j = 0; j < n2; j++)
    {
        R[j] = array[middle + 1 + j];
    }


    int i = 0;
    int j = 0;
    int k = start;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            array[k] = L[i];
            i++;
        }
        else
        {
            array[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        array[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        array[k] = R[j];
        j++;
        k++;
    }

    delete L, R;
}
