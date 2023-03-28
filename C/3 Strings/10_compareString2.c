#include<stdio.h>

void compareString2(char S1[], char S2[])
{
   int i,j;

    for ( i = 0,j=0; S1[i]=='\0'; i++,j++)
    {
        if(S1[i]!=S2[j])
        {
            break;
        }
    }

    if(S1[i] == S2[j])
    {
        printf("Strings are equal.\n");
    }else if(S1[i] > S2[j])
    {
        printf("String-1 is greater than String-2.\n");
    }else{
        printf("String-2 is greater than String-1.\n");
    }
    

}

int main()
{
    char A[]="hello";
    char B[]="hello";
    compareString2(A,B);

    char C[]="it's so funny,how most blessed ones are the most cursed ones";
    char D[]="no ones cares, how you feel, its all about making dollar bills"; // :-)
    compareString2(C,D);
    
    return 0;
}