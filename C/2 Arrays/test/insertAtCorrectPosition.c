#include<stdio.h>

int main()
{
     int A[] = {6,8,3,10,15,2,9,17,5,8};
    // Smallest will have highest priority 
    // Highest Priority Element 
    
    int B[10];
    int k;

    for(int i=0; i < 10; i++)
    {
        k = i;
        while(A[i] < B[k-1] && i >0 && k>0)
        {
            B[k] = B[k-1];
            k--;
        }
        B[k] = A[i];
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ",B[i]);
    }
    
    
    return 0;
}