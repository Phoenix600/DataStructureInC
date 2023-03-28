#include <iostream>

using namespace std;

int main()
{
    char A[] = "finding";

    int count;
    int len = sizeof(A) / sizeof(A[0]);

    for (int i = 0; i < len - 1; i++)
    {
        if (A[i] != 0)
        {

            count = 1;
            for (int j = i+1; j < len; j++)
            {
                if (A[i] == A[j])
                {
                    A[j] = 0;
                    count++;
                }
            }
            if(count > 1)
            {
                printf("%c is repeated %d times\n",A[i],count);
            }
        }
    }

    return 0;
}