#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

/**
 * @brief Representation of Diagonal Matrix DataStructure 
 * thorugh procedural programming ,
 * NOTE : Diagonal Matrix is Always Square Matrix 
 * 
*/
struct DiagonalMatrix
{
    int row;
    int col;
    int* A;
};

// Utility Function To Set The Matrix To Zero 
void __init__(struct DiagonalMatrix** MAT, int row)
{
    for(int i=0; i< (*MAT)->row; i++)
    {
        (*MAT)->A[i] = 0;
    }
}

void create(struct DiagonalMatrix** MAT, int row, int col)
{
    (*MAT) = (struct DiagonalMatrix*)malloc(sizeof(struct DiagonalMatrix));
    (*MAT)->col = col;
    (*MAT)->row = row;
    (*MAT)->A = (int*)malloc(sizeof(int)*row);
    __init__(MAT,row); // Initilizing the matrix to 0's 
}

void setMatrix(struct DiagonalMatrix** MAT)
{
    int key;

    printf("[+]Enter the matrix elements : \n");
    fflush(stdin);
    for(int i=0; i<(*MAT)->row; i++)
    {
        for(int j=0; j<(*MAT)->col; j++)
        {
            scanf("%d",&key);

            if(i==j)
            {
               (*MAT)->A[j] = key; 
            }
        }
    }   
}

void setElement(struct DiagonalMatrix** MAT,int key,int row, int col)
{
    if(col==row)
    {
        (*MAT)->A[row] = key;
    }
}

int getElement(struct DiagonalMatrix** MAT, int row, int col)
{
    if(col == row)
        return (*MAT)->A[row];
    return 0;
}

void display(struct DiagonalMatrix* MAT)
{
    for(int i=0; i<MAT->col; i++)
    {
        for(int j=0; j < MAT->row; j++)
        {
            if(i==j)
                printf("%d ",MAT->A[i]);
            else 
            printf("0 ");
        }
    printf("\n");
    }
}

char menu[][255] = {"[1] Init Diagonal Matrix", "[2] Set Matrix","[3] Set Element","[4] Get Element","[5] Display","[6] Exit"};

int main()
{
    struct DiagonalMatrix* MAT = NULL;
    bool flag = 1;
    int choice;
    int element;
    int row;
    int column;
    int size;
    while(flag)
    {
        for(int i=0; i<6; i++)
        {
            printf("%s\n",menu[i]);            
        }

        printf("[+]Enter your choice : ");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            printf("[+]Enter the size of matrix : ");
            scanf("%d",&size);
            create(&MAT,size,size);
            display(MAT);
            break;
        case 2 :
            printf("[+]Set the matrix elements : \n");
            setMatrix(&MAT);
            break;
        case 3 :
            printf("[+]Enter the element and its position : \n");
            printf("[+]Enter the element : ");
            scanf("%d",&element);
            printf("[+]Enter the row and column : ");
            scanf("%d %d",&row,&column);
            setElement(&MAT,element,row,column);
            break;
        case 4 : 
            printf("[+]Enter the row and column : ");
            scanf("%d %d",&row,&column);
            getElement(&MAT,row,column);

        case 5:
            printf("Diagonal Matrix  : \n");
            display(MAT);
        
        case 6 : 
            flag = false;
            break;        
        default:
            printf("\n[X] Invalid Keys.... :(\n");
            break;
        }                

    }
    return 0;
}