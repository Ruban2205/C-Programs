// Write a C program to check the given number is Armstrong number or not. 

#include<stdio.h>
int main()
{
    int n, r, temp, sum=0;
    
    printf("Enter a Number: ");
    scanf("%d", &n);
    
    temp = n;
    
    while(n!=0){
        r = n % 10;
        sum = sum + (r * r * r);
        n = n / 10;
    }
    
    if(temp == sum)
    {
        printf("This is an Armstrong number\n");
    }
    else{
        printf("This is not an Armstrong number \n");
    }
}

