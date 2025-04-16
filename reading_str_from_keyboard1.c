#include<stdio.h>
#include<string.h>

int main()
{
    char s[] = "31298 87.375";  /*Initialize array s */
    int x;                      /*x value to be input */
    double y;                   /*y value to be input */

    sscanf(s,"%d%lf", &x, &y);

    printf("%s\n%S%6d\n%s%8.3f\n","The values stored in character array's are:","integer:", x,"double:", y);
}