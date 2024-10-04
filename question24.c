//Write a program to calculate the sum of the series 1 + 1/2 + 1/3 + ... + 1/n, where n is the number entered by the user. */
#include <stdio.h>
void main()
{
    int n;
    float sum=1;
    printf("\nenter the n:");
    if(scanf("%d",&n)&&n>0)
    {
        for(float i=1.0;i<=n;i++)
        {
            sum=sum+(1/i);
        }
        printf("%5.8f",sum);
    }
}