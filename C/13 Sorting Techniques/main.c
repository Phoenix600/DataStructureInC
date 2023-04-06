#include <stdio.h>
#include "Sorting_Algo.h"

int main()
{
	int A[] = {12,32,1,5,12,9,10,0};

	display(A,8);
	/* bubbleSortAdaptive(A,8); */
	// insertionSort(A,8);
	selectionSort(A,8);
	printf("Sorted Array\n");
	display(A,8);

	return 0;
}
