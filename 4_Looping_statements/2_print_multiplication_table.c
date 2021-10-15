// Write a C program to print the multiplication table of a number. Get the number and range from the user. 

#include<stdio.h>
int main()
{
    int number, i, range;
    
    printf("Enter an integer number: ");
    scanf("%d", &number);
    
    printf("Enter the range: ");
    scanf("%d", &range);
    
    for(i=1; i<=range; ++i)
    {
        printf("%d * %d = %d \n", number, i, number * i);
    }
    return 0;
}
