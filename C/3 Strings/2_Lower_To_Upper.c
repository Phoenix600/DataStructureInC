#include<stdio.h>

int main()
{
    char name[] ="sheldon cooper";

    printf("Lowercase String :  %s\n",name);

    for (int i = 0; name[i]!='\0'; i++)
    {
        if(name[i]!=' ')name[i]-=32;   // This condition will skip the spaces 
    }

    printf("Uppercase String :  %s\n",name);
    
    return 0;
}