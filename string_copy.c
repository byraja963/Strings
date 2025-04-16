#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char name[30];
    char *names[30];
    int count =0;
    printf("Enter the name : ");
    scanf("%s", name);
    names[count]= (char *)malloc(strlen(name)+1);
    strcpy(names[count], name);
    count++;
    printf("Name stored: %s\n", names[0]);
}