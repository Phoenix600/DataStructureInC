#include<stdio.h>
#include<stdlib.h>

struct Node 
{
    char data;
    struct Node* next;
};

struct Stack 
{
    struct Node* top;
};

int isFull()
{
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    int x = node ? 1 : 0;
    free(node);
    return x;
}

int isEmpty(struct Stack** S)
{
    return (*S)->top ? 0:1;   
}

void push(struct Stack** S, char x)
{
       
}

void create(struct Stack** S)
{
    (*S) = (struct Stack*)malloc(sizeof(struct Stack));
    (*S)->top = NULL;
}
