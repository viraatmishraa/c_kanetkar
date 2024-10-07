// Wind-chill factor is the felt air temperature on exposed skin due to wind. The wind chill temperature is always lower than the air temperature, and is calculated as per the following formula: wcf = 35.74 + 0.6215t + (0.4275t - 35.75) * v^0.16 where t is the temperature and v is the wind velocity. Write a program to receive values of temperature and wind velocity and calculate the wind-chill factor.
#include <stdio.h>
#include <math.h>

void main()
{
    float t,v;
    printf("enter what you want as temperature and wind velocity");
    if (scanf("%f%f",&t,&v)==2)
    {   
        double wcf = (double)(35.74 + 0.6215*t + (0.4275*t - 35.75) * pow(v,0.16));
        printf("%d -is the wcf",wcf);
    }
}