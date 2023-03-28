#include<stdio.h>

struct Array
{
    int A[10];
    int lenght;
    int size;
};

void deleteLowestElement(struct Array* A)
{
    int min = A->A[0];
    int k = 0;

    for(int i=0; i < A->lenght; i++)
    {
        if(min >= A->A[i])
        {
            min = A->A[i];
            k = i;
        }
    }

    A->lenght--;
    for(int i=k; k < A->lenght; k++)
    {
        A->A[k] = A->A[k+1]; 
    }
    

}

void display(struct Array A)
{
    for (int i = 0; i < A.lenght; i++)
    {
        printf("%d ",A.A[i]);
    }
    printf("\n");
}

int main()
{
    struct Array B = {{6,8,3,10,15,2,9,17,5,8},10,10};

    display(B);
    deleteLowestElement(&B);
    display(B);
    deleteLowestElement(&B);
    display(B);
    deleteLowestElement(&B);
    display(B);
    deleteLowestElement(&B);
    display(B);
    deleteLowestElement(&B);
    display(B);
    deleteLowestElement(&B);
    display(B);
    deleteLowestElement(&B);
    display(B);
    deleteLowestElement(&B);
    display(B);
    deleteLowestElement(&B);
    display(B);
    deleteLowestElement(&B);
    display(B);

    return 0;
}
