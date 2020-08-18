#pragma once
#include "SearchingAlgorithm.h"

template <class T>
class BinarySearch : SearchingAlgorithm<T>
{
public:
	BinarySearch();
	virtual ~BinarySearch();

	virtual T search(T array[], int start, int end, T x);
};

template<class T>
inline BinarySearch<T>::BinarySearch()
{
	//nothing
}

template<class T>
inline BinarySearch<T>::~BinarySearch()
{
	//nothing
}

template<class T>
T BinarySearch<T>::search(T array[], int start, int end, T x)
{
	if (start <= end)
	{
		int middle = start + (end - start) / 2;
		if (x == array[middle])
		{
				return middle;
		}
		else if (x < array[middle])
		{
				return search(array, start, middle - 1, x);
		}
		else
		{
				return search(array, middle + 1, end, x);
		}
	}
	return -1;
}
