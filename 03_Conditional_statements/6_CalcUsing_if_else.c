//Write a C program to create a basic arithmetic calculaor using switch statement. 

#include<stdio.h>
int main()
{

    char a;
    int num1,num2,result=0;

    printf("\nEnter your operation'+' '-' '*' '/' \n");
    scanf("%s",&a);
    printf("\nEnter num1 and num2\n");
    scanf("%d""%d",&num1,&num2);
    
    switch (a)
    {
        case '+':
            printf("\nThe add value is::%d\n",num1+num2);
            break;

        case '-':
            printf("\nThe add value is::%d\n",num1-num2);
            break;

        case '*':
            printf("\nThe add value is::%d\n",num1*num2);
            break;

        case '/':
            printf("\nThe add value is::%d\n",num1/num2);
            break;

        default:
            printf("\nThe entered number is ivalid\n");
    }
}