#ifndef SORTING_ALGORITHMS_H
#define SORTING_ALGORITHMS_H

/*
 * Utility Function to disiplay the array 
 */
void display(int A[], int size);

/*
 * Utility function for the comparison based algorithm
 */
void swap(int* A, int *B);
/*
 * @brief Simple comparision based sorting algorithm, where the 
 * consecutive elements get compared and swapped in each pass 
 * of the algorithm. This is the non-adaptive version of the bubbleSort()
 * [1] Stable Sorting Algorithm 
 * [2] By Default not adaptive in nature 
 * [3] Can be made adaptive, so it could take the advantage over already 
 * 	   sorted or partially sorted array
 * @param int A[]
 * @param int size 
 */
void bubbleSort(int A[], int size);


/*
*  It is an adaptive version of BubbleSort which takes the advantage over 
*  the sorted array, by performing the minimum number of comparsions,and 
*  reduces the running-time for sorted array is linear-time complexity
*/
void bubbleSortAdaptive(int A[], int size);


/*
* Insertion sort is the stable and adaptive algorithm, which divdes the wholes list 
* into two parts , first one is sorted array, and another is unsorted array 
* Initially it assumes the first element in the array is sorted and a part of sorted array.
* 
* In Each pass the it takes the element from the unsorted element as key and compares the key 
* with elements in sorted list and place the key in sorted array with shifting of elements in 
* sorted array. 
*/
void insertionSort(int A[], int size);


/*
* Selection Sort Algorithm, when minimum number of swaps are needed 
*/
void selectionSort(int A[], int size);


/**
 * Quick Sort 
*/

#endif 
