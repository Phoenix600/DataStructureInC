#include <stdio.h>
#include <stdlib.h>


struct Node 
{
    int data;
    struct Node* next;
};

struct Node* create(int A[], int size)
{
    struct Node* head = NULL;
    struct Node* temp = NULL;
    struct Node* last = NULL;

    head = (struct Node*)malloc(sizeof(struct Node));
    head->data = A[0];
    head->next = NULL;
    last = head;

    for(int i=0; i<size; i++)
    {
        temp = (struct Node*)malloc(sizeof(struct Node));
        temp->data = A[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
    return head;
}

int getMax(struct Node* head)
{
    int MAX = head->data;

    while(head)
    {
        if(MAX < head->data)
            MAX = head->data;       
        head = head->next;
    }

    return MAX;
}

void display(struct Node* head)
{
    while(head)
    {
        printf("%d ",head->data);
        head = head->next;
    }
}

int main()
{
    int A[] = {12,34,45,1,67,122,8,12};
    int size = sizeof(A)/sizeof(A[0]);

    struct Node* head = create(A,size);
    int max_element = getMax(head);

    printf("Max element in linked list : %d",max_element);

    return 0;
}