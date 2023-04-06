#include<stdio.h>

int power(int m,int n)
{
    if(n == 0)
        return 1;
    return m* power(m,n-1);
}

void TOH_Iterative(char A, char B, char C, int nDisks)
{
    int total_moves = power(2,nDisks) - 1;
    for (int i = 1; i <=  total_moves; i++)
    {
        if(i % 3 == 1)
        {
            printf("S to D\n");
        }else if(i % 3 == 2)
        {
            printf("S to A\n");
        }else if(i % 3 == 0)
        {
            printf("A to D\n");
        }
    }
    
}

int main()
{
    TOH_Iterative('A','B','C',16);
    printf("\n\n%d",power(2,16)-1);
    return 0;
}