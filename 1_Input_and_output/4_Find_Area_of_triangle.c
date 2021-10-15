//Write a C program to find the area of triangle using the formula of 
//s=(a+b+c)/2
//area=root(s(s-a)(s-b)(s-c))
#include<stdio.h>
#include<math.h>
int main(void)
{
    double a,b,c,s,area;
    
    printf("Enter the value of a: \n");
    scanf("%lf", &a);
    
    printf("Enter the value of b: \n");
    scanf("%lf", &b);
    
    printf("Enter the value of c: \n");
    scanf("%lf", &c);
    
    s = (a+b+c)/2;
    
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    
    printf("The Area of triangle is: %lf \n", area);
}