/*Create a function that accepts a float array as input and returns the maximum value of the array*/

#include<stdio.h>
int maximum(int);
int main()
{
    int n, i;
    float arr[100];
    
    printf("Enter the number of elements form 1 to 100: ");
    scanf("%d", &n);
    maximum(n);
    return 0;
}
int maximum(int n)
{
    int i;
    float arr[100];
    for(i=0;i<n;++i)
    {
        printf("Number%d: ", i+1);
        scanf("%f", &arr[i]);
    }
    for(i=1;i<n;++i)
    {
        if(arr[0]<arr[i])
            arr[0] = arr[i];
    }
    printf("Largest element = %.2f\n", arr[0]);
}
