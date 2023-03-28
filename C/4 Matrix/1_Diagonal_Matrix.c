#include<stdio.h>

struct Matrix 
{
    int n;
    int A[10]; // 1D Array for representing the Diagonal Matrix 
};

/**
 * Diagonal Matrix : 
 *  Except the diagonal elements are non-zero elements.
 *  Mathematically,
 *      M[i][j] = 0 , only if i!=j
 *  This type of matrix can be represented using the Single-Dimensional 
 *  vector variables or 1D arrays 
*/

void Set(struct Matrix* MAT,int i, int j,int key)
{
    if(i==j)
        MAT->A[i-1] = key;
}

int Get(struct Matrix MAT, int i, int j)
{
    if(i==j)
        return MAT.A[i-1];
    else
        return 0;
}

void Display(struct Matrix MAT)
{
   int i,j;
   for (i = 0; i < MAT.n; i++)
   {
        for ( j = 0; j < MAT.n; j++)
        {
            if(i==j)
            {
                printf("%d ",MAT.A[i]);
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
   }
    
}

int main()
{
    struct Matrix MAT = {5,{1,2,3,4,5}};
    struct Matrix MAT1;

    MAT1.n=5;

    Set(&MAT1,1,1,1);
    Set(&MAT1,2,2,2);
    Set(&MAT1,3,3,3);
    Set(&MAT1,4,4,4);
    Set(&MAT1,5,5,5);

    printf("\n[+]Matrix 1 : \n\n");
    Display(MAT);
    printf("\n[+]Matrix 2 : \n\n");
    Display(MAT1);


    printf("\nMAT1[3][2] : %d\n",Get(MAT1,3,2));
    printf("MAT1[4][4] : %d\n",Get(MAT1,4,4));

    return 0;
}