#include<stdio.h>

struct Matrix 
{
	int m;
	int n;
	int A[25][25];
};

/*
 * 	Method-01 : 
 * 	[X]	Brute-Force Approach to Set Zeroes Matrix problem is to TRAVSERSE the matrix
 * 		and locate zero valued element in the matrix at position M[i][j]
 *		Now, get the value of i and j, traverse the j column and set all elements 
 *		apart from zero to -1.
 *		Similary traverse to the i row and set all elements apart from zero to -1 
 *		Do this till the entire array is traversed
 *		
 *		After the marking of row and column elements to -1, traverse the elements 
 *		in matrix again and replace all -1 to 0. And after this, you will get the 
 *		resultant matrix.
 *
 *
 *		Time-Complexity 	: 0((NxM)x(N+M)) + 0(NxM)
 *							: ~Approx. 0(N^3)
 *	
 *		Space-Complexity 	: 0(1)
 */
// Utility function for the setting the column of matrix to -1
void setColumn(struct Matrix* M,int row)
{
	for(int i=0; i < M->n; i++)
	{
		if(M->A[row][i] != 0)
			M->A[row][i] = -1;
	}
}

// Utility function for settting the row of matrix to -1
void setRow(struct Matrix* M, int column)
{
	for(int i=0; i< M->m; i++)
		if(M->A[i][column] != 0)
			M->A[i][column] = -1;
}


void setMatrixZeroV1(struct Matrix* M)
{
	for(int i=0; i< M->m; i++)
	{
		for(int j=0; j < M->n; j++)
		{
			if(M->A[i][j] == 0)
			{
				setColumn(M,i);
				setRow(M,j);
			}
		}
	}
	
	for(int i=0; i < M->m; i++)
	{
		for(int j=0; j < M->n; j++)
		{
			if(M->A[i][j] == -1)
				M->A[i][j] = 0;
		}
	}

}



/**
 * Utility function to print the matrix 
 */
void printMatrix(struct Matrix M)
{
	for(int i=0; i<M.n; i++)
	{
		for(int j=0; j<M.m; j++)
		{
			printf("%d ",M.A[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void bruteForceApproach()
{
		struct Matrix M={4,4,{{1,1,1,1},{1,0,0,1},{1,1,0,1},{1,1,1,1}}};

		printf("Initial Matrix : \n");
		printMatrix(M);
		setMatrixZeroV1(&M);
		printf("Resultant Matrix : \n");
		printMatrix(M);

}

// ==================================================================================
// 									Better Solution
// ==================================================================================






int main()
{
		/* struct Matrix M={4,4,{{1,1,1,1},{1,0,0,1},{1,1,0,1},{1,1,1,1}}}; */

		/* printf("Initial Matrix : \n"); */
		/* printMatrix(M); */
		/* setMatrixZeroV1(&M); */
		/* printf("Resultant Matrix : \n"); */
		/* printMatrix(M); */

		bruteForceApproach();
		
		return 0;
}
