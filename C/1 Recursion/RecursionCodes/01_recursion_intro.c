#include<stdio.h>

void Foo(int n)
{
	if(n==0)
		return ;
	Foo(n-1);
	printf("%d\n",n); // value is printed in the returning phase 
}

int main()
{
	Foo(8);
	return 0;
}
