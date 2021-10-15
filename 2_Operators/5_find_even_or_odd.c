/*Write a C program to get an int input from the user. Check whether the number is positive
or negative and even or odd. (use ternary operator)*/

#include<stdio.h>
int main()
{
    int number1, number2;
    
    printf("Enter the value of Number1: \n");
    scanf("%d", &number1);
    
    printf("Enter the value of Number2: \n");
    scanf("%d", &number2);
    
    (number1>0)?printf("Number1 is positive \n") : printf("Number1 is negative \n");
    (number2>0)?printf("Number2 is positive \n") : printf("Number2 is negative \n");
    
    (number1%2==0)? printf("Number1 is even \n") : printf("Number1 is odd\n");
    (number2%2==0)? printf("Number2 is even \n") : printf("Number2 is odd\n");
}