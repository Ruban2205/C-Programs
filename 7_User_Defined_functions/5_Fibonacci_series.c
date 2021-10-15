/*Write a C program to print the Fibonacci series up to a given range. (Use recursive function)*/

#include<stdio.h>
int fibonacci(int);
int main()
{
    int n, m=0, i;
    
    printf("\n Enter total terms: \n");
    scanf("%d", &n);
    printf("\nFibonacci series terms are:\n");
    for(i = 1; i <= n; i++)
    {
        printf("%d\t", fibonacci(m));
        m++;
    }
    return 0;
}
int fibonacci(int n)
{
    if(n==0 || n==1)
        return n;
    else
        return(fibonacci(n-1) + fibonacci(n-2));
}