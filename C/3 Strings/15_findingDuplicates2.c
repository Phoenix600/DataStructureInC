#include <stdio.h>

void findDuplicates2(char S[])
{
    int HASH[26] = {0};

    for (int i = 0; S[i] != '\0'; i++)
    {
            HASH[S[i] - 97]++;
    }

    for (int i = 0; i < sizeof(HASH) / sizeof(HASH[0]); i++)
    {
        if (HASH[i] > 1)
        {
            printf("Character %c is occurred %d times\n", i + 97, HASH[i]);
        }
    }
}

int main()
{
    char A[]="lets take vacation from the earth";
    findDuplicates2(A);
    return 0;
}