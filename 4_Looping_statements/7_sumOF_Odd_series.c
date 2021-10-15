/*Find the sum of the following sequence 1^2+3^2+5^2+.....+n^2
Identify the inputs and outputs 
Identify the method to solve the problem 
input n 
output: Sum of odd series
*/

#include<stdio.h>
int main()
{
    int n, i;
    printf("Enter the value:");
    scanf("%d", &n);
    
    for(i=1; i<=n; i=i+2);
    {
        sum = sum + (i*j);
    }
    printf("The sum of odd square series is: %d", sum);
}
