#ifndef STRING_DATA_STRUCTURE 
#define STRING_DATA_STRUCTURE 

#include<stdio.h>
#include<stdbool.h>
#define MAXSIZE 255

struct String
{
    int len;
    int cVowels;
    int cConsonents;
    int cWords;
    char A[MAXSIZE];
};

void printString(struct String);
void inputString(struct String);
void inputMultiWordString(struct String);
void getLength(struct String);
void createString(struct String);
void printString(struct String);
void isPlaindrome(struct String);
void isValidate(struct String);
void compareToStrings(struct String,struct String);
void countWords(struct String);
void coutVowels(struct String);
void countConsonents(struct String);
void getDuplicates(struct String);
void getDuplicatesFast(struct String);

#endif