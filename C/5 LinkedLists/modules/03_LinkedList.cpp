#include<stdio.h>
#include<stdlib.h>

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

    head         = (struct Node*)malloc(sizeof(struct Node));
    head->data   = A[0];
    head->next   = NULL;
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

int getSum(struct Node* head)
{
    int sum = 0;
    while(head){sum += head->data;head = head->next;}
    return sum;    
}

int main()
{
    int A[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(A)/sizeof(A[0]);

    struct Node* head = create(A,size);
    int sum = getSum(head);

    printf("The Sum Of Nodes In Linked List : %d\n",sum);

    return 0;
}