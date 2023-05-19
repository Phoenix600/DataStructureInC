#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Graph
{
    int nVertices;
    struct Node** adjLists;   
};


struct Node* createNode(int v)
{
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));

    node->data = v;
    node->next = NULL;

    return NULL;
}

struct Graph* createGraph(int nVertices){
    struct Graph* G = (struct Graph*)malloc(sizeof(struct Graph));
    
    G->adjLists = (struct Node**)malloc(nVertices*sizeof(struct Node*));

    return G;
}

void addEdge(struct Graph* G, int s, int d)
{
    
}

int main ()
{
    return 0;
}