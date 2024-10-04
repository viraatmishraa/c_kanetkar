//Write a program to receive values of latitude (L1, L2) and longitude (G1, G2) in degrees of two places on the earth and output the distance between them in nautical miles. The formula for distance in nautical miles is: Distance = 3963 * arccos(sin(L1) * sin(L2) + cos(L1) * cos(L2) * cos(G2 - G1))
#include <stdio.h>
#include <math.h>
void main()
{
    int g1,g2,l1,l2;
    printf("enter g1,g2,l1,l2\n");
    if(scanf("%d%d%d%d",&g1,&g2,&l1,&l2)==4)
    {
       double Distance = (double)3963 * acos(sin(l1) * sin(l2) + cos(l1) * cos(l2) * cos(g2 - g1));
       printf("the distance is- %1.2lf", Distance);
    }
    else 
    printf("invalid input");

}