#include<stdio.h>
#include <limits.h>
#include<stdlib.h>

struct Node
{
	int data ;
	struct Node* next;
};

void create(struct Node** head_ref, int A[], int n)
{
	struct Node* last = NULL;
	struct Node* temp = NULL;
	
	*head_ref = (struct Node*)malloc(sizeof(struct Node));
	(*head_ref)->data = A[0];
	(*head_ref)->next = NULL;
	
	last = (*head_ref);
	
	for(int i=1; i<n; i++)
	{
		temp = (struct Node*)malloc(sizeof(struct Node));
		temp->data = A[i];
		temp->next = NULL;

		last->next = temp;
		last = temp;
	}


}

void display(struct Node* head)
{
	while(head)
	{
		printf("%d->",head->data);
		head = head->next;
	}	
	printf("NULL\n");
}

int rGetSum(struct Node* head)
{
	static int SUM = 0;
	if(head == 0)
		return SUM;
	SUM += head->data;
	return rGetSum(head->next);
}

int rGetSum1(struct Node* head)
{
	if(head==0)
		return 0;
	return head->data + rGetSum1(head->next);
}

int getMax(struct Node* head)
{
	static int MAX = INT_MIN;
	if(head == 0)
		return MAX;
	if(head->data > MAX)
	{
		MAX = head->data;
	}
	return getMax(head->next);
}

int getMax2(struct Node* head)
{
	int MAX = INT_MIN;
	if(head == 0)
		return MAX;
	if(head->data > MAX)
	{
		MAX = head->data;
	}
	return MAX + getMax2(head->next);
}





int main()
{
	int A[] = {1,2,3,4,5,6,99,7,8,9,10};
	struct Node* head;
	create(&head,A,11);
	display(head);
	printf("Sum of Elements : %d\n",rGetSum(head));
	printf("Sum of Elements : %d\n",rGetSum1(head));
	printf("MAX element in LL : %d\n",getMax2(head));

	return 0;
}
