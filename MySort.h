#pragma once
#include <iostream>
#include <cassert>


//插入排序——直接插入排序 
//时间复杂度 O（N^2）
void DirectInsertionSort(int *arr, int sz)
{
	assert(arr);
	if (sz <= 1)
	{
		return;
	}
	for (int i = 0; i < sz - 1; i++)
	{
		if (arr[i + 1] < arr[i])
		{
			int tmp = arr[i + 1];
			int end = i;
			while (end >= 0 && arr[i] > tmp)
			{
				arr[end + 1] = arr[end];
				end--;
			}
			arr[end + 1] = tmp;
		}
	}
}


/*
插入排序——希尔排序
希尔排序是对直接插入排序的优化
时间复杂度：平均下来O（N * Log2(N)）
*/

void ShellSort(int *arr, int sz)
{
	assert(arr);
	if (sz <= 1)
	{
		return;
	}
	int gap = sz;
	while (gap > 1)
	{
		gap = gap / 3 + 1;
		for (int i = 0; i < sz - gap; i++)
		{
			int end = i;
			int tmp = arr[end + gap];
			while (end >= 0 && tmp < arr[end])
			{
				arr[end + gap] = arr[end];
				end -= gap;
			}
			arr[end + gap] = tmp;
		}
	}
}


/*
	选择排序——直接选择排序1(每次选最大的数放到队尾)
	时间复杂都为 O(N^2)
*/
void SelectionSort_Normal(int *arr, int sz)
{
	assert(arr);
	if (sz <= 1)
	{
		return;
	}
	while (sz > 0)
	{
		int MaxIndex = 0;
		for (int i = 0; i < sz; i++)
		{
			if (arr[i] > arr[MaxIndex])
			{
				MaxIndex = i;
			}
		}
		if (MaxIndex != (sz - 1))
		{
			std::swap(arr[sz - 1], arr[MaxIndex]);
		}
		sz--;
	}
}

/*
选择排序——直接选择排序2(每次选最大的数放到队尾，选最小的数放队首)
时间复杂都为 O(N^2 / 2) (效率翻倍)
*/
void SelectionSort_Improve(int *arr, int sz)
{
	assert(arr);
	if (sz <= 1)
	{
		return;
	}
	int front = 0;
	int end = sz - 1;
	while (front < end)
	{
		int MaxIndex = front;
		int MinIndex = front;
		for (int i = front; i <= end; ++i)
		{
			if (arr[i] > arr[MaxIndex])
			{
				MaxIndex = i;
			}
			if (arr[i] < arr[MinIndex])
			{
				MinIndex = i;
			}
		}
		int MaxVal = arr[MaxIndex];
		int MinVal = arr[MinIndex];

		if (MaxIndex != end)
		{
			std::swap(arr[MaxIndex], arr[end]);
		}
		//修正MinIndex
		if (MinIndex == end)
		{
			MinIndex = MaxIndex;
		}
		if (MinIndex != front)
		{
			int tmp = arr[front];
			arr[front] = MinVal;
			arr[MinIndex] = tmp;
		}
		++front;
		--end;
	}
}

/*
选择排序——堆排序
时间复杂度为 O(N* log2(N) )
而且它的效率不受数组本身排序的影响
*/

//向下调整
void AdjustDown(int *arr, int sz, int parent)
{
	int child = parent * 2 + 1;
	while (child < sz)
	{
		if (child + 1 < sz && arr[child + 1] > arr[child])
		{
			++child;
		}
		if (arr[child] > arr[parent])
		{
			std::swap(arr[child], arr[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}

void HeapSort(int *arr, int sz)
{
	assert(arr);
	if (sz <= 1)
	{
		return;
	}
	//建堆
	for (int i = (sz - 2) / 2; i >= 0; --i)
	{
		AdjustDown(arr, sz, i);
	}
	int end = sz - 1;
	while (end > 0)
	{
		std::swap(arr[0], arr[end]);
		AdjustDown(arr, end, 0);
		--end;
	}
}

