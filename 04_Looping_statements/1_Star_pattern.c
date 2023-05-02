//Write a C program to print the following pattern

#include<stdio.h>
int main()
{
    int i, k, row=5, count=1;
    count = row - 1;
    
    for(k=1; k<=row; k++)
    {
        for(i=1; i<=count; i++)
        {
            printf(" ");
        }
        count--;
        
        for(i=1; i<=2*k-1; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    count=1;
    
    for(k=1; k<=row-1; k++)
    {
        for(i=1; i<=count; i++)
        {
            printf(" ");
        }
        count++;
        
        for(i=1; i<=2*(row-k)-1; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
