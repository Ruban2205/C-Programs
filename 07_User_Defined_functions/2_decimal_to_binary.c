/*Write a C program to crate a user defined function that accepts a decimal number as input and prints the binary equivalent of the number.*/

#include<stdio.h>
#include<stdlib.h>
int binary(int);
int main()
{
    int n,i,a[10];
    printf("Enter the number that you want to Convert: ");
    scanf("%d", &n);
    
    binary(n);
    return(0);
}

int binary(int n)
{
    int a[10],i;
    for(i=0;n>0;i++)
    {
        a[i]=n%2;
        n=n/2;
    }
    printf("Binary form of the given number is= ");
    for(i=i-1;i>=0;i--)
    {
        printf("%d", a[i]);
    }
}
