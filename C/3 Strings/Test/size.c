#include<stdio.h>

int main()
{
    char A[]="HELLO";
    char B[]="HELLO";

    printf("%ld\n",(int)sizeof(A)/sizeof(A[0]));
    printf("%d\n",sizeof(A));

    return 0;
}