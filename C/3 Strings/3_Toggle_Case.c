#include<stdio.h>

int main()
{
    /**
     * TOggling : 
     *  if character is lowercase change it to the uppercase
     *  if character is uppercase chnage it to the lowercase 
    */
    char A[]="wElCoMe"; 

    printf("Orignal String : %s\n",A);

    for (int i = 0; A[i]!='\0'; i++)
    {
        if(A[i] >= 65 && A[i] <= 90 && A[i]!=' ')
        {
            A[i]+=32;
        }else if(A[i]>=97 && A[i] <= 122 && A[i]!=' ')
        {
            A[i]-=32;
        }
    }
    
    printf("Toggled String : %s\n",A);
    
    return 0;
}