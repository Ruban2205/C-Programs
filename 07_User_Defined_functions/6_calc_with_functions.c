#include<stdio.h>
int addition(int, int);
int subtraction(int, int);
int multiplication(int, int);
int division(int, int);
int main()
{
    int x, y;
    float z;
    
    printf("Enter two integers\n");
    scanf("%d %d", &x, &y);
    
    printf("\n Addition of %d and %d is %d", x, y, addition(x,y));
    printf("\n Subtraction of %d and %d is %d", x, y, subtraction(x,y));
    printf("\n Multiplication of %d and %d is %d", x, y, multiplication(x,y));
    printf("\n Division of %d and %d is %f", x, y, division(x,y));
}

int addition(int x, int y)
{
    return (x+y);
}

int subtraction(int x, int y)
{
    return (x-y);
}

int multiplication(int x, int y)
    return (x*y);
}

int division(int x, int y)
{
    float z;
    z = (float) x/y;
    return (z);
}




