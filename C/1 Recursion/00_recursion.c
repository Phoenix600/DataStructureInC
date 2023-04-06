#include<stdio.h>

void printNumberSeries(int n)
{
	if(n==0)
		return ;
	printNumberSeries(n-1); // This is the example of the head recursion
	printf("%d ",n);
}

int main()
{
	printNumberSeries(5);
	return 0;
}
