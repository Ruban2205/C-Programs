/*Write a C program to check the eligibility of a candidate to poll his vote. If the candidate
age is 18 and above print “Eligible to Vote” otherwise print “Not Eligible”. (Use if else
statement)*/

#include<stdio.h>
int main()
{
    int age;
    
    printf("Welcome to Indian Election Commision!!\n");
    printf("\n->Enter your Age: ");
    scanf("%d", &age);
    
    if(age > 18){
        printf("\n You are Eligible for voting.\n\n");
    }
    else
        printf("\nYou are not Eligible for voting because your age is %d\n\n", age);
}