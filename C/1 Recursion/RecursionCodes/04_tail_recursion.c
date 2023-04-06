/**
 * If a recursive function calling itself and that recurisve call is a
 * last statement in the recursive function, then it is called as tail-
 * recursion 
*/

#include<stdio.h>

int Foo(int n)
{
    static int x = 0;

    if(n > 0)
    {
        x = x + n;
        Foo(n-1);
    }
    return x;

}

int main()
{
    printf("The sum of first 10 natural number is : %d\n",Foo(10));
    return 0;
}