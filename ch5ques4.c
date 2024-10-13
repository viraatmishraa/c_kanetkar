// Write a program to enter numbers till the user wants. At the end it should display the count of positive, negative and zeros entered.
#include <stdio.h>
// struct returnable
// {
//     int positive;
//     int negative;
// };


int x,positive=0,negative=0,zero=0,counter=0,r;
    
    int *p=&positive;
    int *n=&negative;
    int *z=&zero;
int recursion()
{
    int d1=positive,d2=negative,d3=zero;
    //    printf("%d,%d,%d ....1",*p,*n,*z);

    //enter the number:12-21+90  has interesting insights



    printf("enter the number:");
    counter++;
    int check=scanf("%d",&x);
    if(check==1){
    if(x>0)
    //printf("%d is positive\n",x);
    (*p)++;
    if(x<0)
    // printf("%d is negative\n",x);
    (*n)++;
    if(x==0)
    // printf("%d is zero\n");
    (*z)++;}
   // printf("%d,%d,%d ....2",*p,*n,*z);

    if(check==1)
    recursion();
    
    if(check==0)
    {
        printf("positive=%d,negative=%d,zero=%d",*p,*n,*z);
    }
}
void main()
{
    // int arr[1];
    // int x=0;
    // printf("    enter the number:");
    // while(scanf("%d",&arr[x])==1)
    // {
    //     printf("enter the next number:");
    //     x++;
        

    // }
    recursion();

}