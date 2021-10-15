//Write a program to swap two numbers using pass by value and pass by reference. 

#include<stdio.h>

void swap(int number1, int number2)
{
    int temp; 
    
    printf("The values before swapping: %d %d \n", number1, number2);
    temp = number1; 
    number1 = number2;
    number2 = temp; 
    printf("The values after swapping is: %d %d \n", number1, number2);
}

int main()
{
    int num1, num2;
    
    printf("Enter the 1st Number: ");
    scanf("%d", &num1);
    
    printf("Enter the 2nd Number: ");
    scanf("%d", &num2);
    
    printf("The values before swapping: %d %d \n", num1, num2);
    swap(num1, num2);
    printf("The values after swapping: %d %d \n \n", num1, num2);
    
    return 0;
}
