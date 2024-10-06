//Two numbers are input through the keyboard into two locations C and D. Write a program to interchange the contents of C and D.
   
#include <stdio.h>
void main()
{
    int x,y,*a=&x, *b=&y,*c;
    printf("enter number to be swapped ");
    scanf("%d%d",a,b);
    printf("a=%d b=%d",*a,*b);
    *c=*a;
    *a=*b;
    *b=*c;
    printf("a=%d b=%d",*a,*b);
} 