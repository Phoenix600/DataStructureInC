#include<stdio.h>
#include<stdlib.h>

struct Queue 
{
    int size;
    int front;
    int rear;
    int* Q; 
};

void enQueue(struct Queue* q, int key)
{
    if(q->rear == q->size-1)
    {
        printf("Queue is full\n");
    }
    q->Q[++q->rear] = key;
}

int deQueue(struct Queue* q)
{
    int x;

    if(q->front == q->rear)
    {
        printf("Queue is empty\n");
        return -1;
    }

    q->front++;
    x = q->Q[q->front];

    return x;
}

void Display(struct Queue q)
{
    int i;

    for ( i = q.front+1; i < q.rear; i++)
    {
        printf("%d ",q.Q[i]);
    }
    printf("\n");
    
}

int main()
{
    struct Queue q;

    q.size = 10;

    // Initially 
    q.front = -1;
    q.rear = -1;

    q.Q = (int*)malloc(q.size*sizeof(int));

    enQueue(&q,10);
    enQueue(&q,12);
    enQueue(&q,13);
    enQueue(&q,14);
    enQueue(&q,15);
    enQueue(&q,19);

    Display(q);

    return 0;
}