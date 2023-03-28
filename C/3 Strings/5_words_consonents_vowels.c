#include<stdio.h>

int main()
{
    char A[] = "Its so funny, how most blessed ones are the most cursed ones";

    int wCout  = 0;
    int vCount = 0;
    int cCount = 0;
    int spaceCount=0;

    // Counting the vowels and consonents 
    for (int i = 0; A[i]!='\0'; i++)
    {
        if(A[i]=='a'||A[i]=='e'|| A[i]=='i'||A[i]=='o'||A[i]=='u'||A[i]=='A'||A[i]=='E'||A[i]=='I'||A[i]=='O'||A[i]=='U')
        {
            vCount++;
        }else if((A[i]>=65 && A[i]<=90)|| (A[i]>=97 && A[i]<=122)){
            cCount++;
        }
        
        if(A[i]==' ' && A[i-1]!=' ')
        {
             spaceCount++;  
        }
    }

    wCout = spaceCount+1; // Number of words equals number of whiteSpace + 1


    printf("[+]Vowels           :   %d\n",vCount);    
    printf("[+]Consonent        :   %d\n",cCount);    
    printf("[+]Words            :   %d\n",wCout);    


    return 0;
}