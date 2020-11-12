#include "pch.h"
#include "CppUnitTest.h"
#include "../sort/SortSearch.cpp"
#include "../sort/SortSearc.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace sortTest
{
	TEST_CLASS(sortTest)
	{
	public:
		int* array;
		int* arrayMini;
		char* CHARarray;
		TEST_METHOD_INITIALIZE(setUp)
		{
			array = new int[10];
			arrayMini = new int[5];
			CHARarray = new char[10];
		}
		// after each test
		TEST_METHOD_CLEANUP(cleanUp)
		{
			delete array;
			delete arrayMini;
			delete CHARarray;
		}
		//////////////////////////////////////////////////Quick Sort
		TEST_METHOD(Quicksort_first)
		{
			// UNSORTED ARRAY // SORTED ARRAY
			array[0] = { 1 }; // 1
			array[1] = { 5 }; // 1
			array[2] = { 2 }; // 2
			array[3] = { 7 }; // 2
			array[4] = { 6 }; // 2
			array[5] = { 1 }; // 3
			array[6] = { 4 }; // 4
			array[7] = { 2 }; // 5
			array[8] = { 3 }; // 6
			array[9] = { 2 }; // 7
			QuickSort(array, 10);
			Assert::AreEqual(array[0], 1);
		}
		TEST_METHOD(Quicksort_middle)
		{
			// UNSORTED ARRAY // SORTED ARRAY
			array[0] = { 1 }; // 1
			array[1] = { 5 }; // 1
			array[2] = { 2 }; // 2
			array[3] = { 7 }; // 2
			array[4] = { 6 }; // 2
			array[5] = { 1 }; // 3
			array[6] = { 4 }; // 4
			array[7] = { 2 }; // 5
			array[8] = { 3 }; // 6
			array[9] = { 2 }; // 7
			QuickSort(array, 10);
			Assert::AreEqual(array[5], 3);
		}
		TEST_METHOD(Quicksort_lust)
		{
			// UNSORTED ARRAY // SORTED ARRAY
			array[0] = { 1 }; // 1
			array[1] = { 5 }; // 1
			array[2] = { 2 }; // 2
			array[3] = { 7 }; // 2
			array[4] = { 6 }; // 2
			array[5] = { 1 }; // 3
			array[6] = { 4 }; // 4
			array[7] = { 2 }; // 5
			array[8] = { 3 }; // 6
			array[9] = { 2 }; // 7
			QuickSort(array, 10);
			Assert::AreEqual(array[9], 7);
		}
		TEST_METHOD(Quicksort_1)
		{
			arrayMini[0] = { 1 };
			arrayMini[1] = { 1 };
			arrayMini[2] = { 1 };
			arrayMini[3] = { 1 };
			arrayMini[4] = { 1 };
			QuickSort(arrayMini, 5);
			Assert::AreEqual(arrayMini[3], 1);
		}
		//////////////////////////////////////////////////Bubble Sort
		TEST_METHOD(Bubblesort_first)
		{
			// UNSORTED ARRAY // SORTED ARRAY
			array[0] = { 1 }; // 1
			array[1] = { 5 }; // 1
			array[2] = { 2 }; // 2
			array[3] = { 7 }; // 2
			array[4] = { 6 }; // 2
			array[5] = { 1 }; // 3
			array[6] = { 4 }; // 4
			array[7] = { 2 }; // 5
			array[8] = { 3 }; // 6
			array[9] = { 2 }; // 7
			BubbleSort(array, 10);
			Assert::AreEqual(array[0], 1);
		}
		TEST_METHOD(Bubblesort_middle)
		{
			// UNSORTED ARRAY // SORTED ARRAY
			array[0] = { 1 }; // 1
			array[1] = { 5 }; // 1
			array[2] = { 2 }; // 2
			array[3] = { 7 }; // 2
			array[4] = { 6 }; // 2
			array[5] = { 1 }; // 3
			array[6] = { 4 }; // 4
			array[7] = { 2 }; // 5
			array[8] = { 3 }; // 6
			array[9] = { 2 }; // 7
			BubbleSort(array, 10);
			Assert::AreEqual(array[5], 3);
		}
		TEST_METHOD(Bubblesort_lust)
		{
			// UNSORTED ARRAY // SORTED ARRAY
			array[0] = { 1 }; // 1
			array[1] = { 5 }; // 1
			array[2] = { 2 }; // 2
			array[3] = { 7 }; // 2
			array[4] = { 6 }; // 2
			array[5] = { 1 }; // 3
			array[6] = { 4 }; // 4
			array[7] = { 2 }; // 5
			array[8] = { 3 }; // 6
			array[9] = { 2 }; // 7
			BubbleSort(array, 10);
			Assert::AreEqual(array[9], 7);
		}
		TEST_METHOD(Bubblesort_1)
		{
			arrayMini[0] = { 1 };
			arrayMini[1] = { 1 };
			arrayMini[2] = { 1 };
			arrayMini[3] = { 1 };
			arrayMini[4] = { 1 };
			BubbleSort(arrayMini, 5);
			Assert::AreEqual(arrayMini[3], 1);
		}
		//////////////////////////////////////////////////Bogo Sort
		TEST_METHOD(Bogosort_first)
		{
			// UNSORTED ARRAY // SORTED ARRAY
			arrayMini[0] = { 1 }; // 1
			arrayMini[1] = { 5 }; // 2
			arrayMini[2] = { 2 }; // 5
			arrayMini[3] = { 7 }; // 6
			arrayMini[4] = { 6 }; // 7
			BogoSort(arrayMini, 5);
			Assert::AreEqual(arrayMini[0], 1);
		}
		TEST_METHOD(Bogosort_middle)
		{
			// UNSORTED ARRAY // SORTED ARRAY
			arrayMini[0] = { 1 }; // 1
			arrayMini[1] = { 5 }; // 2
			arrayMini[2] = { 2 }; // 5
			arrayMini[3] = { 7 }; // 6
			arrayMini[4] = { 6 }; // 7
			BogoSort(arrayMini, 5);
			Assert::AreEqual(arrayMini[2], 5);
		}
		TEST_METHOD(Bogosort_lust)
		{
			// UNSORTED ARRAY // SORTED ARRAY
			arrayMini[0] = { 1 }; // 1
			arrayMini[1] = { 5 }; // 2
			arrayMini[2] = { 2 }; // 5
			arrayMini[3] = { 7 }; // 6
			arrayMini[4] = { 6 }; // 7
			BogoSort(arrayMini, 5);
			Assert::AreEqual(arrayMini[4], 7);
		}
		TEST_METHOD(Bogosort_1)
		{
			arrayMini[0] = { 1 };
			arrayMini[1] = { 1 };
			arrayMini[2] = { 1 };
			arrayMini[3] = { 1 };
			arrayMini[4] = { 1 };
			BogoSort(arrayMini, 5);
			Assert::AreEqual(arrayMini[3], 1);
		}
		//////////////////////////////////////////////////Couting Sort
		TEST_METHOD(Countingsort_first)
		{ 
			// UNSORTED ARRAY // SORTED ARRAY
			CHARarray[0] = { 'z' }; // a
			CHARarray[1] = { 'd' }; // a
			CHARarray[2] = { 'y' }; // a
			CHARarray[3] = { 'c' }; // c
			CHARarray[4] = { 's' }; // d
			CHARarray[5] = { 'a' }; // d
			CHARarray[6] = { 'a' }; // f
			CHARarray[7] = { 'd' }; // s
			CHARarray[8] = { 'f' }; // y
			CHARarray[9] = { 'a' }; // z
			CountingSort(CHARarray,10);
			Assert::AreEqual((int)CHARarray[0], (int)'a');
		}
		TEST_METHOD(Countingsort_lust)
		{
			// UNSORTED ARRAY // SORTED ARRAY
			CHARarray[0] = { 'z' }; // a
			CHARarray[1] = { 'd' }; // a
			CHARarray[2] = { 'y' }; // a
			CHARarray[3] = { 'c' }; // c
			CHARarray[4] = { 's' }; // d
			CHARarray[5] = { 'a' }; // d
			CHARarray[6] = { 'a' }; // f
			CHARarray[7] = { 'd' }; // s
			CHARarray[8] = { 'f' }; // y
			CHARarray[9] = { 'a' }; // z
			CountingSort(CHARarray, 10);
			Assert::AreEqual((int)CHARarray[9], (int)'z');
		}
		TEST_METHOD(Countingsort_1)
		{
			// UNSORTED ARRAY // SORTED ARRAY
			CHARarray[0] = { 'z' }; // a
			CHARarray[1] = { 'z' }; // a
			CHARarray[2] = { 'z' }; // a
			CHARarray[3] = { 'z' }; // c
			CHARarray[4] = { 'z' }; // d
			CHARarray[5] = { 'z' }; // d
			CHARarray[6] = { 'z' }; // f
			CHARarray[7] = { 'z' }; // s
			CHARarray[8] = { 'z' }; // y
			CHARarray[9] = { 'z' }; // z
			CountingSort(CHARarray, 10);
			Assert::AreEqual((int)CHARarray[9], (int)'z');
		}
		//////////////////////////////////////////////////Binary search
		TEST_METHOD(Binarysearch_middle)
		{
			for (int i = 0; i < 10; i++)
			{
				array[i] = i;
			}
			Assert::AreEqual(BinarySearch(array,10, 5), 5);
		}
		TEST_METHOD(Binarysearsh_more)
		{
			for (int i = 0; i < 10; i++)
			{
				array[i] = 9;
			}
			Assert::AreEqual(BinarySearch(array, 10, 9), 4); // 4 - first middle
		}
		TEST_METHOD(Binarysearsh_notfound)
		{
			for (int i = 0; i < 10; i++)
			{
				array[i] = i;
			}
			Assert::AreEqual(BinarySearch(array, 10, 15), -1); 
		}
	};
}
