/*Write a C program using structure to create a payroll report of employees in an organization*/

#include<stdio.h>

struct emp
{
    int empno;
    char name[10];
    int allowances, basicPay, deductions, nPay;
}e[10];

void main()
{
    int i, n;
    
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    
    for(i=0; i<n; i++)
    {
        printf("\nEnter the employee number: ");
        scanf("%d", &e[i].empno);
        
        printf("\nEnter the Name: ");
        scanf("%s", e[i].name);
        
        printf("\nEnter the Basic pay, Allowances & Deductions: ");
        scanf("%d %d %d", &e[i].basicPay, &e[i].allowances, &e[i].deductions);
        
        e[i].nPay = e[i].basicPay + e[i].allowances - e[i].deductions;
    }
    
    printf("Employee.No.\tName\tBasic Pay\tAllow\tDeductions\tNpay\n\n");
    
    for(i=0; i<n; i++)
    {
        printf("%d\t%s\t%d\t%d\t%d\t%d\n", e[i].empno, e[i].name, e[i].basicPay, e[i].allowances, e[i].deductions, e[i].nPay);
    }
    getchar();
}

    