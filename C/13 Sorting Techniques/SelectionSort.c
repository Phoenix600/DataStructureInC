#include<stdio.h>

void swap(int*A, int *B)
{
	int temp = *A;
	*A = *B;
	*B = temp;
}

void selectionSort(int A[], int size)
{
	int i,j,k;

	for(i=0; i<size-1; i++)
	{
		
		for(j=k=i; j < size; j++)
		{
			if(A[j] < A[k])
				k = j;
		}
		swap(&A[i],&A[k]);
	}

}

void printArray(int A[], int size)
{
	for(int i=0; i<size; i++)
	{
		printf("%d ",A[i]);
	}
	printf("\n");
}

int main()
{
	int A[] = {5,12,56,1,8,-1,23};
	int size = 7;

	printArray(A,size);
	selectionSort(A,size);
	printArray(A,size);

	return 0;
}
