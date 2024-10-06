//According to the Gregorian calendar, it was Monday on the date 01/01/01. If any year is input through the keyboard, write a program to find out what is the day on 1st January of this year.
#include <stdio.h>
int isleap(int XX);
int main()
{   
    int year,i,counter=0;
    printf("enter the year to be checked");
    if(scanf("%d",&year))
    {
       for(i=1;i<=year;i++)
       { 
        if(isleap(i))
           {
            counter+=2;}
        else
            counter++;
        }
        //printf("counter:%d",counter);
        int cha=counter%7;
        switch (cha)
        {
            case 0:printf("sunday");   break;
            case 1:printf("monday");   break;
            case 2:printf("tuesday");  break;
            case 3:printf("wednesday");break;
            case 4:printf("thursday"); break;
            case 5:printf("friday");   break;
            case 6:printf("saturday"); break;

        }
    }
}

int isleap(int XX)
{
     if((!(XX%4)&& XX%100)||!(XX%400))
        {
            
            return 1;
        }
        else
            return 0;
        
}