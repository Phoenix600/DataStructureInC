#include<stdio.h>

void isAnagram3(char A[], char B[],int lenA,int lenB)
{
    /**
     * Moderatly faster method than two previous methods
     * The major drawback of this method is, it consumes
     * extra memory size for hash-table
    */
    int HASH[25] = {0}; // Hash Table 
    int i,j;

    if(lenA != lenB)
    {
        printf("Stirngs are not anagram\n");
        return;
    }
    for (i = 0;A[i]!='\0'; i++)
    {
        HASH[A[i]-97]++;
    }

    for (j = 0; B[j]!='\0'; j++)
    {
        HASH[B[j]-97]--;
        if(HASH[B[j]-97] < 0){break;}
    }
    
    if(HASH[B[j]-97] < 0)
    {
        printf("Strings are not anagram\n");
    }else{
        printf("Strings are anagram\n");
    }
        

}

int main()
{
    char A[] = "cooper";
    char B[] = "poocer";


    int lenA = sizeof(A)/sizeof(A[0]);
    int lenB = sizeof(B)/sizeof(B[0]);

    isAnagram3(A,B,lenA,lenB);

    return 0;
}