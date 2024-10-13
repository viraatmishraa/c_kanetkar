// Write a program to print out all Armstrong numbers between 1 and 500. If sum of cubes of each digit of the number is equal to the number itself, then the number is called an Armstrong number. For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 ).
#include <stdio.h>
int main()
{
    int i =0;
    int armstrong;
    printf("wow\n");// the backslash n i imphere because it prevents the wow to get stuck in the buffer,therefore without \n will required to be flushed
    while(i<500)
    {
        if(i<10)
        {armstrong = (i)*(i)*(i);
        //printf("balle %d %d  ",armstrong,i);
             }

        else if(i<100)
        armstrong=  (i%10)*(i%10)*(i%10) + (i/10)*(i/10)*(i/10);
        else if(i<501)
        armstrong= (i%10)*(i%10)*(i%10) + ((i%100)/10)*((i%100)/10)*((i%100)/10)+(i/100)*(i/100)*(i/100);
        if(i==armstrong)
        printf("%d is an armstrong number\n",armstrong);
        i=i+1;


    }
    printf("wow2");

    return 0;
}