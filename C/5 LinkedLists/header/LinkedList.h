#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include<stdio.h>

struct Node
{
    int data;
    struct Node* next;   
};



/**
 * @brief Creates the singly linked list from the list of integers
 * @param struct Node** head_ref 
 * @param int* A
 * @param int size 
*/
void create(struct Node** head_ref, int A[], int size);

/**
 * @brief Displays the nodes of the linked, via linear traversal
 * @param struct Node* head 
*/
void display(struct Node* head);





char functions[256][256] = {
    "create",
    "display"
};


void menu()
{
    int choice = 99;
    do{
        for (int i = 0; i < 256; i++)
        {
            printf("%s \n",functions[i]);
        }
        
    }while(choice!=99);

}

#endif 