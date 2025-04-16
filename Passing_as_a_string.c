#include<stdio.h>
#include<string.h>
#include<stdlib.h>
unsigned short int stringLength(const char * string)
{
    unsigned int length = 0;
    while (*(string ++))
    {
       length++;
    }
    return length;
    
}
int main()
{
    char simpleArray[]= "simple string";
    char * simplePtr = (char *)malloc(strlen("simple string")+1);
    strcpy(simplePtr, "simple string");
    printf("%d\n", stringLength(simplePtr));
    printf("%d\n",stringLength(simpleArray));
    printf("%d\n",stringLength(&simpleArray[0]));
}