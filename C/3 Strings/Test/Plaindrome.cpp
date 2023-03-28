#include<bits/stdc++.h>

using namespace std;

int main()
{
    char string1[] = "rajesh";

    int j;

    for(j=0; string1[j]!='\0'; j++){}

    j = j-1;

    for (int i = 0; j > i; i++,j--)
    {
        if(string1[i] != string1[j])
        {
            cout << "String is not palindrome";
            break;
        }   
    }

    cout << "String is plaindrome";
    


    return 0;
}