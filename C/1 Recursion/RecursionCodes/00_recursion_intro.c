#include<stdio.h>

void Foo(int n)
{
	// Base-Case 
	if(n==0)
		return ;
	printf("%d\n",n); // value is printed in calling phase
	Foo(n-1); // Recursive call 
}

int main()
{
	Foo(8);
	return 0;
}

// Notes 
// The blue print for writing the recursive function 
// 1. Base-Case [Which stops recursion]
// 2. Recursive function call [which will break the bigger 
// 	  problem into more simpler one than previous]
