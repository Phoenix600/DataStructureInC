#include<stdio.h>

int main()
{
    /**
     * Invalid string as it contains the special 
     * symbol @
    */
    char A[] = "sheldon@123"; 
    char B[] ="sheldon_283_@12"; // try for this one 
    int isValid = 1;
    
    for (int i = 0; A[i]!='\0'; i++)
    {
        if(!(A[i]>=65 && A[i]<=90) && !(A[i]>=97 && A[i]<=122) && !(A[i]>=48 && A[i]<=57))
        {
            isValid=0;
            break;
        }
    }
    
    if(isValid)
    {
        printf("%s is valid username\n",A);
    }
    else{
        printf("%s is not a valid username\n",A);
    }

    return 0;
}