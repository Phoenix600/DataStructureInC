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
	struct Node* temp = NULL;

	*head_ref = (struct Node*)malloc(sizeof(struct Node));
	(*head_ref)->data = A[0];
	(*head_ref)->prev = NULL;
	(*head_ref)->next = NULL;

	last = (*head_ref);

	for(int i=1; i<n; i++)
	{

	}

}

int main()
{
	return 0;
}
