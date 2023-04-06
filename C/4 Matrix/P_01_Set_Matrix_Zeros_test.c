#include<stdio.h>

struct Matrix
{
	int n;
	int m;
	int A[25][25];
};


void setColumn(struct Matrix* M, int row)
{
	for(int j=0; j < M->n; j++)
	{
		if(M->A[row][j] != 0)
		{
			M->A[row][j] = -1;
		}
	}
}

void setRow(struct Matrix* M, int column)
{
	for(int i=0; i < M->n; i++)
	{
		if(M->A[i][column] != 0)
		{
			M->A[i][column] = -1;
		}
	}
}


void setMatrixZerosV1(struct Matrix* M)
{
	for(int i=0; i<M->n;i++)
	{
		for(int j=0; j<M->m; j++)
		{
			if(M->A[i][j] == 0)
			{
				setColumn(M,i);
				setRow(M,j);
			}
		}
	}

	for(int i=0; i<M->n; i++)
	{
		for(int j=0; j<M->m; j++)
		{
			if(M->A[i][j] == -1)
			{
				M->A[i][j] = 0;
			}
		}
	}

}

void setMatrixZerosV2(struct Matrix* M)
{
	int column[4] = {0};
	int row[4] = {0};

	for(int i=0; i<M->n; i++)
	{
		for(int j=0; j<M->m; j++)
		{
			if(M->A[i][j] == 0)
			{
				column[j] = 1;
				row[i] = 1;
			}
		}
	}

	for(int i=0; i<M->n; i++)
	{
		for(int j=0; j<M->m; j++)
		{
			if(row[i] == 1 || column[j] == 1)
			{
				M->A[i][j] = 0;
			}
		}
	}


}


void display(struct Matrix M)
{
	for(int i=0; i<M.n; i++)
	{
		for(int j=0; j < M.m; j++)
		{
			printf("%d ",M.A[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

int main()
{
	struct Matrix M = {4,4,{{1,1,1,1},{1,0,0,1},{1,1,0,1},{1,1,1,1}}};
	display(M);
	setMatrixZerosV2(&M);
	display(M);
	return 0;
}
