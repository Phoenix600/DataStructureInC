#include<stdio.h>

void swap(int* A, int* B)
{
	int temp = *A;
	*A = *B;
	*B = temp;
}


int partition(int A[], int l, int h)
{
	int i = l;
	int j = h;
	int pivot = A[l];


	do{
	
		do{i++;}while(pivot >= A[i]);
		do{j--;}while(pivot < A[j]);
		if(i < j){swap(&A[i],&A[j]);}
	
	}while(i < j);

	swap(&A[l],&A[j]);
	return j; 
}

void QuickSort(int A[],int l, int h)
{	
	int j;
	
	if(l < h)
	{
		j = partition(A,l,h);
		QuickSort(A,l,j);
		QuickSort(A,j+1,h);	
	}

}

void print(int A[], int n)
{
	for(int i=0; i<n ; i++)
	{
		printf("%d ",A[i]);
	}
	printf("\n");
}

int main()
{
	int A[] = {12,4,110,3,1,12,5};

	print(A,7);
	QuickSort(A,0,7);
	print(A,7);

	int B[] = {100,90,80,70,60,50,40,30,20,10};
	print(B,10);
	QuickSort(B,0,10);
	print(B,10);



	

	return 0;
}
