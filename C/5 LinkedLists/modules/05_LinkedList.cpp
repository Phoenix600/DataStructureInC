#include<stdio.h>
#include<stdlib.h>

// *** Linear Search In Linked List ***
// Implemenation of binary search for linked list is possible 
// but the not the efficient solution, since linked list doesn't 
// suppourt the indexing mechanism,thus jummping arround elements
// is not possible 

// One Extra Information is added in the Structre is Index
struct Node 
{
    int data;
    int index; 
    struct Node* next;
};

void display(struct Node* head)
{
    while(head)
    {
        printf("%d ",head->data);
        head = head->next;
    }
}

struct Node* create(int A[], int size)
{
    int i;
    struct Node* head = NULL;
    struct Node* temp = NULL;
    struct Node* last = NULL;

    head = (struct Node*)malloc(sizeof(struct Node));
    head->data = A[0];
    head->index = 0;
    head->next = NULL;
    last = head;

    for(i=1; i< size; i++)
    {
        temp = (struct Node*)malloc(sizeof(struct Node));
        temp->data = A[i];
        temp->index = i;
        temp->next  = NULL;
        last->next = temp;
        last = temp;
    }

    return head;
}

// *** Linear Search In Linked List  ***
struct Node* search(struct Node* head, int key)
{

    while(head)
    {
       if(head->data == key)
        {
            return head;
        }
       head = head->next; 
    }
    return NULL;
}

int main()
{
    int A[] = {12,3,56,123,7,23,1,8,13,5};
    int size = sizeof(A)/sizeof(A[0]);

    struct Node* head = create(A,size);
    struct Node* isFound = search(head,13);
    // isFound = search(head,99);

    if(isFound)
    {
        printf("%d is found at index %d",isFound->data,isFound->index);
    }else{
        printf("Element is not found in linked list");
    }

    return 0;
}