/*Write a C program to evaluate the expression (a + b) * c / d (e - f). Get the values of a, b, c,
d, e and f from the user. Explain the steps to achieve the result.*/

#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,x;
    printf("Enter the value of a: \n");
    scanf("%d", &a);
    
    printf("Enter the value of b: \n");
    scanf("%d", &b);
    
    printf("Enter the value of c: \n");
    scanf("%d", &c);
    
    printf("Enter the value of d: \n");
    scanf("%d", &d);
    
    printf("Enter the value of e: \n");
    scanf("%d", &e);
    
    printf("Enter the value of f: \n");
    scanf("%d", &f);
    
    x = (a + b) * c / d * (e - f);
    
    printf("The value of x is: %d \n",x);
}