/* Write a C program to implement ticket booking application. Get the name and age of the
passenger to book the ticket. Check the age, if it is less than 6 years or greater than or equal
to 60 years then apply 30% concession to the original ticket price (Rs. 600). Otherwise
simply print tickets booked with the original ticket price. (Use if statement only)*/

#include<stdio.h>
int main()
{
    char name[20];
    int age, price = 600;
    
    printf("Enter your name: ");
    scanf("%s", &name);
    
    printf("Enter your age: ");
    scanf("%d", &age);
    
    if( age < 6 || age >= 60 )
    {
        price = price * 0.3;
        printf("You are eligible for the concession!! \n");
    }
    printf("Your Ticket is Booked \n");
    printf("Your ticket price is %d \n\n", price);
}
