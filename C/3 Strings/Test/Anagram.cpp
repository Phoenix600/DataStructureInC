#include <iostream>

int main()
{
    // char s1[] = "recitals";
    // char s2[] = "articles";

    char s1[]="axe";
    char s2[]="xae";

    bool isAnagram = false;

    for (int i = 0; i < sizeof(s1)/sizeof(s1[0]) && (sizeof(s1) == sizeof(s2)); i++)
    {
        isAnagram = false;

        for (int j = 0; j < sizeof(s2)/sizeof(s2[0]); j++)
        {
            if(s1[i] == s2[j])
            {
                isAnagram = true;
                break;   
            }
        }
        if(!isAnagram){break;}

    }

    if(isAnagram)
    {
        printf("Sucess");
    }else{
        printf("Failure");
    }
    

    return 0;
}