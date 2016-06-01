#pragma once
#include <iostream>
#include "MySort.h"

using namespace std;

void PrintArr(int *arr, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		std::cout << *(arr + i) << " ";
	}
	std::cout << std::endl;
}

void TestDirectInsertionSort()
{
	int arr1[] = { 1 };
	int arr2[] = { 1, 2, 3, 4 };
	int arr3[] = { 9, 5, 2 };
	int arr4[] = { 1, 3, 4, 2 };

	int sz1 = sizeof(arr1) / sizeof(*arr1);
	int sz2 = sizeof(arr2) / sizeof(*arr2);
	int sz3 = sizeof(arr3) / sizeof(*arr3);
	int sz4 = sizeof(arr4) / sizeof(*arr4);

	DirectInsertionSort(arr1, sz1);
	PrintArr(arr1, sz1);
	DirectInsertionSort(arr2, sz2);
	PrintArr(arr2, sz2);
	DirectInsertionSort(arr3, sz3);
	PrintArr(arr3, sz3);
	DirectInsertionSort(arr4, sz4);
	PrintArr(arr4, sz4);
}

void TestShellSort()
{
	int arr1[] = { 1 };
	int arr2[] = { 1, 2, 3, 4 };
	int arr3[] = { 9, 5, 2 };
	int arr4[] = { 1, 3, 4, 2 };
	int arr5[] = { 1, 3, 4, 2 , 0 };


	int sz1 = sizeof(arr1) / sizeof(*arr1);
	int sz2 = sizeof(arr2) / sizeof(*arr2);
	int sz3 = sizeof(arr3) / sizeof(*arr3);
	int sz4 = sizeof(arr4) / sizeof(*arr4);
	int sz5 = sizeof(arr5) / sizeof(*arr5);


	ShellSort(arr1, sz1);
	PrintArr(arr1, sz1);
	ShellSort(arr2, sz2);
	PrintArr(arr2, sz2);
	ShellSort(arr3, sz3);
	PrintArr(arr3, sz3);
	ShellSort(arr4, sz4);
	PrintArr(arr4, sz4);
	ShellSort(arr5, sz5);
	PrintArr(arr5, sz5);
}


void TestSelectionSort_Normal()
{
	int arr1[] = { 1 };
	int arr2[] = { 1, 2, 3, 4 };
	int arr3[] = { 9, 5, 2 };
	int arr4[] = { 1, 3, 4, 2 };
	int arr5[] = { 1, 3, 4, 2 , 0 };


	int sz1 = sizeof(arr1) / sizeof(*arr1);
	int sz2 = sizeof(arr2) / sizeof(*arr2);
	int sz3 = sizeof(arr3) / sizeof(*arr3);
	int sz4 = sizeof(arr4) / sizeof(*arr4);
	int sz5 = sizeof(arr5) / sizeof(*arr5);


	SelectionSort_Normal(arr1, sz1);
	PrintArr(arr1, sz1);
	SelectionSort_Normal(arr2, sz2);
	PrintArr(arr2, sz2);
	SelectionSort_Normal(arr3, sz3);
	PrintArr(arr3, sz3);
	SelectionSort_Normal(arr4, sz4);
	PrintArr(arr4, sz4);
	SelectionSort_Normal(arr5, sz5);
	PrintArr(arr5, sz5);
}

void TestSelectionSort_Improve()
{
	int arr1[] = { 1 };
	int arr2[] = { 1, 2, 3, 4 };
	int arr3[] = { 9, 5, 2 };
	int arr4[] = { 1, 3, 4, 2 };
	int arr5[] = { 1, 3, 4, 2 , 0 };


	int sz1 = sizeof(arr1) / sizeof(*arr1);
	int sz2 = sizeof(arr2) / sizeof(*arr2);
	int sz3 = sizeof(arr3) / sizeof(*arr3);
	int sz4 = sizeof(arr4) / sizeof(*arr4);
	int sz5 = sizeof(arr5) / sizeof(*arr5);


	SelectionSort_Improve(arr1, sz1);
	PrintArr(arr1, sz1);
	SelectionSort_Improve(arr2, sz2);
	PrintArr(arr2, sz2);
	SelectionSort_Improve(arr3, sz3);
	PrintArr(arr3, sz3);
	SelectionSort_Improve(arr4, sz4);
	PrintArr(arr4, sz4);
	SelectionSort_Improve(arr5, sz5);
	PrintArr(arr5, sz5);
}

void TestHeapSort()
{
	int arr1[] = { 1 };
	int arr2[] = { 1, 2, 3, 4 };
	int arr3[] = { 9, 5, 2 };
	int arr4[] = { 1, 3, 4, 2 };
	int arr5[] = { 1, 3, 4, 2 , 0 };


	int sz1 = sizeof(arr1) / sizeof(*arr1);
	int sz2 = sizeof(arr2) / sizeof(*arr2);
	int sz3 = sizeof(arr3) / sizeof(*arr3);
	int sz4 = sizeof(arr4) / sizeof(*arr4);
	int sz5 = sizeof(arr5) / sizeof(*arr5);


	HeapSort(arr1, sz1);
	PrintArr(arr1, sz1);
	HeapSort(arr2, sz2);
	PrintArr(arr2, sz2);
	HeapSort(arr3, sz3);
	PrintArr(arr3, sz3);
	HeapSort(arr4, sz4);
	PrintArr(arr4, sz4);
	HeapSort(arr5, sz5);
	PrintArr(arr5, sz5);
}
