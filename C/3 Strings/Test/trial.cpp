#include<iostream>

void isAnagram1(char A[], char B[])
{
    int isAnagram = 0;

    int i;
    int j;

    for (i = 0; i < (sizeof(A) / sizeof(A[0]) && sizeof(A) / sizeof(A[0]) == sizeof(B) / sizeof(B[0])); i++)
    {
        isAnagram = 0;

        for (j = 0; B[j] != '\0'; j++)
        {
            if (A[i] == B[j])
            {
                isAnagram = 1;
                break;
            }
        }
        if (!isAnagram)
        {
            break;
        }
    }

    if (isAnagram)
    {
        printf("two string are anagram...\n");
    }
    else
    {
        printf("two strings are not anagram..\n");
    }
}

int main()
{
    char A[] = "decimal";
    char B[] = "medical";

    isAnagram1(A, B);

    return 0;
}