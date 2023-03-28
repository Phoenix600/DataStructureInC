#include<stdio.h>

int main()
{
    char A[]="axe";
    char B[]="xae";

    int HASH=0; //   0000 0000 0000 0000 0000 0000 0000 0000
    int H=1;    //   0000 0000 0000 0000 0000 0000 0000 0001

    for (int i = 0; A[i]!='\0'; i++)
    {
        H = 1;
        H = H << A[i]-97;
        HASH = HASH | H;
    }

    for (int i = 0; B[i]!='\0'; i++)
    {
        H = 1;
        H = H << B[i]-97;
        if((HASH&H)<0)
        {break;}
    }

    if((HASH & H)>0)
    {
        printf("Strings are anagram...\n");
    }else{
        printf("Strings are not anagram...\n");
    }    

    return 0;
}