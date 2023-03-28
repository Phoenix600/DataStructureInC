#include<stdio.h>

/**
 * Slower Method
*/
void findDupliactes1(char A[])
{ 
    int count = 0;
    for (int i = 0; A[i+1]!='\0'; i++)
    {
        if(A[i]!= -1 && A[i] !=' ') // tacking the spaces 
        {
            count = 1;
            for (int j = i+1;A[j]!='\0'; j++)
            {
                if(A[i] == A[j])
                {
                    count++;
                    A[j] = -1; // Marking the duplicate elements as -1
                }
            }

            if(count > 1)
            {
                printf("Character %c is occured %d times\n",A[i],count);
            }
            
        }
        
    }
    
}

int main()
{

    char A[] = "drain out bad energy, forget bad memories";
    findDupliactes1(A);
    return 0;
}