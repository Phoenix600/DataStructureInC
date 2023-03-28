#include<stdio.h>

// Square Matrix Data Structure 
struct Matrix
{
    int n;
    int A[10][10];   
};

int main()
{
    /**
     * This is how generally programmer work with 
     * matrices and acess the matrix with nested loops 
     * 
     * Matrix are good but Linked Lists are better XD
     * 
     * The major drawback of the using matrix is it takes lots 
     * of space.
     * 
     * In real-world scenario , if we try to simulate the 
     * social media recomendation system with matrix data structure 
     * most of the values inside it will be zero. 
     * 
     * Thus most of the social-media network strcutre are implemented 
     * with adjancency-Lists (Graph Data Structure)(Linked List Of Linked Lists)
     *  
    */
    struct Matrix MAT;

    MAT.n = 3;
    
    MAT.A[0][0] = 1;
    MAT.A[0][1] = 2;
    MAT.A[0][2] = 3;
    
    MAT.A[1][0] = 4;
    MAT.A[1][1] = 5;
    MAT.A[1][2] = 6;

    MAT.A[2][0] = 7;
    MAT.A[2][1] = 8;
    MAT.A[2][2] = 9;


    for (int i = 0; i < MAT.n; i++)
    {
        for (int j = 0; j < MAT.n; j++)
        {
            printf("%d ",MAT.A[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}