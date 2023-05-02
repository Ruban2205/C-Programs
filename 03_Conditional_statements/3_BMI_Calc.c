/*Write a C program to calculate the Body Mass Index using the following formula. Get the
input weight as kilograms (kg) and height in centimeters (cm) from the user. Convert the cm
to meters (1m = 100 cm).
Calculate the BMI and print the BMI category as per the following table*/

#include<stdio.h>
int main()
{
    int height, weight, BMI, h;
    
    printf("Enter your height in (cm): ");
    scanf("%d", &height);
    printf("Enter your weight in kg: ");
    scanf("%d", &weight);
    
    h = height/100;
    
    BMI = weight/(h*h);
    
    if(BMI < 15){
        printf("\nStarvation\n\n");
    }
    else if(BMI >= 15.1 && BMI <= 17.5){
        printf("\nAnorexic!!\n\n");
    }
    else if(BMI >= 17.6 && BMI <= 18.5){
        printf("\nUnder Weight\n\n");
    }
    else if(BMI >= 18.6 && BMI <= 24.9){
        printf("\nIdeal\n\n");
    }
    else if(BMI >= 25 && BMI <= 29.9){
        printf("\nOver Weight\n\n");
    }
    else if(BMI >= 30 && BMI <= 39.9){
        printf("\nObese\n\n");
    }
    else
        printf("\nMorbidly obese\n\n");
}

