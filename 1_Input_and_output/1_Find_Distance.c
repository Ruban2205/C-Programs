//write a C program to calculate distance travelled by a vehicle using the formula 
//distance=speed*time
#include<stdio.h>
int main()
{
    int speed, time, distance;
    printf("Enter the Speed in Kms: \n");
    scanf("%d", &speed);
    
    printf("Enter the time: \n");
    scanf("%d", &time);
    
    distance = speed*time;
    printf("Distance travelled by a vehicle is: %d Km \n", distance);
}      