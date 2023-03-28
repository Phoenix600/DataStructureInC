#include<stdio.h>

// Easy way 
void isPalimdrome1(char A[])
{
    int i,j;
    char B[255];

    for ( i = 0; A[i]!='\0'; i++){} // Reaching the end of string 
    i = i - 1;      // Reaching to the last char.(Just before the end of string)

    // Copying the string A to B in reverese fashon 
    for (j = 0; i >= 0; i--,j++)
    {
        B[j] = A[i];
    }
    B[j] = '\0';

    // Checking the strings, comparing them 
    for (i = 0, j=0; A[i]!='\0' && B[j]!='\0'; i++,j++)
    {
        if(A[i]!= B[j]){break;}
    }
    
    if(A[i] == B[j])
    {
        printf("String is palindrome\n");
    }else{
        printf("String is not palindrome\n");
    }
}


int main()
{
    char A[] = "racecar";
    isPalimdrome1(A);

    char B[] = "friend";
    isPalimdrome1(B);

    char C[] = "lil";
    isPalimdrome1(C);

    char D[] ="madam";
    isPalimdrome1(D);

    return 0;
}