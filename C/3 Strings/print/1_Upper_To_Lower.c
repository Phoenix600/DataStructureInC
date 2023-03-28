#include<stdio.h>

int main()
{
    char A[]="SHELDON COOPER";

    printf("[+]Uppercase String : %s\n",A);

   for (int i = 0; A[i]!='\0'; i++)
   {
        if(A[i]!=' ')A[i] = A[i] + 32; // this will skip the space 
   }

   printf("[+]Lowercase String : %s\n",A);
    


    return 0;
}