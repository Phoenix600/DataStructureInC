#include<stdio.h>


// Another example of nested recurison 
int Foo(int n)
{
	if(n > 100)
	{
		printf("%d \n",n);
		return Foo(Foo(n-10));
	}
	return 0;
}

int main()
{
	Foo(290);
	return 0;
}
