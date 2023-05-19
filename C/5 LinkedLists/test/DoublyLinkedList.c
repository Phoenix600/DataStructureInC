#include<stdio.h>
#include<stdlib.h>

struct Node
{
	struct Node* prev;
	int data;
	struct Node* next;
};

void create(struct Node** head_ref, int A[], int n)
{
	struct Node* last = NULL;
	struct Node* t = NULL;

	*head_ref = (struct Node*)malloc(sizeof(struct Node));
	struct Node* prev;

	(*head_ref)->data = A[0];
	(*head_ref)->next = NULL;
	(*head_ref)->prev = NULL;

	last = (*head_ref);


	for(int i=1; i<n; i++)
	{
		t = (struct Node*)malloc(sizeof(struct Node));
		t->data = A[i];
		t->next = last->next;
		t->prev = last;
		last->next = t;
		last = t;
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

int getLen(struct Node* head)
{
	int count = 0;
	while(head)
	{
		count++;
		head = head->next;
	}
	return count;
}



int main()
{
	struct Node* head = NULL;
	int A[] = {10,20,30,40,50,99,100};
	create(&head, A, 7);
	display(head);
	printf("the length of the linked list is : %d \n",getLen(head));
	return 0;
}
