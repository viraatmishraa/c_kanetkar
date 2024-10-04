//If a five-digit number is input through the keyboard, write a program to calculate the sum of its digits.
   
#include <stdio.h>
void main(){int i,inp,temp=0;if (scanf("%d",&inp)&&inp<10
0000 && inp<-1)for(i=0;i<5;i++){temp=temp+(inp%10);inp=inp/10;}printf("%d",temp);}