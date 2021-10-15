// Write a C program to sory an array using pointer as argument and dynamic memory allocation

#include<stdio.h>
#include<stdlib.h>

void sorting(int n, int *ptr)
{
    int i, j, t;
    
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(*(ptr+j) < *(ptr + i))
            {
                t = *(ptr + i);
                *(ptr + i) = *(ptr + j); 
                *(ptr + j) = t; 
            }
        }
    }
}

int main()
{ 
    int *ptr; 
    int n, i; 
    
    printf("\nEnter the size of an Array that you want to be Created: ");
    scanf("%d", &n);
    
    ptr = (int*)malloc(n*sizeof(int));
    if(ptr == NULL)
    {
        printf("Memory Not Allocated. \n");
        exit(0);
    }
    else
    {
        printf("\nEnter the Elements in the array: ");
        for(i=0; i<n; i++)
        {
            scanf("%d", &ptr[i]);
        }
    }
    sorting(n, ptr);
    for(i=0; i<n; i++)
        printf("%d\t", *(ptr + i));
    return 0; 
}

