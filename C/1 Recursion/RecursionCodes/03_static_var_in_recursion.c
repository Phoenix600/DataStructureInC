#include<stdio.h>


int Foo(int n)
{
	static int x = 0;
	if(n > 0)
	{
		x = x  + n;
		Foo(n-1);
	}
	return x;

}



int main()
{
	printf("%d\n",Foo(5));
	return 0;
}
