/*Write a C program to show the usage of string library functions. 
Find the lengthh of the string 
Copying the string 
Compare two string 
Concatenate two string*/

#include<stdio.h>
#include<string.h> 
int main()
{
    int len, comp; 
    char name1[50] = "Ruban";
    char name2[50] = "Gino";
    char name3[50] = "Singh";
    char name4[50];

    len = strlen(name1);
    
    printf("\nThe length of the given name: %d \n", len);
    printf("Copy of the string is: ");
    strcpy(name4, name1);
    printf("%s\n", &name4);
    
    printf("Comparision of a string is: ");
    comp = strcmp(name1, name3);
    
    printf("%d \n", comp);
    printf("Concatenate of string is: ");
    strcat(name1, name2);
    printf("%s\n\n", name1);
}
