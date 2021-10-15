#include<stdio.h>
int fact(int x);
void main()
{
    int number, f;
    
    printf("Enter a number to find the factorial \n");
    scanf("%d", &number);
    
    f=fact(number);
    
    printf("Factorial of %d is %d", number, f);
    
}

int fact(int x)
{
    if(x<=1)
        return 1;
    
    return x * fact(x-1)
}
