#pragma once

template <class T>
class SearchingAlgorithm
{
public:
	SearchingAlgorithm() {}
	virtual ~SearchingAlgorithm() {}

	virtual T search(T array[], int start, int end, T x) = 0;
};