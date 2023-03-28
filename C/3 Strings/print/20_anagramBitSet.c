#include<stdio.h>

void isAnagram4(char A[], char B[])
{
    int HASH = 0; // 0000 0000 0000 0000 0000 0000 0000 0000
    int H = 0;   //  0000 0000 0000 0000 0000 0000 0000 0000

    for (int i = 0; A[i]!='\0'; i++)
    {
        H = 1;   // 0000 0000 0000 0000 0000 0000 0000 0001
        H = H << (A[i]-97);
        HASH = HASH | H; // ORing (Merging Operation)
    }

    for (int i = 0; B[i]!='\0'; i++)
    {
        H = 1;
        H = H << B[i]-97;
        if((HASH & H) < 1){break;} // ANDing (Masking Opertion )
    }
    
    if((HASH & H) > 0)
    {
        printf("Strings are anagram\n");
    }else{
        printf("Strings are not anagram\n");
    }


    
}
int main()
{
    char A[]="decomal";
    char B[]="medical";

    isAnagram4(A,B);

    return 0;
}