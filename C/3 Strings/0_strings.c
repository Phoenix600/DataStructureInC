#include<stdio.h>

// Calculating the length of the characters in the string 
int main()
{
    char name[] ="Sheldon Cooper";
    int len=0; 

    for (int i = 0; name[i]!='\0'; i++)
    {
        if(name[i]!=' ')len++; // this will skip the spaces 
    }

    printf("The lenght of the string is : %d\n",len);
    


    return 0;
}