//Given three points (x1, y1), (x2, y2), and (x3, y3), write a program to check if the three points fall on one straight line.
#include <stdio.h>
typedef struct
{
    float x;
    float y;
}point;
int main() 
{
    point a,b,c;
    a.x=1;a.y=1;
    b.x=2;b.y=2;
    c.x=3;c.y=3;
    float m =0;
    m= (b.y-a.y) /(b.x-a.x); //operator precedence is impoortant
    printf("\n%f\n",m);      //%f for float
    if((c.y)-(a.y)==(m*(c.x-a.x)))
    {
        printf("ww");
    }
    else
    printf("bhak ");
}