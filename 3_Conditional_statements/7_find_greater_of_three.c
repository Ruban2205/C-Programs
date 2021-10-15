// to find the greater of the three numbers 
#include<stdio.h> 
int main()
{
    int a, b, c;
    
    printf("Enter the First Number: ");
    scanf("%d", &a);
           
    printf("Enter the second number: ");
    scanf("%d", &b);
    
    printf("Enter the third number:");
    scanf("%d", &c);
    
    if(a>b && a>c){
        printf("a is greater. \n");
    }
    else if(b>a && b>c){
        printf("b is greater \n");
    }
    else if(c>a && c>b){
        printf("c is greater \n");
    }
    else{
        printf("All are equal \n");
    }
}