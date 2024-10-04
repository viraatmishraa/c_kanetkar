//A certain grade of steel is graded according to the following conditions: 1. Hardness must be greater than 50 2. Carbon content must be less than 0.7 3. Tensile strength must be greater than 5600 The grades are as follows: -
// Grade is 10 if all three conditions are met -
// Grade is 9 if conditions 1 and 2 are met - 
//Grade is 8 if conditions 2 and 3 are met - 
//Grade is 7 if conditions 1 and 3 are met - 
//Grade is 6 if only one condition is met - 
//Grade is 5 if none of the conditions are met Write a program, which will require the user to give values of hardness, carbon content, and tensile strength of the steel under consideration and output the grade of the steel. */
// bapre
#include <stdio.h>
void main()
{
    int hardness=0,tensile=0;
    float carbon_content=0.0;
    printf("enter the hardness, carbon content, tensile");
    if(scanf("%d%f%d",&hardness,&carbon_content,&tensile))
    {
        if(hardness>=50) hardness=1; else hardness=0;
        if(carbon_content<=0.7) carbon_content=7; else carbon_content =0;
        if(tensile>=5600) tensile=13; else tensile=0;
        int sum=hardness+tensile+hardness;
        if(sum==21)     sum=10;
        if(sum==8)     sum=9;
        if(sum==20)     sum=8;
        if(sum==14)     sum=7;
        if(sum==1||sum==7||sum==13)     sum=6;
        if(sum==0)     sum=5;
        printf("\n%d is the grade of the steel\n",sum);

    }
    else
    printf("invalid input");
}