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