 //If the lengths of three sides of a triangle are input through the keyboard, write a program to check whether the triangle is isosceles, equilateral, scalene, or right-angled triangle.
#include <stdio.h>
#include <stdlib.h>
int input(int * side)
{
    if(scanf("%d",side)==1)
    {   
        return *side;
    }
    else
    {   
         printf("\n\ninvalid input\n\n");
         exit(0);
    }
}
int islargest(int s1,int s2, int s3)
{
    if(s1>s2&&s1>s3)
    return s1;
    if(s2>s3&&s2>s1)
    return s2;
    if(s3>s1&&s3>s2)
    return s3;
}
int main()
{
    printf("enter the side 1:");
    int side1=input(&side1);
    printf("enter the side 2:");
    int side2=input(&side2);
    printf("enter the side 3:");
    int side3=input(&side3);

    if(side1==side2&&side1==side3)
    {printf("equilateral\n");
    return 0;}
    if(side1==side2 || side2==side3 || side3==side1)
    {printf("isoceles\n");}
    else
    {printf("scalene\n");}






    int largest=islargest(side1,side2,side3);
    if (largest==side1)
    {
        if(side1*side1==(side2*side2)+(side3*side3))
        {
        
        printf("also the triangle is right angled");
        }
    }
    if (largest==side2)
    {   
        if(side1*side1==(side2*side2)+(side3*side3))
        
        printf("also the triangle is right angled");
    }
    if (largest==side3)
    {
        if(side1*side1==(side2*side2)+(side3*side3))
        
        
        printf("also the triangle is right angled");

    }

    

}