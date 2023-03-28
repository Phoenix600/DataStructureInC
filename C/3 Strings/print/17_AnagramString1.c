#include<stdio.h>

/**
 * Slower Method
 * This methods is only applicable for the string containing 
 * the unqiue characters 
*/
void isAnagram1(char A[], char B[], int lenA, int lenB)
{
    int i;
    int j;
    int isAnagram = 0;
    
    for ( i = 0; A[i]!='\0' && lenB == lenA; i++)
    {
        isAnagram = 0;
        for ( j = 0; B[j]!='\0'; j++)
        {
            if(A[i] == B[j])
            {
                isAnagram = 1;
                break;
            }
        }

        if(!isAnagram){break;}
    }

    if(isAnagram)
    {
        printf("Two string are anagram...\n");
    }else{
        printf("Two strings are not anagram...\n");
    }  
       
}

int main()
{
    char A[]="cooper";
    char B[]="poocer";
    
    int lenA = sizeof(A)/sizeof(A[0]);
    int lenB = sizeof(B)/sizeof(B[0]);

    isAnagram1(A,B,lenA,lenB);


    char C[] = "coper";
    char D[] = "pocer";

    isAnagram1(C,D,sizeof(C)/sizeof(C[0]),sizeof(D)/sizeof(D[0]));

    return 0;
}