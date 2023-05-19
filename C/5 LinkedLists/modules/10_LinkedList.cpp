#include<stdio.h>
#include<stdlib.h>

struct Node 
{
    int data;
    struct Node* next;
};

// Create the linked List From The Array 
struct Node* create(int A[], int size)
{
    int i;
    struct Node* head = NULL;
    struct Node* temp = NULL;
    struct Node* last = NULL;

    head = (struct Node*)malloc(sizeof(struct Node));
    head->data = A[0];
    head->next = NULL;
    last = head;

    for(i=1; i<size; i++)
    {
        temp = (struct Node*)malloc(sizeof(struct Node));
        temp->data = A[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;        
    }

    return head;
}

void display(struct Node* head)
{
    while(head)
    {
        printf("%d ",head->data);
        head = head->next;
    }
    printf("\n");
}

void insertAtPosition(struct Node** head, int key,int index)
{
    struct Node* node = NULL;
    struct Node* p = *head;

    node = (struct Node*)malloc(sizeof(struct Node));
    node->data = key;
    
    for(int i=0; i< index-1; i++)
    {
        p = p->next;
    }

    node->next = p->next;
    p->next = node;
}

int main()
{
    return 0;
}