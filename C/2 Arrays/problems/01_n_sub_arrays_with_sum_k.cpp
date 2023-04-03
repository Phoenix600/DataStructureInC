#include <algorithm>
#include<bits/stdc++.h>

using namespace std;

void subArray(int A[],int size)
{
	int count = 0;
	for(int i=0; i <  size; i++)
	{
		for(int j=i; j < size; j++)
		{
			count = 0;
			for(int k=i; k < j; k++)
			{
				count += A[k];
				printf("%d ",A[k]);
			}
			if(count == 3)
			{
				printf("Sum is %d\n",count);
			}
			printf("\n");
		}
	}
}

void countSubArraySumToK(int A[], int n)
{
	int count = 0;
	int sum = 0;

	for(int i=0; i<n; i++)
	{
		for(int j=i; j<n; j++)
		{
			sum = 0;
			for(int k=i; k<j; k++)
			{
				sum += A[k];
			}
			if(sum == 3)
			{
				count++;
			}
		}

	}
	printf("%d subarray whose sum is : %d ",count,3);

}

int main()
{
	
	int A[] = {1,2,3,-3,1,1,1,4,2,3};
	subArray(A,10);
	countSubArraySumToK(A,10);	
	return 0;
}


/*
 * The contiguous part of the arrays is called the sub-array
 */
