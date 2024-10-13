// Write a program to receive an integer and find its octal equivalent. (Hint: To obtain octal equivalent of an integer, divide it continuously by 8 till dividend doesn't become zero, then write the remainders obtained in reverse direction.
#include <stdio.h>
    
int dividend;
int recursion(int inpu,int rmainder,int out)
//more arguements for debugging purposes
{
    rmainder=inpu%8;
    inpu=inpu/8;
    if(inpu>=1)
    out=recursion(inpu,rmainder,0);
    printf("%d",rmainder);
    return rmainder;

}
int main()
{   
    int inp,x;
    printf("enter the number:\n");
    if (scanf("%d",&inp)==1)
    {
        recursion(inp,0,0);
    }
}
