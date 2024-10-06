//Write a program to check whether a given year is a leap year or not. */
#include <stdio.h>
#include <stdlib.h>
int input(int * year)
{
    if(scanf("%d",year)==1)
    {   
        return *year;
    }
    else
    {   
         printf("\n\ninvalid input\n\n");
         exit(0);
    }
}
void main()
{
    int year;
    printf("enter the year");
    year=input(&year);
    if((!(year%4) || !(year%400)) &&(year%100!=0))
    {
        printf("leapyear");
    }
    else
    printf("not a leap year");
}