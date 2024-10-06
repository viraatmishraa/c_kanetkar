//Write a program to check whether a triangle is valid or not, if three angles of the triangle are entered through the keyboard. A triangle is valid if the sum of all the three angles is equal to 180 degrees.
#include <stdio.h>
#include <stdlib.h>
int input(int * angle)
{
    if(scanf("%d",angle)==1)
    {   
        return *angle;
    }
    else
    {   
         printf("\n\ninvalid input\n\n");
         exit(0);
    }
}
int main()
{
    printf("enter the first angle:");
    int angle= input(&angle);
    printf("enter the second angle");
    int angle2 = input(&angle2);
    printf("enter the thrid angle");
    int angle3 = input(&angle3);
    if(angle+angle2+angle3==180 && angle != 0 && angle2 !=0 && angle3 !=0)
    {
        printf("valid triangle");
    }
    else
    {
        printf("invalid trianlge");
    }
}