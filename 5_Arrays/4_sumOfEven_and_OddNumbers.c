//Write C program to find the sum of even and odd numbers in the given array 
// array[10]={1,2,3,4,5,6,7,8,9,10}

#include <stdio.h>

int main()
{
    int array[10]={1,2,3,4,5,6,7,8,9,10};
    int even_sum=0, odd_sum=0, i;
    
    for(i=0;i<10;i++)
    {
        if(array[i]%2==0)
            even_sum+=array[i];
        else
            odd_sum+=array[i];
    }
    
    printf("The sum of even numbers in the given array is %d \n", even_sum);
    printf("The sum of odd numbers in the given array is %d \n", odd_sum);
}