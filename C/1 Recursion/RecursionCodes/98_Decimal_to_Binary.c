#include<stdio.h>

int Binary[8] = {0};

void init()
{
    for (int i = 0; i < 8; i++)
    {
        Binary[i] = 0;
    }
    
}

void decimalToBinary(int n)
{
    static int  index = 0;
    if(n == 0)
    {
        Binary[0] = 0;
        return ;
    }
    
    Binary[index] = n%2;
    index++;
    decimalToBinary(n/2);
}

void printBinary()
{
    for (int i = sizeof(Binary)/sizeof(Binary[0])-1; i >= 0; i--)
    {
        printf("%d",Binary[i]);
    }
    printf("\n");   

    init();
}


int main()
{
    decimalToBinary(233);
    printBinary(); 


    decimalToBinary(64);
    printBinary(); 



    return 0;
}