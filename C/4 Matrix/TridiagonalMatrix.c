#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,j;
	int n = 5; // size of the array 
	int* A;
	int x;
	int formula = n + 2*(n-1);
	
	A = (int*)malloc(formula * sizeof(int));	
	
	for (i = 1; i<=n; i++)
	{
		for(j=1; j<=n; j++)
		{
			scanf("%d",&x);
			if(i-j == 1)
			{
				A[i-2] = x;
			}else if(i-j == 0){
				A[(n-1)+(i-1)] = x;
			}else if(i-j == -1){
				A[((2*n) -1) + i-1] = x;
			}
		}
	}
	
	printf("Printing the array elements : \n");
		for (i = 1; i<=n; i++)
		{
			for(j=1; j<=n; j++)
			{
				
				if(i-j == 1)
				{
					printf("%d ",A[i-2]);
				}else if(i-j == 0){
					printf("%d ",A[(n-1)+(i-1)]);
				}else if(i-j == -1){
					printf("%d ",A[(2*n -1) + i-1]);
				}else{
					printf("0 ");
				}
		}
			printf("\n");
	}


	/**
	 * Set() method to set the element at the particular index
	*/
	printf("[+]Enter the indices and the element : ");
	scanf("%d %d %d",&i,&j,&x);

	if(i-j == 1)
	{
		A[i-2] = x;
	}else if(i-j == 0)
	{
		A[(n-1) + i-1] = x;
	}else if(i-j == -1)
	{
		A[((2*n)-1) - i-1] = x;
	}
	

	/**
	 * Get() methods is used to get the element from the particular element 
	*/
	printf("Enter the indices to get the element : ");
	scanf("%d %d",&i,&j);

	if(i-j == 1)
	{
		printf("\nThe element at index A[%d][%d] : %d \n",i,j,A[i-2]);
	}else if(i-j == 0)
	{
		printf("\n The element at index A[%d][%d] : %d \n",i,j,A[(n-1) + i-1]);
	}else if(i-j == -1)
	{
		printf ("\nThe element at index A[%d][%d] : %d \n",i,j,A[((2*n)-1)+i-1]);
	}else{
		printf("\nThe element at index A[%d][%d] : 0 \n",i,j);
	}
	
	return 0;
}
