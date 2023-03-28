#include<stdio.h>

int main()
{
    int n = 5;
    int A[15]={0};

    int i,j, x;

    int I,J;


    // Taking input from the user 
    for (i = 1; i <= n;i++)
    {
        for ( j = 1; j <= n; j++)
        {
            scanf("%d",&x);
            if(i >= j)
            {
                A[(i*(i-1)/2) + j-1] = x;
            }
        }
    }

    // printf("Displaying the matrix : \n");
    // Getting the element the array 
    for ( i = 1; i <= n; i++)
    {
       for ( j = 1; j <= n; j++)
       {
            if(i >= j)
            {
                printf("%d ",A[(i*(i-1)/2) + j-1]);
            }else{
                printf("%d ",A[(j*(j-1)/2) + i-1]);
            }
       }
       printf("\n");
    }

    // Setting the element in matrix 
    /**
     *       1 2 3 4 5
     *    ---------------
     *   1|  2 2 2 2 2
     *   2|  2 3 3 3 3 
     *   3|  2 3 4 4 4 
     *   4|  2 3 4 5 5 
     *   5|  2 3 4 5 5
     * 
     *      M[1][4] = 0 
    */

//    // Set Methods Implementation 
//    printf("\nEnter the row, col and element : ");
//    scanf("%d %d %d",&i,&j,&x);

//     if(i>=j){
//         A[(i*(i-1)/2)+j-1] = x;
//         I = j;
//         J = j;
//     }else{
//         A[(j*(j-1)/2)+i-1] = x;
//         J = i;
//         I = i;
//     }


    printf("Displaying the matrix : \n");
    // Getting the element the array 
    for ( i = 1; i <= n; i++)
    {
       for ( j = 1; j <= n; j++)
       {
            if(i >= j)
            {
                printf("%d ",A[(i*(i-1)/2) + j-1]);
            }else{
                printf("%d ",A[(j*(j-1)/2) + i-1]);
            }
       }
       printf("\n");
    }


    /**
     * #TODO: Added new code files
     * The goal is to change the element the at index
     * and at the same time after the changing the element
     * The matrix must maintain its symmetric property
     */ 
    printf("[+]Enter the indices and the element : ");
    scanf("%d %d %d",&i,&j,&x);
    
    return 0;
}