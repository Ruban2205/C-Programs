/*Write a C program find the roots of a quadratic equation using the following formula. Use
appropriate library functions(math.h).*/

#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,root1,root2;
    
    printf("Enter the value of a: \n");
    scanf("%d", &a);
    
    printf("Enter the value of b: \n");
    scanf("%d", &b);
    
    printf("Enter the value of c: \n");
    scanf("%d", &c);
    
    root1 = -b+(sqrt(b^2-4*a*c))/2*a;
    
    root2 = -b-(sqrt(b^2-4*a*c))/2*a;
    
    printf("The value of root1 is: %d \n", root1);
    printf("The value of root2 is: %d \n", root2);
}