#include<stdio.h>

int expo(int n, int r)
{
	if(r == 0)
		return 1;
	return n * expo(n,r-1);
}

int main()
{
	printf("2^10 is equal to : %d\n",expo(2,10));
	return 0;
}
