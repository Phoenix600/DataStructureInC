#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int key;
    struct Node* next;
};

struct Node* create(int A[], int size)
{
    struct Node* head = NULL;
    struct Node* last = NULL;
    struct Node* temp = NULL;

    head = (struct Node*)malloc(sizeof(struct Node));
    head->key = A[0];
    head->next = NULL;
    last = head;

    for(int i=1; i<size; i++)
    {
        temp = (struct Node*)malloc(sizeof(struct Node));
        temp->key = A[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
    return head;
}

void display(struct Node* node)
{
    if(node == NULL)
        return;
    printf("%d ",node->key);
    return display(node->next);
}

int main()
{
    int A[] = {1,2,3,4,5,6,7,8};
    int size = sizeof(A)/sizeof(A[0]);

    struct Node* head = create(A,size);
    display(head);
    return 0;
}