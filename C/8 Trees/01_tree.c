#include<stdio.h>
#include<stdlib.h>

struct Node 
{
	int key;
	struct Node* left;
	struct Node* right;
};

void createNode(struct Node** node, int key)
{
	(*node) = (struct Node*)malloc(sizeof(struct Node));
	(*node)->key = key;
	(*node)->left = NULL;
	(*node)->right = NULL;
}

void inOrder(struct Node* node)
{
	if(node == NULL)
		return ;
	inOrder(node->left);
	printf("%d ",node->key);
	inOrder(node->right);
}

int main()
{
	struct Node* First;
	struct Node* Second;
	struct Node* Third;
	struct Node* Fourth;
	struct Node* Fifth;
	struct Node* Sixth;
	struct Node* Seventh;


	createNode(&First,1);
	createNode(&Second,2);
	createNode(&Third,3);
	createNode(&Fourth,4);
	createNode(&Fifth,5);
	createNode(&Sixth,6);
	createNode(&Seventh,7);


	/* Linking the node */
	First->left = Second;
	First->right = Third;
	
	Second->left = Fourth;
	Second->right = Fifth;

	
	Fourth->left = Sixth;
	Fourth->right = Seventh;

	inOrder(First);


	return 0;
}
