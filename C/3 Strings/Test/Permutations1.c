#include<stdio.h>

void permutations(char S[], int k)
{
    static int A[10]={0};
    static char R[10]={0};
    
    if(S[k] == '\0')
    {
        R[k] = '\0';
        printf("%s\n",R);
    }else{
        for (int i = 0; S[i]!='\0'; i++)
        {
            if(A[i]==0)
            {
                A[i] = 1;
                R[k] = S[i];
                permutations(S,k+1);
                A[i] = 0;                
            }
        }
        
    }
}

int main()
{
    permutations("ABC",0);
    return 0;
}