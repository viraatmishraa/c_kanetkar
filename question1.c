    // Temperature of a city in Fahrenheit degrees is input through the keyboard. Write a program to convert this temperature into Centigrade degrees.
#include <stdio.h>
void main()
{
    printf("\nenter the number in farenhiet:\n");
    float inp;
    if(scanf("%f",&inp))
    {
        float C_degree=((inp-32.0)*(5.0/9.0));
        printf("%10.2f c_degree\n", C_degree);
}
else
{
    printf("invalid");
}
}
    
    
