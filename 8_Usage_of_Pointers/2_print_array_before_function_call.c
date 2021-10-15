/*Write a C program to pass an array in a function. Search for an element and replace it with 0 inside the function. Print the array before function call and after function call*/

#include<stdio.h> 
int main()
{
    int arr[5], i, number; 
    
    printf("Enter the values for the array: \n");
    for(i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n Enter the number that you wants to be searched and replaced with 0: \n");
    scanf("%d", &number);
    
    printf("\nThe Main Array Before function call: \n");
    for(i=0; i<5; i++)
    {
        printf("%d\t", arr[i]);
    }
    search(arr, number);
    
    printf("\nThe Main Array After function call: \n");
    for(i=0; i<5; i++)
    {
        printf("%d\t", arr[i]);
    }
}

void search(int *arr, int number)
{
    int i; 
    for(i=0; i<5; i++)
    {
        if(*arr == number)
            *arr = 0;
        arr++;
    }
}
