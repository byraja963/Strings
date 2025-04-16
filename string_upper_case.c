#include<stdio.h>
#include<string.h>
int main()
{
    char line [81];
    puts("Enter the line : ");
    scanf("%[A-Z]", line);
     //scanf("%[^\n]", line);  // with the help of this user can take the input full line also 
    printf("The complete line of text is : %s", line);
}