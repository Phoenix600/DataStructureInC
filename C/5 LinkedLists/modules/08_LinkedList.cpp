#include<stdio.h>
#include<stdlib.h>
// This is one of the most, efficient seraching techique called Hasing  

// HASH Array 
int HASH[(int)1e7+99] = {0};

struct Node 
{
    int data;
    struct Node* next;
};

int getMax(struct Node* head)
{
    int MAX = head->data;
    while(head)
    {
        if(MAX < head->data)
            MAX = head->data;
        head = head->next;
    }
    return MAX;
}

struct Node* create(int A[], int size)
{
    struct Node* head = NULL;
    struct Node* last = NULL;
    struct Node* temp = NULL;

    head = (struct Node*)malloc(sizeof(struct Node));
    head->data = A[0];
    head->next = NULL;
    last = head;

    for(int i=1; i<size; i++)
    {
        temp = (struct Node*)malloc(sizeof(struct Node));
        temp->data = A[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }    
    return head;
}

void init(struct Node* head)
{
    while (head)
    {
        HASH[head->data] = 1;
        head = head->next;   
    }
    
}

// HASH Look-Up-Table Search 
int search(int key)
{
    if(HASH[key] != 0)
        return 1;
    return 0;
}



int main()
{
    int A[] = {31,1,2,56,23,89,11,90,67,888,83,23,10};
    int size = sizeof(A)/sizeof(A[0]);

    init(create(A,size));
    
    int isFound = search(888);
    // int isFound = search(808); // Key is not fount 

    if(isFound)
    {
        printf("Searched key is found...");
    }else{
        printf("Searched key is not found....");
    }

    return 0;
}