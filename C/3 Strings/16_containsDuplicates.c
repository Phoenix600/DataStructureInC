#include<stdio.h>

/**
 * Bit-Set method : Finding Duplicates by setting individual bits in memory 
 * with the help : 
 *  1. Masking Operation (ANDing)
 *  2. Merging Opeation  (ORing)
 *  3. Bitwise Shifting Opeation (Left Shifting)
 * 
 * Faster Method than previous 2 methods 
 * Most recomended method interms of 
 *      [*] Memory efficiency  
 *      [*] Exceution Speed
 * 
*/

void isContainDuplicates(char S[])
{
    int i;
    int A = 0; // 0000 0000 0000 0000 0000 0000 0000 0000
    int H = 0; // 0000 0000 0000 0000 0000 0000 0000 0000

    for ( i = 0; S[i]!='\0'; i++)
    {
        A = 1; // 0000 0000 0000 0000 0000 0000 0000 0001
        A = A << (S[i]-97);

        if((H & A) > 0)
        {
            printf("%c is duplicate \n",S[i]);
        }else{
            H = A | H;
        }

    }
    

}
            

int main()
{
    char A[] = "findings";
    isContainDuplicates(A);
    return 0;
}