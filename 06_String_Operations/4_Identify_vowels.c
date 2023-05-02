/*Write a C program to get full name as input from the user. Identify the vowels in the full name and change it to uppercase.*/
#include<stdio.h>
int main()
{
    char str1[100];
    int i;
    
    printf("Enter your Name: ");
    gets(str1);
    
    printf("The original string is: ");
    puts(str1);
    
    i=0;
    
    while(str1[i]!='\0')
    {
        if(str1[i]=='a' || str1[i]=='e' || str1[i]=='i' || str1[i]=='o' || str1[i]=='u')
            str1[i]=str1[i]-32;
        i++;
    }
    
    printf("After Converting vowels into uppercase: \n");
    puts(str1);
}
