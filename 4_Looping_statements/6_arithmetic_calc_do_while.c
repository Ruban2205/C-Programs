/*Write a C program to develop a basic arithmetic calculator with options

1. Add,
2. Sub,
3. Mul,
4. Div,
5. Modulus,
6. Pow.

After every operation ask the user “Do you want to continue y/n” use a do while loop to
continue or to quit the calculator.*/

#include<stdio.h>
void main()
{
    int a,b,c,d;
    float e;
    char z='y';
    do
    {
        printf("Enter the Values:\n");
        scanf(" %d%d",&a,&b);
        
        printf("MENU\n");
        printf("1)Addition\n");
        printf("2)Subtration\n");
        printf("3)Multiplication\n");
        printf("4)Division\n");
        printf("5)Modulus\n");
        
        printf("Enter the choice:\n");
        scanf(" %d",&d);
        
        switch(d)
              {
                  case 1:
                   printf("You have chosen Addition\n");
                   c=a+b;
                   printf("The result is : %d \n",c);
                   break;
            
                  case 2:
                   printf("You have chosen Subtraction \n");
                   c=a-b;
                   printf("The result is : %d \n",c);
                   break;
            
                  case 3:
                   printf("You have chosen Multiplication\n");
                   c=a*b;
                   printf("The result is : %d \n",c);
                   break;
            
                 case 4:
                  printf("You have chosen Division\n");
                  e=(float) a/b;
                  printf("The result is : %f \n",e);
                  break;
            
                case 5:
                 printf("You have chosen Modulus\n");
                 c=a%b;
                 printf("The result is : %d \n",c);
                 break;
            
                default:
                 printf("WRONG CHOICE....!! \n");
                
        }
        printf("Do you want to continue(y/n):\n");
        scanf(" %c",&z);
        
    }while( z=='y' || z=='Y');
    switch(d);
}