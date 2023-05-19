#include<iostream>


using std::cout;
using std::end;

int Maximum(int a, int b)
{
    return a > b ? a :b; 
}

// Time-Complexity : 0(N^3)
int getMaximumProductOfSubarrayBruteForce(int A[], int size)
{
    int MAX = -99999;
    int product = 1;
    for(int i=0; i < size; i++)
    {
        for(int j=0; j < size; j++)
        {
            product = 1;
            for(int k=i; k<j; k++)
            {
                product *= A[k];
            }
            MAX = Maximum(MAX,product);
        }
    }

    return MAX;
}

int getMaxProductOfSubarrayBetterSolution(int A[], int size)
{
    int MAX = -9999;
    int product = 1;

    for(int i=0; i< size; i++)
    {
        product = 1;
        for(int j=i; j < size; j++)
        {
            product *= A[j];
            MAX  = Maximum(MAX,product);
        }
    }
    return MAX;
}

int main()
{
    int A[] = {2,3,-2,4};
    int size = sizeof(A)/sizeof(A[0]);

    // int MAX  = getMaximumProductOfSubarrayBruteForce(A,size);
    // cout << MAX;

    // int MAX = getMaxProductOfSubarrayBetterSolution(A,size);
    // cout << MAX;


    
    return 0;
}
