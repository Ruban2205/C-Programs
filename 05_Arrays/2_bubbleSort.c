//Bubble sort algorithm (Important sorting program )

#include<stdio.h>
void main()
{
    int i, j, swap, n; 
    printf("Enter the value of N \n");
    scanf("%d", &n);
    
    int array[n]; //declaration of array 
    
    printf("Enter the numbers \n");
    for (i = 0; i < n; ++i)
        scanf("%d", &array[i]);
    
    // array[5] = { 5,2,6,3,1}
    
    for(i = 0; i < n; ++i)
    {
        for(j = i + 1; j < n; ++j)
        {
            if (array[i] > array[j]) // for decreasing order use '<' instead of '>'
            {
                swap = array[i]; 
                array[i] = array[j];
                array[j] = swap;
            }
        }
    }
    
    /*
    array[5] = {5,2,6,3,1}
    array[0] > array[1]
    5>2? true
    array[0]=5
    array[1]=2
    
    sway=array[0]; swap = 5;
    array[0] = array[1]; //array[0]=2
    array[1]=swap; array[1]=5
    
    array[0]=2
    array[1]=5
    
    {2,5,6,3,1}
    
    */
    
    printf("The numbers arranged in acending order are given below\n");
    for (i = 0; i < n; ++i)
        printf("%d\n", array[i]);
}