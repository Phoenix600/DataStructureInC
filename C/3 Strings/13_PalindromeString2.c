#include<stdio.h>


// Faster Method
void isPlaindrome2(char A[])
{
   int i,j;
   int isPalindrome = 1;

   //Traversing till the end of the string 
   for ( j = 0; A[j]!='\0'; j++){}
   j = j-1; // Reaching the last character 

    for (i = 0; j>i; i++,j--)
    {
        if(A[i] != A[j])
        {
            isPalindrome = 0;
            break;
        }
    }
    
    if(isPalindrome)
    {
        printf("String is palindrome\n");
    }else{
        printf("String is not palindrome\n");
    }

}

int main()
{
    char A[]="racecar";
    isPlaindrome2(A);    
    return 0;
}