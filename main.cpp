#include <iostream>
#include "QuickSort.h"
#include "MergeSort.h"
#include "BinarySearch.h"

template <typename T>
void printArray(T array[], int length, std::string type)
{
    std::cout << "Array sorted by " << type << ":" << std::endl;
    for (int i = 0; i < length; i++)
    {
        std::cout << array[i] << std::endl;
    }
}

int main()
{
    int arrayOne[] = { 5, 7, 4, 2, 9, 6 };
    int n = sizeof(arrayOne) / sizeof(arrayOne[0]);

    QuickSort<int> quickSorter;
    quickSorter.sort(arrayOne, 0, n - 1);
    printArray<int>(arrayOne, 6, "Quick Sort");

    int arrayTwo[] = { 5, 7, 4, 2, 9, 6 };
    n = sizeof(arrayTwo) / sizeof(arrayTwo[0]);

    MergeSort<int> mergeSorter;
    mergeSorter.sort(arrayTwo, 0, n - 1);
    printArray<int>(arrayTwo, 6, "Merge Sort");

    BinarySearch<int> binarySearcher;
    int x = binarySearcher.search(arrayOne, 0, n - 1, 6);
    std::cout << "Object found at index: " << x << std::endl;

    std::cin.get();
	return 0;
}