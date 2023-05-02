//Write a c program tto find an element from the given array. Print the element index value if found. 

#include<stdio.h>
int main()
{
    int i,n,search; 
    printf("Enter the size of an array: ");
    scanf("%d", &n);
    
    int array[n]; //array declaration 
    
    printf("Enter the values for the array:");
    
    for(i=0;i<n;i++)
    {
        scanf("%d", &array[i]); //array initialization 
    }
    
    printf("Enter the element to be searched:");
    scanf("%d", &search);
    
    for(i=0;i<n;i++)
    {
        if(search==array[i])
        {
            printf("Element is to be searched is: %d", i);
        }
    }
}
