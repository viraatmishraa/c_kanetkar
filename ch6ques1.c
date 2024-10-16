/*
Write a program to print the multiplication table of the number
entered by the user. The table should get displayed in the following
form:
    29 * 1 = 29
    29 * 2 = 58
*/
#include <stdio.h>
#include <stdlib.h>
int input(int * age)
{
    if(scanf("%d",age)==1)
    {   
        return *age;
    }
    else
    {   
         printf("\n\ninvalid input\n\n");
         exit(0);
    }
}
// use the format--   int ram = input(&ram);

void main()
{
    printf("enter the number wanted for the table");
    int a=input(&a),i;
    for (i=1;i<11;i++)
    {
        printf("%d * %d = %d\n",a,i,(a*i));
    }
}