#include<stdio.h>

void FooRecursive(int n)
{
	if(n>0)
	{
		printf("%d \n",n);
		FooRecursive(n-1);
	}
}


void FooIterative(int n)
{
	while(n>0)
	{
		printf("%d\n",n);
		n--;
	}
}

int main()
{

	printf("Printing the number sequence using the recursion : \n");
	FooRecursive(10);

	printf("Printing the number sequence using the while-loop : \n");
	FooIterative(10);


	return 0;
}
