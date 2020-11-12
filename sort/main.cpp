#include <iostream>
#include "SortSearc.h"
#include <ctime>

using namespace std;

int main()
{
	clock_t start, end;
	long int size = 10;
	int* array = new int[size];

	//////////////////////////////////////////////////////////////////////// BOGO SORT
	PrintToConsole(array, size, true);
	start = clock();
	BogoSort(array, size);
	end = clock();
	PrintToConsole(array, size, false);
	cout << "\nTime bogo sort : " << end - start << " ms \n";
	//////////////////////////////////////////////////////////////////////// BINARY SEARCH

	int search = 7;
	if (BinarySearch(array, size, search) == -1) cout << "\n Not found";
	else cout << "\n Found "<<  search <<" position: " << BinarySearch(array, size, search) << endl;

	//////////////////////////////////////////////////////////////////////// BUBBLE SORT
	size = 10;
	int* array2 = new int[size];

	PrintToConsole(array2, size, true);
	start = clock();
	BubbleSort(array2, size);
	end = clock();
	PrintToConsole(array2, size, false);
	cout << "\nTime bubble sort : " << end - start << " ms \n";
	//////////////////////////////////////////////////////////////////////// QUICK SORT
	PrintToConsole(array2, size, true);
	start = clock();
	QuickSort(array2, size);
	end = clock();
	PrintToConsole(array2, size, false);
	cout << "\nTime quick sort : " << end - start << " ms \n";
	//////////////////////////////////////////////////////////////////////// COUNTING SORT
	size = 10;
	char* symbol = new char[size];

	symbol[0] = 'z'; // a
	symbol[1] = 'd'; // a
	symbol[2] = 'y'; // a
	symbol[3] = 'c'; // c
	symbol[4] = 's'; // d
	symbol[5] = 'a'; // d
	symbol[6] = 'a'; // f
	symbol[7] = 'd'; // s
	symbol[8] = 'f'; // y
	symbol[9] = 'a'; // z

	start = clock();
	CountingSort(symbol,size);
	end = clock();

	cout << "\nSorted character array is ";
	for (int i = 0; i < size; i++)
	{
		cout << symbol[i];
	}
	////////////////////////////////////////////////////////////////////////
	cout << "\n\nThe end.";
}