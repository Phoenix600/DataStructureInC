#include<stdio.h>


// This is the example of the nested recurison
int Foo(int n)
{
	if(n < 100)
		return 0;
	printf("%d \n",n);
	return Foo(Foo(n-11));  // In some langauges, this passed parameter is called as callback 

}

int main()
{
	Foo(299);
	return 0;
}
