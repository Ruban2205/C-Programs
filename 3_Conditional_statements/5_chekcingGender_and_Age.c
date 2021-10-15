/*Write a C program to print a person is Boy/Girl/Women by checking their gender and age using nested if.*/

#include<stdio.h>
int main()
{
    int a;
    char b;
    
    printf("->Enter your gender M for male and F for female:");
    scanf("%c", &b);
    printf("\n->Enter your age:");
    scanf("%d", &a);
    
    if (b=='M' || b=='m')
    {
        if (a <= 25)
        {
            printf("\nYou are a BOY\n\n");
        }
        else
        {
            printf("\nYou are a MAN\n\n");
        }
    }
    else if (b=='F' || b=='f')
    {
        if (a<=20)
        {
            printf("\nYou are a GIRL\n\n");
        }
        else
        {
            printf("\nYou are a WOMAN\n\n");
        }
    }
    else
    {
        printf("\nOOPS YOUR INPUT IS WRONG!! TRY AGAIN WITH ANOTHER INPUT\n\n");
    }
}
