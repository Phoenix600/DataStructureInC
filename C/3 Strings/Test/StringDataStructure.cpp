#include "StringDataStructure.hpp"

void getLength(struct String node)
{
    int i=0;
    for ( i = 0;node.A[i]!='\0' ;i++){}
    node.len = i;
}