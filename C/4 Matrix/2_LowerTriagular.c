#include<stdio.h>
#include<stdlib.h>

/**
 * @brief A square is said to be lower traingular matrix if all the elements above its main 
 * diagonal are zero
*/
struct LowerTriangular
{
    int row;
    int col;
    int* A;
};

void __int__(struct LowerTriangular** MAT)
{
    for(int i=0; i<(*MAT)->col; i++)
    {
        for(int j=0; j < (*MAT)->row; j++)
        {
            
        }
    }
}

int main()
{
    return 0;
}