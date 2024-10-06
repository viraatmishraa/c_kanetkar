// The Body Mass Index (BMI) is defined as the ratio of the weight of a person (in kilograms) to the square of the height (in meters). Write a program that receives weight and height, calculates the BMI, and reports the BMI category as per the following table: - Underweight: BMI < 18.5 - Normal weight: 18.5 <= BMI < 25.0 - Overweight: 25.0 <= BMI < 30.0 - Obese: BMI >= 30.0 */
#include <stdio.h>
#include <stdlib.h>
void main()
{
    printf("\n\nenter the height and weight of the person in centimeter and kg\n\n");
    float height,weight;
    if(scanf("%f%f",&height, &weight))
    {
        if(height<=272.0&& height>=54.6 && weight>=2.1 && weight<=635)
        {
            float BMI= weight/((height*height)/10000);
            printf("BMI=%5.1f...",BMI);
            if( BMI < 18.5 )
            printf("\nunderweight");
            else if(18.5 <= BMI && BMI < 25.0)
            printf("\nnormal weight");
            else if(BMI >= 25.0 && BMI < 30.0)
            printf("\nover weight");
            else if(BMI>30.0)
            printf("\ngravity detected");
        }

        else{
            printf("unreal parameter");
            exit(0);
        }
    }else
    printf("invalid input");
    exit(0);
}