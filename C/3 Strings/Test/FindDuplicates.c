#include<stdio.h>

int main ()
{
    char A[]="finding";

    int len = sizeof(A)/sizeof(A[0]);
    int count;

    for (int i = 0;i< len-1; i++)
    {
        if(A[i]!=0)
        {
            count = 1;
            for (int j = i+1;j < len; j++)
            {
                if(A[i] == A[j])
                {
                    count++;
                    A[j] = 0;
                }
            }
            
            if(count > 1)
            {
                printf("%c is occured %d times\n",A[i],count);
            }
        }
    }
    
    return 0;
}