// A five-digit number is entered through the keyboard. Write a program to obtain the reversed number and to determine whether the original and reversed numbers are equal or not.
#include <stdio.h>
void main()
{
    printf("enter the humber:");
    int inp;
    if (scanf("%d",&inp)==1)
    {   
        int copy=inp,reversed=0;
        while(inp!=0)
        {
            reversed=(reversed+(inp%10))*10;
            inp=inp/10;
        }
        reversed=reversed/10;
        if(reversed==copy)
        {   printf("same");}
        else
            printf("notsame");
    }
    else
    printf("\n\n\ninvalid input\n\n\n");
    }