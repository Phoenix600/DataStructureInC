#include<stdio.h>
#include<stdlib.h>

struct Node 
{
	int data;
	struct Node* next;
};

void create(struct Node** head_ref, int A[], int size)
{
	struct Node* last;
	struct Node* t;

	*head_ref = (struct Node*)malloc(sizeof(struct Node));
	(*head_ref)->data = A[0];
	(*head_ref)->next = NULL;

	last = (*head_ref);

	for(int i=1; i<size; i++)
	{
		t = (struct Node*)malloc(sizeof(struct Node)); 
		t->data = A[i];
		t->next = NULL;

		last->next = t;
		last = t;
	}

}

struct Node*  transpositionLinearSearch(struct Node** head_ref, int key)
{
	struct Node* p = *head_ref;
	struct Node* q = NULL;
	struct Node* r = NULL;

	while(p)
	{
		if(p->data == key)
		{
			q->next = q->next->next;
			r->next = p;
			p->next = q;
			return p;
		}
		r = q;
		q = p;
		p = p->next;
	}

	return NULL;
}


void printLL(struct Node* head)
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
	int A[] = {12,4,19,13,7,4,2,1};	
	int size = sizeof(A)/sizeof(A[0]);

	struct Node* head = NULL;
	
	create(&head,A,size);
	printLL(head);
	struct Node* result = transpositionLinearSearch(&head,7);
	printLL(head);

	return 0;
}
