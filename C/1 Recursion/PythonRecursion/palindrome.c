#include <stdio.h>

int isPalindrome(char A[], int index, int size)
{
	if(index > size/2)
		return 1;
	if(A[index]!= A[size-index-1])
		return 0;
	return isPalindrome(A,index+1,size);
}

int main()
{
	char A[] = "MADAM";
	printf("%d\n",isPalindrome(A,0,5));
	printf("%d\n",isPalindrome("MADAMJI",0,7));
}
