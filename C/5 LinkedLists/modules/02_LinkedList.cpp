#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Node*  create(int A[], int size)
{
    struct Node* head = NULL;
    struct Node* temp = NULL;
    struct Node* last = NULL;

    head = (struct Node*)malloc(sizeof(struct Node));
    head->data = A[0];
    head->next = NULL;
    last = head;

    for(int i=1; i<size; i++)
    {
        temp = (struct Node*)malloc(sizeof(struct Node));
        temp->data = A[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }

    return head;
}

int countNode(struct Node* node)
{
    int i = 0;
    while (node!=NULL)
    {
        i++;
        node = node->next;
    }
    
    return i;
}

int main()
{
    int A[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(A)/sizeof(A[0]);

    struct Node* node = create(A,size);
    int count = countNode(node);

    printf("Number Of Nodes In Linked List : %d \n",count);
    
    return 0;
}