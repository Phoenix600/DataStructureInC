#include<stdio.h>

void foo(int n) // This is the example of the tree recurison
{
	if(n < 0)
		return ;

	foo(n-1);
	printf("You called foo1() at the value of %d\n",n);
	foo(n-2);
	printf("You called foo2() at the value of %d\n",n);
	foo(n-3);
	printf("You called foo3() at the value of %d\n",n);
}

int main()
{
	foo(3);
	return 0;
}
