#include<stdio.h>

void compareString(char S1[], char S2[])
{
    int isSame = 1;
    for (int i = 0, j=0; S1[i] != '\0'; i++,j++)
    {
        if(S1[i] != S2[j])
        {
            isSame = 0;
            break;
        }
    }
    
    if(isSame)
    {
        printf("Strings are same\n");
    }else{
        printf("Strings are not same\n");
    }

}

int main()
{

    return 0;
}