#include<stdio.h>

void perm(char S[], int k)
{
    static char R[10] = {0};
    static int A[10] = {0};

    if(S[k] == '\0')
    {
        R[k] = '\0';
        printf("%s\n",R);
    }else{
        for (int i = 0; S[i]!='\0'; i++)
        {
            if(A[i] == 0)
            {
                A[i] = 1;
                R[k] = S[i];
                perm(S,k+1);
                A[i] = 0;
            }
        }
        
    }
}

int main()
{
    char S[]="ABC";
    perm(S,0);
    return 0;
}