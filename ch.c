//Wind-chill factor is the felt air temperature on exposed skin due to wind. The wind chill temperature is always lower than the air temperature and is calculated as per the following formula: wcf = 35.74 + 0.6215t + (0.4275t - 35.75) * v^0.16 where t is the temperature and v is the wind velocity. Write a program to receive values of temperature and wind velocity and calculate the wind-chill factor.
#include <stdio.h>
#include <math.h>
void main()
{
    int wcf=0,v=0,t=0;
    printf("INPUT v and t:");
    if(scanf("%f%f",&v,&t)==2)
    {
        wcf = 35.74 + 0.6215*t + (0.4275*t - 35.75) * pow(v,0.16); 
        printf("%d is your wind chilling factor",wcf);
    }
    else
    {
        printf("invalid input");
    }
}