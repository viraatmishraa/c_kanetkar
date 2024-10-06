//Given the length and breadth of a rectangle, write a program to find whether the area of the rectangle is greater than its perimeter. For example, the area of the rectangle with length = 5 and breadth = 4 is greater than its perimeter.
#include <stdio.h>
int main()
{
    int len=0,brd=0;
    printf("enter the len and brd::\n");
    if(scanf("%d%d",&len,&brd))
    {
        if((len*brd)>(len+len+brd+brd))
        printf("\n\nthe area is greater\n\n");
        else
        printf("\n\nthe perimeter is greater\n\n");
    }
    return 0;
}
