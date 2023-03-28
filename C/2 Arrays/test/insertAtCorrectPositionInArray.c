#include<stdio.h>

struct Array
{
    int A[10];
    int size;
    int length;
};

void insertInSortedPostion(struct Array* A, int key)
{
        int k;
        k = A->length;
        while(A->A[k-1] > key && k>0) //#TODO: try with >= for first condition
        {
            A->A[k] = A->A[k-1];
            k--;
        }
        A->A[k] = key;
        A->length++;
    
}

void DeleteElementFromEnd(struct Array* A)
{
    // Marking Empty Place as -1 
    // Reducing the length by one 
    A->A[A->length--] = -1;
}


void Display(struct Array A)
{
    for(int i=0; i< A.length; i++)
    {
        printf("%d ",A.A[i]);
    }
    printf("\n");
}

int main()
{
    /**
     * =========================================
     * | A[25] = [0,0,0,0,0,0,0,0,0,0]
     * |          ^
     * |          |
     * |        length
     * |=========================================
     * | size = 10 
     * |=========================================
     * | lenght=0;
     * |==========================================
    */
    struct Array B = {{0},10,0};
    int C[] = {6,8,3,10,15,2,9,17,5,8};

    for (int i = 0; i < 10; i++)
    {
        insertInSortedPostion(&B,C[i]);
    }
    
    // Display(B);
    DeleteElementFromEnd(&B);
    Display(B);

    return 0;
}