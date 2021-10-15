//Write a C program to perform various arithemetic operations
//Addition, Subtraction, Multiplication, Division and Modulus
#include<stdio.h>
int main()
{
    int A,S,M,D,Mod,a,b;
    
    printf("Enter the first number a: \n");
    scanf("%d", &a);
    
    printf("Enter the second number b: \n");
    scanf("%d", &b);
    
    A = a + b;
    
    S = a - b;
    
    M = a * b;
    
    D = a / b;
    
    Mod = a % b;
    
    printf("The value of addition is: %d \n", A);
    printf("The value of subtraction is: %d \n", S); 
    printf("The value of Multiplication is: %d \n", M);
    printf("The value of Division is: %d \n", D);
    printf("The value of Modulus is: %d \n", Mod);
}