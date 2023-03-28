#include<stdio.h>


void reverseString2()
{
    char A[]="This is also sample string";
    char temp;
    int i,j;

    printf("Orignal String : %s\n",A);

    for (i = 0; A[i]!='\0'; i++){}
    i = i - 1;

    for ( j = 0;i>j; j++,i--)
    {
        temp = A[j];
        A[j] = A[i];
        A[i] = temp;
    }
    
    printf("Reversed String : %s\n",A);

}

int main()
{

    reverseString2();
    return 0;
}