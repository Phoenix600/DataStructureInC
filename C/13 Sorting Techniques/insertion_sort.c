#include<stdio.h>

void insertionSort(int A[], int size)
{
	int i,j,key;
	for (int i=1; i < size;i++){
		key = A[i];
		j = i - 1;
		while(key < A[j] && j >= 0)
		{
			A[j+1] = A[j];
			j--;
		}
		A[j+1] = key; 
	}
}

void display(int A[], int size)
{
	for(int i=0; i< size; i++)
	{
		printf("%d ",A[i]);
	}
	printf("\n");
}

int main()
{
	int A[] = {12,4,8,11,9};
	
	display(A,5);
	insertionSort(A,5);
	display(A,5);
	return 0;
}
