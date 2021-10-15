/*Create a Structure Date to initiate date_of_birth and current_date to calculate the age of a person.*/

#include<stdio.h>
#include<stdlib.h>

int currentDate, birthDate, calculatedDate, currentMonth, birthMonth, calculatedMonth, currentYear, birthYear, calculatedYear; 

void year(int currentDate, int currentMonth, int currentYear, int birthDate, int birthMonth, int birthYear)
{
    if(birthDate > currentDate)
    {
        currentMonth = currentMonth - 1;
        currentDate = currentDate + 30;
    }
    if(birthMonth > currentMonth)
    {
        currentYear = currentYear - 1;
        currentMonth = currentMonth + 12;
    }
    if(birthYear > currentYear)
    {
        exit(0);
    }
    
    calculatedDate = currentDate - birthDate;
    calculatedMonth = currentMonth - birthMonth; 
    calculatedYear = currentYear - birthYear; 
    
    printf("\nYour Present Age \nYears: %d\t Months: %d\t Days: %d\n", calculatedYear, calculatedMonth, calculatedDate);
}

int main()
{
    printf("\nEnter current date details below!! ");
    
    printf("\nEnter Today's Date: \t");
    scanf("%d", &currentDate);
    
    printf("Enter Current Month: \t");
    scanf("%d", &currentMonth);
    
    printf("Enter Current Year: \t");
    scanf("%d", &currentYear);
    
    printf("\nEnter your birth details: \n");
    
    printf("Enter Day: \t");
    scanf("%d", &birthDate);
    
    printf("Enter Month: \t");
    scanf("%d", &birthMonth);
    
    printf("Enter Year: \t");
    scanf("%d", &birthYear);
    
    year(currentDate, currentMonth, currentYear, birthDate, birthMonth, birthYear);
    
    return 0;
}
