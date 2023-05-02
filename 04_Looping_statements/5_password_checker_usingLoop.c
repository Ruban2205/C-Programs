/*Write a C program to read a password until it is correct. For wrong password print "Incorrect
password" and for correct password print "Correct password" and quit the program. The correct
password is 1234. Allow only 3 incorrect password attempts and if it exceeds quit the program.*/

#include<stdio.h>
int main(void)
{
    int enteredPassword, password=1234;
    int i = 0;
    
    printf("Enter the password: ");
    scanf("%d", &enteredPassword);
    
    if(password == enteredPassword)
    {
        printf("Login Successful \n ");
    }
    else
    {
        printf("Login Failed!! Please Try again...\n");
    }
    
    for(i = 0; i <= 2; i++)
    {
        printf("Enter the password: ");
        scanf("%d", &enteredPassword);
        
        if(password == enteredPassword)
        {
            printf("Login Successful \n");
        }
        else
        {
            printf("Login Failed!! Please Try again...\n");
        } 
    }
}