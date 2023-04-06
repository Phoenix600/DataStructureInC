#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	struct Node *next;
};

void insertAtCorrectPosition(struct Node **head_ref, int key)
{
	struct Node *p = NULL;
	struct Node *q = NULL;
	struct Node *temp;

	q = *head_ref;
	p = *head_ref;

	temp = (struct Node*)malloc(sizeof(struct Node));
	temp->data = key;
	temp->next = NULL;

	if(*head_ref == NULL || (*head_ref)->data >= key)
	{
		temp->next = *head_ref;
		*head_ref = temp;
		return ;
	}else{

		while(p->data < key && p->next != NULL)
		{
			/* q = p; */	
			p = p->next;
		}
		
		q = p;
		p = p->next;
		
		q->next = temp;
		temp->next = p;
	}

}

void create(struct Node **head_ref, int A[], int size)
{
	struct Node *last;
	struct Node *t;

	(*head_ref) = (struct Node *)malloc(sizeof(struct Node));
	(*head_ref)->data = A[0];
	(*head_ref)->next = NULL;

	last = *head_ref;

	for (int i = 1; i < size; i++)
	{
		t = (struct Node *)malloc(sizeof(struct Node));
		t->data = A[i];
		t->next = NULL;

		last->next = t;
		last = t;
	}
}

void display(struct Node *head)
{
	while (head)
	{
		printf("%d ", head->data);
		head = head->next;
	}
	printf("\n");
}

int main()
{
	int A[] = {2, 6, 10, 15, 20, 25, 30};
	int size = sizeof(A) / sizeof(A[0]);

	struct Node *head = NULL;

	create(&head, A, size);

	display(head);
	insertAtCorrectPosition(&head, 99);
	insertAtCorrectPosition(&head, 0);
	insertAtCorrectPosition(&head, -1);
	insertAtCorrectPosition(&head, 18);
	display(head);

	return 0;
}
