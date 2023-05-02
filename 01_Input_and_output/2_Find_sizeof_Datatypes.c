// Write a C program to print the size of the built-in datatypes using sizeof() operator. 

#include<stdio.h>
int main()
{
    int int_var;
    float float_var;
    char char_var;
    
    int int_array[5];
    
    int size;
    
    printf("Size of the integer variable is %d\n", sizeof(int_var));
    printf("Size of float variable is %d\n", sizeof(float_var));//sizeof represents the size of the byte taken by itself 
    
    size = sizeof(char_var);
    
    printf("Size of float variable is %d\n", sizeof(char_var));
    
    printf("Size of short variable is %d\n", sizeof(short));
    
    printf("Size of long variable is %d\n", sizeof(long));
    
    printf("Size of double variable is %d\n", sizeof(double));
    
    printf("Size of integer array is %d\n", sizeof(int_array));
}
