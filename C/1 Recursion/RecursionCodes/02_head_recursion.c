#include<stdio.h>

void Foo(int n)
{
	if(n > 0)
	{
		Foo(n-1); // When the first instruction of recursion function is a 
				  // recursive call then it is called head-recursion
		printf("%d\n",n);
	}
}

int main()
{
	Foo(10);
	return 0;
}
