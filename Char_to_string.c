#include<stdio.h>
#include<string.h>
void main()
{
    char c;
    char sentence[80];
    int i=0;
    puts("Enter a line of text : ");
    while((c=getchar())!='\n')
    {
        sentence[i++]=c;
    }
    sentence[i]='\0';
    puts("\nThe line entered was ");
    puts(sentence);
} 