#include<stdio.h>
int main()
{
    int array[5],i;
    printf("Enter the values for the array \n");
    
    for(i=0;i<5;i++)
    {
        scanf("%d", &array[0]);
    }
    
    printf("%d \n", array);
    
    for(i=0;i<5;i++)
    {
        printf("%d \n", array[i]);
    }
}
