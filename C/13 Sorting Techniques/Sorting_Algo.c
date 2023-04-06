#include "Sorting_Algo.h"
#include <stdio.h>

void display(int A[], int size)
{
	for(int i=0; i<size; i++)
	{
		printf("%d ",A[i]);
	}
	printf("\n");

}

void swap(int *A, int *B)
{
	int temp = *A;
	*A = *B;
	*B = temp;
}


void bubbleSort(int *A, int size)
{
	for(int i=0; i < size-1; i++)
	{
		for(int j=0; j < size-1-i; j++)
		{
			if(A[j] > A[j+1])
			{
				swap(&A[j],&A[j+1]);
			}
		}
	}
}

void bubbleSortAdaptive(int *A, int size)
{
	int isSorted;
	for(int i=0; i<size-1; i++)
	{	
		isSorted = 1;
		for(int j=0; j < size-i-1; j++)
		{
			if(A[j] > A[j+1])
			{
				swap(&A[j],&A[j+1]);
			}
		}
	}
}

void insertionSort(int A[], int size)
{
	int i,j,key;
	for(int i=1; i < size; i++)
	{
		key = A[i];
		j = i-1;
		while(key < A[j] && j >=0)
		{
			A[j+1] = A[j];
			j--;
		}
		A[j+1] = key;
	}
}


void selectionSort(int A[], int size)
{
	int i,j,k;

	for(i=0; i<size-1;i++)
	{
		k = i;
		for(j=i; j < size; j++)
		{
			if(A[k] > A[j])
			{
				k = j;
			}
		}
		swap(&A[i],&A[k]);
	}

}