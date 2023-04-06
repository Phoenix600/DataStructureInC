#include <stdio.h>

// Binary Heap Data Structure
struct MaxHeap
{
    int A[10];
    int length;
    int capacity;
};

void deletion(struct MaxHeap* H)
{
    
}

/**
 * Insert function compares the element to be inserted in
 * the heap with it's parent, if key-element is greater than
 * the parent then move the parent to location of child
 */
void insert(struct MaxHeap* H, int index){
    int i = index;
    int key = H->A[i];

    while(key > H->A[i/2] && i > 1)
    {
        H->A[i] = H->A[i/2];
        i = i/2;
    }
    H->A[i] = key;
}

void printHeap(struct MaxHeap H)
{
    for(int i=0; i<H.length; i++)
    {
        printf("%d ",H.A[i]);
    }
    printf("\n");
}

void createMaxHeap(struct MaxHeap* H)
{
    for(int i=1; i<= H->length; i++)
    {
        insert(H,i);
    }
}

int main()
{
    struct MaxHeap H = {{0, 5, 10, 30, 20, 35, 40, 15}, 7, 10};

    
    printHeap(H);
    createMaxHeap(&H);
    printHeap(H);

    return 0;
}