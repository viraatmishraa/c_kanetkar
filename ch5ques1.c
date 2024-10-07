// Write a program to print all the ASCII values and their equivalent characters using a while loop. The ASCII values vary from 0 to 255.

#include <stdio.h>
int main()//always use int main
{
    int i=0;
    while(i<256)
    printf("%d is the ascii value of %c\n",i,i++);//to recduce lines i incorporated i++ inside of printf
    return 0;
    
}