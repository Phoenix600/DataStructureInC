#include<stdio.h>

void printReverseSeries(int n)
{
	if(n==0)
		return ;
	printf("%d ",n);
	printReverseSeries(n-1); // This is the example of the tail recurison
}

int main()
{
	printReverseSeries(10);
	return 0;
}

