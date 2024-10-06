// The length and breadth of a rectangle and radius of a circle are input through the keyboard. Write a program to calculate the area and perimeter of the rectangle, and the area and circumference of the circle.
#include <stdio.h>
void main()
{
    
    float l,b,r;
    printf("enter the length, breadth and radius");
    if(scanf("%d%d%d",&l,&b,&r)==3)
    {
        
        float area=l*b;
        printf("%d is area of rectangle\n",area);
        area=2*(l+b);
        printf("%d is perimeter of rectangle\n",area);
         area= 3.14*r*r;
        printf("%d is area of circle\n",area);
         area= 6.28*r;
        printf("%d is perimeter of circle\n",area);
    }
    else
    {
        printf("invalid input");
    }
}