#include<stdio.h>
#include<stdlib.h>

struct Node
{
	char c;
	struct Node* next;
};

struct Stack 
{
	struct Node* top;
	struct Node* stack;
};


int isEmpty(struct Stack** S)
{
	if((*S)->top == NULL)
		return 1;
	return 0;
}

// Takes no args 
int isFull()
{
	int res;
	struct Node* node = (struct Node*)malloc(sizeof(struct Node*));
	res = node?0:1;
	free(node);
	return res;
}

void push(struct Stack** S, char x)
{

	struct Node* node;

	if(isFull())
	{
		printf("Stack Overflow\n");
		return ;
	}

	node = (struct Node*)malloc(sizeof(struct Node));
	node->c = x;
	node->next = (*S)->stack;
	(*S)->stack = node;
	(*S)->top = (*S)->stack;
};

char pop(struct Stack** S)
{
	char r ;
	if(isEmpty(S))
	{
		printf("Stack Underflow\n");
		return '\0';
	}

	struct Node* p = (*S)->stack;
	(*S)->stack = (*S)->stack->next;
	(*S)->top = (*S)->stack;
	r = p->c;
	free(p);
	return r;
}


void create(struct Stack** S, char A[], int size)
{
	(*S) = (struct Stack*)malloc(sizeof(struct Stack));
	(*S)->top = NULL;
	(*S)->stack = NULL;

	struct Node* node = (struct Node*)malloc(sizeof(struct Node));
	node->c = A[0];
	node->next = NULL;

	// setting up the initial stack 
	node->next = (*S)->stack;
	(*S)->stack = node;

	for(int i=1; A[i]!='\0'; i++)
	{
		node = (struct Node*)malloc(sizeof(struct Node));
		node->c = A[i];
		node->next = NULL;
		
		// setting up the remaining task 
		node->next = (*S)->stack;
		(*S)->stack = node;
	}

	(*S)->top = (*S)->stack;
}

int isBalanced(struct Stack** S, char A[], int size)
{
	for(int i=0; A[i]!='\0'; i++)
	{
		if(A[i] == '(')
		{
			push(S,'(');
		}
		if(isEmpty(S))
		{
			return -1;
		}else{
			pop(S);
		}
	}
	return isEmpty(S)?1:-1;
}

void createStack(struct Stack** S)
{
	(*S) = (struct Stack*)malloc(sizeof(struct Stack));
	(*S)->top = NULL;
	(*S)->stack = NULL;
}

void display(struct Stack* S)
{
	struct Node* node  = S->top;
	while(node)
	{
		printf("%c ",node->c);
		node  = node->next;
	}
	printf("\n");
}

int main()
{
	// for the balanced Parenthesis Condition 
	char A[] = "((a*b)+(c*d)))";
	int size = sizeof(A); // Char in C takes the 1 bytes 

	struct Stack* S = NULL;
	create(&S,A,size);
	display(S);

	// push(&S,'(');
	display(S);

	struct Stack* S1 = NULL;
	createStack(&S1);
	 printf("Balanced Parenthesis : %d\n",isBalanced(&S1,A,size));


	return 0;
}