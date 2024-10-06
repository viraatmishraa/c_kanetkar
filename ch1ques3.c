//Paper of size A0 has dimensions 1189 mm x 841 mm. Each subsequent size A(n) is defined as A(n-1) cut in half, parallel to its shorter sides. Thus, paper of size A1 would have dimensions 841 mm x 594 mm. Write a program to calculate and print paper sizes A0, A1, A2, ... A8.
#include <stdio.h>
void main()
{   
    int i,inp,a0length=1189,a0breadth=841;
    printf("enter the choicefor x: A(x)");
    if( scanf("%d",&inp)&& inp<9)
    {
        
        for(i=0;i<inp;i++)
        {
            if(a0breadth>a0length)
            {
                if(!(a0breadth%2))
                {
                    a0breadth=a0breadth/2;
                }
                else a0breadth=(a0breadth-1)/2;
            }
            else 
            {
                  if(!(a0length%2))
                {
                    a0length=a0length/2;
                }
                else a0length=(a0length-1)/2;
            }
        }
        printf("the length of A%d paper is %d\n the breadth of a%d paper is %d ",inp,a0length,inp,a0breadth);
    }
    else{
        printf("invalid input");
    }
}