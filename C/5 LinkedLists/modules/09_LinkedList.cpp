#include<stdio.h>
#include<stdlib.h>

struct Node 
{
    int data;
    struct Node* next;
};

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

// Insert Before the first node in the linked list  
void insertAtBegining(struct Node** head, int key)
{
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = key;
    node->next = NULL;

    node->next = *head;
    *head = node;
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


int main()
{
    int A[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(A)/sizeof(A[0]);
    
    struct Node* head = create(A,size);
    display(head);
    insertAtBegining(&head,0);
    display(head);
    
}