#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int key;
    struct Node* next;
};

struct Node* create(int A[],int size)
{
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));   
    struct Node* temp = NULL;
    struct Node* last = NULL;

    node->key = A[0];
    node->next = NULL;
    last = node;

    for(int i=1; i < size; i++)
    {
        temp = (struct Node*)malloc(sizeof(struct Node));
        temp->key = A[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
  return node;
} 

void display(struct Node* head)
{
    for(;head!=NULL;)
    {
        printf("%d ",head->key);
        head = head->next;
    }
}

int main()
{
    int A[] = {12,13,14,15,16,17,18};
    int size = sizeof(A)/sizeof(sizeof(A[0]));

    struct Node* head = create(A,size);
    display(head);

    return 0;
}