//Write a program to receive a Cartesian coordinate (x, y) of a point and convert them into polar coordinates (r, θ). Hint: r = sqrt(x^2 + y^2) and θ = tan^-1(y/x)
#include <stdio.h>
#include <math.h>
void main()
{
    printf("enter the cartesian coordinates");
    double x,y,r,a;
    if(scanf("%lf%lf",&x,&y)==2 && x!=0)
    {
        r = sqrt(x*x + y*y);
        a = atan(y/x);
        printf("the radius is -\"%lf\"and the angle is \"%lf\"",r,a);
    }
    else 
    {
        printf("invalid input");
    }
}