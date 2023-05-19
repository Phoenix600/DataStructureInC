#include<stdio.h>
#include<stdlib.h>


// Stack using the Array Reperesentation 
struct Stack
{
    int size;
    int top;
    int* A;
};


void push(struct Stack** st, int x)
{
    if((*st)->top == (*st)->size-1)
        printf("Stack Overflow\n");
    else{
        (*st)->top++;
        (*st)->A[(*st)->top] = x;
    }
}

int pop(struct Stack** st)
{
    int poppedElement  = -1;
    if((*st)->top == -1)
    {
        printf("Stack Underflow\n");
        return poppedElement;
    }
    poppedElement = (*st)->A[(*st)->top];
    (*st)->top--;
    return poppedElement;
}

int peek(struct Stack* st,int position)
{
    if(st->top-position+1 < 0)
        return -1;
    else 
        return st->A[st->top-position+1];
}

// Returns the topmost element of the stack 
int stackTop(struct Stack* st)
{
    if(st->top == -1)
        return -1;
    else 
        return st->A[st->top];
}

int isEmpty(struct Stack* st)
{
    if(st->top == -1)
        return 1;
    else 
        return 0;   
}

int isFull(struct Stack* st)
{
    if(st->top == st->size-1)
        return 1;
    else 
        return 0;
}

void display(struct Stack* st)
{
    int index = st->top;
    printf("Content of the stacks : ");
    while(index != -1)
    {
        printf("%d ",st->A[index--]);
    }
    printf("\n");
}

void create(struct Stack** st, int size)
{
    *st = (struct Stack*)malloc(sizeof(struct Stack));
    (*st)->top = -1;
    (*st)->size = size;
    (*st)->A = (int*)malloc(size*sizeof(int));
}

int main()
{
    struct Stack* st;
    create(&st,10);

    printf("Stack Size : %d\n",st->size);
    printf("Stack Top  : %d\n",st->top);

    push(&st,12);
    push(&st,11);
    push(&st,10);
    push(&st,9);
    push(&st,8);
    push(&st,7);
    push(&st,6);
    push(&st,5);
    push(&st,4);
    push(&st,3);

    display(st);

    printf("Removed Element from the stack is : %d\n",pop(&st));

    display(st);

    push(&st,1);

    display(st);
    
    printf("Stack is empty or not : %d\n",isEmpty(st));
    printf("Stack is Full or not : %d\n",isFull(st));

    printf("Element at index %d is %d\n",5,peek(st,5));


    return 0;
}