#include<stdio.h>

#define V 4

// Creating the sparse matrix for representing the Graph
void init(int A[][V])
{
    for(int i=0; i<V; i++)
    {
        for(int j=0; j<V; j++)
        {
            A[i][j] = 0;
        }
    }
}


void addEdge(int A[][V],int i, int j)
{
    if(i < V && j < V)
    {
    A[i][j] = 1;
    A[j][i] = 1;
    }
}

void printAdjMatrix(int A[][V])
{
    for(int i=0; i < V; i++)
    {
        printf("%d : ",i);
        for(int j=0; j < V; j++)
        {
            printf("%d ",A[i][j]);   
        }
        printf("\n");
    }
}

int main()
{
    int A[V][V];

    init(A);
    printAdjMatrix(A);
    printf("Geaph after the Adding edges \n");
    addEdge(A,0,1);
    addEdge(A,0,2);
    addEdge(A,1,2);
    addEdge(A,2,3);
    }
}


    printAdjMatrix(A);

    return 0;
}