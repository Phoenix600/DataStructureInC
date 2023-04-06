#include<stdio.h>

int Sum(int n)
{
	if(n==0)
		return 0;
	return n + Sum(n-1);
}

int main()
{
	printf("The sum of first 10 natural number is %d\n",Sum(10));
	return 0;
}
