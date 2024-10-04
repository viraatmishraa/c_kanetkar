// Angle is taken as input from keyboard. Write a program to calculate the trigonometric ratios (sin, cos, tan, cosec, sec, cot) of the angle.
#include <stdio.h>
#include <math.h>
void main()
{
    
    printf("enter the angle and function, 1 to 6 for \nsin cos tan\nsec cosec cot\nrespectively:\n ");
    int c=0;
    double angle=0;
    if(scanf("%lf%d",&angle,&c)==2 && 0<=c<=6)
    {
    switch (c)
        {
            case 1:
            double output =sin(angle);
            printf("sin %2.2lf = %2.2lf",angle,output);
            break;
            case 2:
            printf("cos lf = %2.2lf",angle,cos(angle));
            break;

            case 3:
            printf("tan %2.2lf = %2.2lf",angle,tan(angle));
            break;
            case 4:
            if(1/cos(angle)!=0)

                printf("sec %2.2lf = %2.2lf",angle,(1/cos(angle)));
            else
                printf("sec %2.2lf=%2.2lf",angle,0);
            break;
            case 5:
            if(1/sin(angle)!=0)
            
            printf("cosec %2.2lf = %2.2lf",angle,(1/sin(angle)));
            else
            
                printf("cosec %2.2lf=%2.2lf",angle,0);
            
            break;
            case 6:
            if(1/tan(angle)!=0)
            
            printf("cot %2.2lf = %2.2lf",angle,(1/tan(angle)));
            else
            
                printf("cot %2.2lf=%2.2lf",angle,0);
            
            break;
            default:
            printf("invalid input");
            break;


        }
    }
    else
    {
        printf("invalid input");
    }
}