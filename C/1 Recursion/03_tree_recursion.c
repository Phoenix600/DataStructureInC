#include<stdio.h>

void FooA(int n);

void FooB(int n)
{
	if(n>0)
	{
		printf("You just called FooB() for : %d\n",n);
		FooA(n/2);
	}

}

void FooA(int n)
{
	if(n>0)
	{
		printf("You just called FooA() for : %d\n",n);
		FooB(n/2);
	}
}


int main()
{
	FooA(24);
	return 0;
}
