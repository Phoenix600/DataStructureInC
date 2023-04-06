#include<stdio.h>

char functions[256][256] = {
    "create",
    "display"
};


void menu()
{
    int choice = 99;
    do{
        for (int i = 0; i <4; i++)
        {
            printf("%s \n",functions[i]);
        }
    }while(choice!=99);

}

int main()
{
    menu();
    return 0;
}