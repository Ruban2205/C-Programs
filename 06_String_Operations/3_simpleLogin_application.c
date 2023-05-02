/*Write a C program to create a login application. Initialize two strings user[]="admin" and password[]="karunya". Allow the user to enter the username (case insensitive) and password. Then compare the entered user credentials with stored to print "Login successful" or "Invalid username or Password"*/

#include<stdio.h>
#include<string.h>
int main()
{
    char username[20];
    char password[20];
    
    printf("Enter the Username: ");
    scanf("%s", &username);
    
    printf("Enter the password: ");
    scanf("%s", &password);
    
    if(strcmp(username, "admin")==0)
    {
        if(strcmp(password, "karunya")==0)
        {
            printf("Login Successful \n");
        }
        else
        {
            printf("Wrong password\n");
        }
    }
    else
    {
        printf("Invalid username or password\n");
    }
    return 0;
}
