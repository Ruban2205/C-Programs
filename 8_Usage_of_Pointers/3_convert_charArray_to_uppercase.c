/*Write a program to pass a character array in a function. Convert the character array to
uppercase inside the function. Print the array before function call and after function call.*/

#include<stdio.h> 
#include<string.h>
void convert(char *str)
{
    int i; 
    
    while(*str != '\0')
    {
        *str = toupper(*str);
        str++;
    }
}

int main()
{
    int i; 
    char str[10];
    
    printf("\nEnter a String (Only in Lower case): \n");
    scanf("%s", &str);
    printf("\nThe String Before Function Call: %s\n", str);
    
    convert(str);
    
    printf("\nCharacter Array After function call: %s\n\n", str);
}

