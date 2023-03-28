#include <stdio.h>
void swap(int *A, int *B)
{
    int temp = *A;
    *A = *B;
    *B = temp;
}
void heapify(int A[], int lastIndex)
{
    int len = lastIndex;
    len = len/2;
    int i, j;
    
    while (len >= 1)
    {
        i = len;
        j = i * 2;
        while (j <= lastIndex)
        {
            j = i * 2;
            if (A[j] < A[j + 1])
            {
                j = j + 1;
            }
            if (A[i] < A[j])
            {
                swap(&A[i], &A[j]);
                i = j;
                j = j * 2;
            }
            else
            {
                break;
            }
        }
        len--;
    }
}
void printHeap(int A[], int lastIndex)
{
    for (int i = 1; i <= lastIndex; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
int main()
{
    int A[] = {0, 10, 20, 30, 25, 5, 40, 35};
    printHeap(A, 7);
    heapify(A, 7);
    printHeap(A, 7);
    return 0;
}