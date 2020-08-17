#pragma once

template <class T>
class SearchingAlgorithm
{
public:
	SearchingAlgorithm() {}
	virtual ~SearchingAlgorithm() {}

	virtual T search(T array[], bool isAscending) = 0;
};