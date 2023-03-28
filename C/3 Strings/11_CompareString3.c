#include<stdio.h>

int HASH[26] = {0};

void compareString3(char A[], char B[])
{
    int i,j;

    for ( i = 0;A[i]!='\0'; i++)
    {
        HASH[A[i]-97]++;
    }

    for ( j = 0; B[j]!='\0'; j++)
    {
        HASH[B[j]-97]--;

        if(HASH[B[j]-97] < 0)
        {
            break;
        }

    }
    if(HASH[B[j]-97] < 0)
    {
        printf("Strings are not equal\n");
    }else{
        printf("Strings are equal\n");
    }
}

int main()
{
    char A[]="hello";
    char B[]="hello";
    compareString3(A,B); // Strings are equal s

    char C[] = "friend";
    char D[] = "stabber";
    compareString3(C,D);  // Strings are not equal;

    return 0;
}