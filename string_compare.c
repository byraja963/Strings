#include<stdio.h>
#include<string.h>
int main()
{
    char command[16];
    puts("Enter the command :");
    scanf("%s", command);
    if(strcmp(command, "Quit")==0)
    {
        printf("The command is Quit \n");
    }
    else{
        printf("The command is not Quit \n");
    }
}