#include<stdio.h>

void isAnagram2(char A[], char B[],int lenA, int lenB)
{
    int isAnagram = 0;
    
    for (int i = 0;A[i]!='\0'; i++)
    {
        isAnagram = 0;
        for (int j=0;B[j]!='\0'; j++)
        {
            if(A[i] == B[j])
            {
                isAnagram = 1;
                B[j] = -1; // this will mark the elements to -1, to handle duplicates
                break;
            }
        }
        if(!isAnagram){break;}
    }

    if(isAnagram)
    {
        printf("Strings are anagram\n");
    }else{
        printf("String are not anagram\n");
    }

}

int main()
{
    char A[] = "cooper";
    char B[] = "poocer";
    int lenA = sizeof(A);
    int lenB = sizeof(B);
    isAnagram2(A,B,lenA,lenB);

    char R[] = "pranay";
    char S[] = "jarred";
    int lenR = sizeof(R);
    int lenS = sizeof(S);
    isAnagram2(R,S,lenR,lenS);
    
    return 0;
}