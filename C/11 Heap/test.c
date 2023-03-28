#include<stdio.h>

#define MAXSIZE 8

struct Heap
{
    int A[25];
    int length;
    int capacity;
};


int main()
{
    struct Heap H;
    H.capacity = 25;
    H.length = 1;
    printf("%d",H.capacity);
}