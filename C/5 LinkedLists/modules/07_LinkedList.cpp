#include<stdio.h>
#include<stdlib.h>

struct Node 
{
    int data;
    int index;
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
    head->index = 0; 
    head->next = NULL;
    last = head;

    for(i=1; i<size; i++)
    {
        temp = (struct Node*)malloc(sizeof(struct Node));
        temp->data = A[i];
        temp->index = i;
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }

    return head;

}


void headFirstLinearSearch(struct Node**head, int key)
{
    struct Node* p = NULL;
    struct Node* q = NULL;
    struct Node* r = NULL;
    
    r = *head;
    p = *head;
    q = p;

    // Checking is the node is the first node 
    if(r->data == key)
        return;

    while(p)
    {
        if(p->data == key)
        {
            q->next = p->next;
            p->next = r;            
            r = p;
            *head = r;
            return;
        }
        q = p;
        p = p->next;
    }

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
    headFirstLinearSearch(&head,12);
    headFirstLinearSearch(&head,76);
    headFirstLinearSearch(&head,76);
    headFirstLinearSearch(&head,90);
    display(head);


    return 0;
}