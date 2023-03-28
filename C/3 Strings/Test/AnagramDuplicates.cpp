#include <iostream>

using namespace std;

int main()
{
    // Optimized Solution
    char A[] = "cooper";
    char B[] = "poocer";
    char isAnagram = false;

    for (int i = 0; i < sizeof(A) / sizeof(A[0]) && (sizeof(A) == sizeof(B)); i++)
    {
        if (A[i] != 0)
        {
            isAnagram = false;
            for (int j = 0; j < sizeof(B) / sizeof(B[0]); j++)
            {
                if (A[i] == B[j])
                {
                    isAnagram = true;
                    B[j] = 0;
                    break;
                }
            }
            if (!isAnagram){break;}
        }
    }


    if(isAnagram)
    {
        printf("Sucess\n");
    }else{
        printf("Failure\n");
    }

    /**
     * Optimized Solution in terms of Memory Resources 
     * Time-Complexity    : 0(N)
     * Space-Complexity   : 0(1)  
    */

    return 0;
}