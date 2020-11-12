#include "SortSearc.h";
#include <ctime>
#include <Windows.h>

template <class Any> void SWAP(Any& a, Any& b) // swap
{
	Any buf = a; a = b; b = buf;
}

void PrintToConsole(int* array, long int size, bool Rand)
{
	if (Rand) // creating an array of random numbers
	{
		for (long int i = 0; i < size; i++)
			{
			 array[i] = rand() % 10;
			}
	}

	long int count = 0; // checking if the array is sorted
	for (long int i = 1; i < size; i++)
	{
		if (array[i] > array[i - 1])
		{
			count++;
		}
	}
	if (count == size - 1) cout << "\nSorted array: \n";
	else cout << "\nUnsorted array: \n";

	for (long int i = 0; i < size; i++) // Print
		cout << array[i] << " ";
}

int BinarySearch(int* array, long int size, long int search) // 1 //
{
	int left = 0, right = size - 1; // left and right borders of an array
	int mid = right / 2; // middle of array
	while ((left < right) && (array[mid] != search))
	{
		// if the required number is not the first half
		// then we check the second half
		if (array[mid] < search)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
		mid = (right + left) / 2;
	}
	if (array[mid] == search) // found
	{
		return mid;
	}
	else return -1; // not found
}

void QuickSort(int* array,long int size) // 2 //
{
	long int left = 0, right = size - 1; // left and right borders of an array
	long int mid = array[size / 2]; // middle of array
	do
	{
		while (array[left] < mid)
		{
			left++;
		}
		while (array[right] > mid)
		{
			right--;
		}
		if (left <= right)
		{
			SWAP(array[left], array[right]);
			left++; right--;
		}
	} while (left < right);

	if (right > 0) 
		QuickSort(&array[0], right + 1);
	if (left < size) 
		QuickSort(&array[left], size - left); // elements from the left border to the end of the array
}

void BubbleSort(int* array, long int size) // 4 //
{
	for (long int i = 0; i < size - 1; i++)
	{
		for (long int j = 0; j < size - i - 1; j++)
		{
			if (array[j + 1] < array[j])
			{
				SWAP(array[j], array[j + 1]); // the larger number "floats" up
			}
		}
	}
}

void BogoSort(int* array,long  int size) // 5 //
{
	long int randIndex = 0, count = 0;

	for (long int i = 1; i < size; i++) // checking if the array is sorted
	{
		if (array[i] >= array[i - 1]) 
		{
			count++;
		}
	}
	bool isSorted;
	if (count == size - 1) isSorted = true;
	else isSorted = false;

	unsigned long int a = 409347, c = 542367, d = 1334; // seeds
	while (!isSorted) 
	{
		for (long int i = 0; i < size; i++) // mix array
		{
			randIndex = clock() * (randIndex * a + c) % size; // generation random position
			SWAP(array[i], array[randIndex]);

			count = 0; // checking if the array is sorted
			for (long int i = 1; i < size; i++) {
				if (array[i] >= array[i - 1])
				{
					count++;
				}
			}
			if (count == size - 1) isSorted = true;
			else isSorted = false;
		}
	}
}

void CountingSort(char* array, int size) // 6 //
{
	size_t min = array[0], max = min;
	for (int i = 0; i < size; i++) // found max and min symbol
	{
		if (array[i] < min) min = array[i];
		else if (array[i] > max) max = array[i];
	}
	size_t sizeC = max - min + 1; 
	size_t* count = new size_t[sizeC]; // array of the count of each digit
	for (int i = 0; i < sizeC; i++) // initialization to zero
	{
		count[i] = 0;
	}
	for (int i = 0; i < size; i++) // counter of the count of each symbol
	{
		count[array[i] - min] ++;
	}
	int cur = 0;
	if (size) // size array != 0
	{
		for (int i = 0; i < sizeC; i++)
		{
			for (int j = 0; j < count[i]; j++)
			{
				array[cur] = (char)(i + min);
				cur++;
			}
		}
	}
}