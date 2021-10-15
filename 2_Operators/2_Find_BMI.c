/*Write a C program to calculate the Body Mass Index using the following formula. Get the
input weight as kilograms (kg) and height in centimeters (cm) from the user. Convert the cm
to meters (1m = 100 cm).

BMI =
Weight (kg)
Height (m)
2*/

#include<stdio.h>
int main()
{
    float height, weight, BMI, h;
    printf("Enter your height (cm): \n");
    scanf("%f", &weight);
    
    printf("Enter your weight (kg): \n");
    scanf("%f", &height);
    
    h = height/100*height/100;
    
    BMI = weight/h;
    
    printf("Your BMI is: %f \n", BMI);
}