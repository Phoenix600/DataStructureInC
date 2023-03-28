#include<iostream>

int main()
{
    char A[] = "finding";

    int len = sizeof(A)/sizeof(A[0]);
    int count;

    for (int i = 0; i < len-2; i++)
    {
        if(A[i] != 0)
        {
        count = 1;
        for (int j = i+1; j < len-1; j++)
        {
            if(A[i] == A[j])
            {
                A[j] = 0;
                count++;
            }
        }

        if(count  > 1)
        {
            printf("%c is occured %d times\n",A[i],count);
        }

        }
        
    }
    

    return 0;
}