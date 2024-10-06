// Write a program to find the absolute value of a number entered through the keyboard.
#include <stdio.h>
int main()
{
    int inp=0,absolute=0;
    printf("enter the number:");
    if(scanf("%d",&inp))
    {
        if(inp<0)
        {
        absolute=inp*-1;}
        printf("\nabsolute value of %d is %d\n",inp,absolute);
    }
    return 0;
}