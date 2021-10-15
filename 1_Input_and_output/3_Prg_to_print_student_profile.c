// Write a C program to print your student profile. 
#include<stdio.h>
int main()
{
    char regno[10];
    char name[10];
    int age;
    int dob;
    
    printf("Enter your Register number:\n");
    scanf("%s", &regno);
    
    printf("Enter your Name:\n");
    scanf("%s", &name);
    
    printf("Enter your age:\n");
    scanf("%d", &age);
    
    printf("Enter your DOB:\n");
    scanf("%d", &dob);
    
    printf("Name: \t Reg No: \t Age: \t DOB: \n");
    printf("%s \t %s \t %d \t %d \n",name,regno,age,dob);
}