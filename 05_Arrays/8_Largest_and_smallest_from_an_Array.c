/*Write a C program to get 10 numbers from the user and find the largest and smallest number of the array and print it's index value.*/

#include<stdio.h> 
int main()
{
    int a[10], i, minimum, index1, maximum, index2;
    
    printf("\n Enter 10 numbers: ");
    for(i=0; i<10; i++)
    {
        scanf("%d", &a[i]);
    }
    
    minimum = a[0];
    maximum = a[0];
    
    for(i=0; i<10; i++)
    {
        if(minimum > a[i])
        {
            minimum = a[i];
            index1 = i;
        }
        if(maximum < a[i])
        {
            maximum = a[i];
            index2 = i;
        }
    }
    
    printf("\n The smallest number is = %d", minimum); 
    printf("\n Index of the smallest number = %d", index1);
    
    printf("\n The Largest Number is: %d", maximum); 
    printf("\n Index of the largest number: %d\n\n", index2);
    return 0;
}
