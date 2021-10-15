//Write a program in C to copy the elements of one array into another array

#include<stdio.h>
int main()
{
    int originalArray[10]={1,2,3,4,5,6,7,8,9,10};
    int copyArray[10],i;
    
    printf("\nCopy the Elements of one array into another array\n\n");
    
    for(i=0;i<10;i++)
    {
        printf("The original array is: %d\n", originalArray[i]);
    }
    
    for(i=0;i<10;i++)
    {
        copyArray[i]=originalArray[i];
    }
    
    for(i=0;i<10;i++)
    {
        printf("The copied array from the original array is: %d\n", copyArray[i]);
    }
}

        
    