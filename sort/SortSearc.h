#pragma once
#include<iostream>
using namespace std;

template <class Any> void SWAP(Any& a, Any& b); // swap
void PrintToConsole(int* array, long int size, bool Rand);

int BinarySearch(int* array,long int size,long int search); // 1 //
void QuickSort(int* array,long int size); // 2 //
void BubbleSort(int* array,long int size); // 4 //
void BogoSort(int* array,long int size); // 5 //
void CountingSort(char* array, int size); // 6 //