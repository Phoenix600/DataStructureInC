#include<stdio.h>


void reverseString1()
{
    char A[] = "This Is Sample String";
    char B[25];
    int i,j;

    printf("Orignal string : %s\n",A);

    for ( i = 0; A[i]!='\0'; i++){}
    
    i = i-1; // This skips the NULL character 

    for ( j = 0; i >=0; j++,i--)
    {
        B[j]=A[i];
    }

    B[j]='\0';
    
    printf("Reversed String : %s\n",B);
    
}

int main()
{
    reverseString1();       
    return 0;
}