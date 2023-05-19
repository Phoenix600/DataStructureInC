#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct Node
{
    int key;
    struct Node* next;
};

struct Stack 
{
    struct Node* top;
};


void push(struct Stack** S,int x)
{
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));

    if(node == NULL)
        printf("Stack Overflow\n");
    else{
        node->key = x;
        node->next = (*S)->top;
        (*S)->top = node;
    }
}

int pop(struct Stack** S)
{
    struct Node* p;
    int x = -1;

    if((*S)->top == NULL)
    {
        printf("Stack Underflow\n");
    }  
    else 
    {
        p = (*S)->top;
        (*S)->top = (*S)->top->next;
        x = p->key;
        free(p);
    }
    return x;
}

int peek(struct Stack** S, int position)
{
    struct Node* p = (*S)->top;

    for(int i=0; p!=NULL && i<position-1; i++)
    {
        p = p->next;
    }
    if(p!= NULL)
        return p->key;
    else 
        return -1;
}

int top(struct Stack* S)
{
    if(S->top != NULL)
        return S->top->key;
    else 
        return -1;
}

int isEmpty(struct Stack* S)
{
    if(S->top == NULL)
        return 1;
    else 
        return 0;
}

int isFull()
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    int r = temp ? 1 :  0;
    free(temp);
    return r;
}

void create(struct Stack** S)
{
    (*S) = (struct Stack*)malloc(sizeof(struct Stack));
    (*S)->top = NULL;
}

void display(struct Stack* S)
{
    struct Node* temp = S->top;
    printf("Content of stack : ");
    while(temp)
    {
        printf("%d ",temp->key);
        temp = temp->next;
    }
    printf("\n");
}
int main()
{
    struct Stack* st = NULL;
    create(&st);
    push(&st,12);
    push(&st,13);
    push(&st,14);
    push(&st,15);
    push(&st,16);
    display(st);
    pop(&st);
    display(st);
    printf("Element at Position 2 is : %d\n",peek(&st,2));
    pop(&st);
    pop(&st);
    pop(&st);
    pop(&st);
    display(st);
    return 0;
}