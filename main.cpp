#include <iostream>
#include "QuickSort.h"

template <typename T>
void printArray(T array[], int length)
{
    std::cout << "Sorted array:" << std::endl;
    for (int i = 0; i < length; i++)
    {
        std::cout << array[i] << std::endl;
    }
}

int main()
{
    int array[] = { 5, 7, 4, 2, 9, 6 };
    int n = sizeof(array) / sizeof(array[0]);

    QuickSort<int> sorter;
    sorter.sort(array, 0, n - 1, true);
    printArray<int>(array, 6);
    std::cin.get();
	return 0;
}