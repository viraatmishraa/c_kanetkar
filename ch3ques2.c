//If ages of Ram, Shyam, and Ajay are input through the keyboard, write a program to determine the youngest of the three.
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
int main()
{
    printf("enter the age of ram:");
    int ram = input(&ram);
    printf("enter the age of shyaam:");
    int shyaam = input(&shyaam);
    printf("enter the age of ajay:");
    int ajay = input(&ajay);
    if(ajay<=ram && ajay<=shyaam)
    printf("ajay");
    if(ram<=ajay && ram<=shyaam)
    printf("ram");
    if(shyaam<=ram && shyaam<=ajay)
    printf("shyaam");


return 0;
}

