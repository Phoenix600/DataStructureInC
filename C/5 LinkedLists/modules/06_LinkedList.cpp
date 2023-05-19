#include<stdio.h>
#include<stdlib.h>

// This file, is left blank for the Transposition Linear Search 
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

    for(i=1; i< size; i++)
    {
        temp = (struct Node*)malloc(sizeof(struct Node));
        temp->data = A[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }

    return head;
}

struct Node* searchTranspose(struct Node** head, int key)
{
    struct Node* p = NULL;
    struct Node* q = NULL;
    struct Node* r = NULL;

    p = *head;

    while(p)
    {
        if(p->data == key)
        {
            if(q!=NULL && r!= NULL)
            {
                q->next = p->next ;
                r->next = p;
                p->next = q;
                return p;
            }
            return p;
        }
         r = q;
         q = p;
         p = p->next;
    }

    return NULL;

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
    int A[] = {22,12,14,15,16,76,23,90};
    int size = sizeof(A)/sizeof(A[0]);

    struct Node* head = create(A,size);

    display(head);
    searchTranspose(&head,90);
    // searchTranspose(&head,16);
    display(head);

    return 0;
}