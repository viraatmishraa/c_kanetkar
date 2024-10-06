//Given the coordinates (x, y) of the center of a circle and its radius, write a program that will determine whether a point lies inside the circle, on the circle, or outside the circle. (Hint: Use sqrt() and pow() functions)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double input(double * inp)
{
    if(scanf("%lf",inp)==1)
    {   
        return *inp;
    }
    else
    {   
         printf("\n\ninvalid input\n\n");
         exit(0);
    }
}
double main()
{
//.......................................................................
    double radius,rx,ry,x,y;                          // I
    printf("enter the radius :");                  // N
    radius=input(&radius);                         // P
    printf("enter x coordinate of the circle:");   // U
    rx=input(&rx);                                 // T
    printf("enter y coordinate of the circle:");
    ry=input(&ry);
    printf("enter the x coordinate of point to be checked:");
    x=input(&x);
    printf("enter the y coordinate of point to be checked:");
    y=input(&y);

//......................................................................
    if(sqrt((y-ry)*(y-ry)-(x-rx)*(x-rx))==radius)
        printf("\non the circle\n");
    else if(sqrt((y-ry)*(y-ry)-(x-rx)*(x-rx))<radius)
        printf("\nin the cirlce\n");
    else 
        printf("outside the circle");
    


    return 0.0;
}