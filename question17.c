 //Given a point (x, y), write a program to find out if it lies on the X-axis, Y-axis, or origin.
#include <stdio.h>
int main()
{
    int x,y;
    printf("enter the x and y coordinate respectively:");
    if(scanf("%d%d",&x,&y)==2)
    {
    if(x==0 && y!=0)
        printf("y-axis");
    else if(y==0 && x!=0)
        printf("x-axis");
    else if(x==0 && y==0)
        printf("origin");
    else
        printf("somewhere on the plane");
    }
    else 
    printf("\ninvalid\n");
    return 0;
}