#include "../header/LinkedList.h"

void create(struct Node** head_ref, int A[], int size)
{

}

void display(struct Node* head)
{
    while(head)
    {
        printf("%d->",head->next);
        head = head->next;
    }
}