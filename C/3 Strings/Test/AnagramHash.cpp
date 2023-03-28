#include<iostream>

int main()
{
    // char A[]="medical";
    // char B[]="decimal";

    // Moderate-Type-Solution 

    char A[]="axe";
    char B[]="aie";


    int i;

    int HASH[26]={0};

    for (i = 0; A[i]!='\0'; i++)
    {
        HASH[A[i]-97]++;
    }

    for (i = 0; B[i]!='\0'; i++)
    {      
        HASH[B[i]-97]--;  
        if( HASH[B[i]-97]< 0){break;}
    }

    if(HASH[B[i]-97] > 0)
    {
        printf("Two Strings are anagram");
    }else{
        printf("Two strings are not Anagram");
    }

/**
 * Time Complexity    : 0(N)
 * Space Complexity   : 0(N)
*/
    
    return 0;
}