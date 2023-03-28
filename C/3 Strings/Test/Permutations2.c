#include<stdio.h>

void swap(char* a,char* b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}


void perm(char s[], int l, int h)
{
    int i;
    if(l==h)
    {
        printf("%s\n",s);
    }else{
        for ( i = l; i <= h; i++)
        {
            swap(&s[i],&s[l]);
            perm(s,l+1,h);
            swap(&s[i],&s[l]);
        }
        
    } 
}

int main()
{
    char A[] = "ABC";

    perm(A,0,2);

    return 0;

}