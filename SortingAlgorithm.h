#pragma once

template <class T>
class SortingAlgorithm
{
public:
	SortingAlgorithm() {}
	virtual ~SortingAlgorithm(){}

	virtual void sort(T array[], int start, int end) = 0;
};