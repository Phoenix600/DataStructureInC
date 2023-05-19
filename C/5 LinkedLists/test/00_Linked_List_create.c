#include<stdio.h>
#include<stdlib.h>

struct Node 
{
	int data;
	struct Node* next;
};

void createLinkedList(struct Node** head_ref,int A[], int size)
{
	struct Node* last;
	struct Node* t;

	*head_ref = (struct Node*)malloc(sizeof(struct Node));
	(*head_ref)->data = A[0];
	(*head_ref)->next = NULL;

	last = *head_ref;

	for(int i=1; i < size; i++)
	{
		t = (struct Node*)malloc(sizeof(struct Node));
		t->data = A[i];
		t->next = NULL;

		last->next = t;
		last = t;
	}

}


void displayLinkedList(struct Node* head)
{
	while(head)
	{
		printf("%d->",head->data);
		head = head->next;
	}
	printf("NULL\n");
}


int main()
{
	struct Node* head = NULL;
	int A[] = {3,5,7,10,15};
	int size = sizeof(A)/sizeof(A[0]);

	createLinkedList(&head,A,size);
	displayLinkedList(head);

	return 0;
}
