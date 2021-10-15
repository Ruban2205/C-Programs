/*Write a C program to perform two dimensional array operations. Get the row and column size from the user and create two dimensional array. Checks the compatibility of two matrices to be added, subtraction and multiplication and perform the operations for two matrices. Get the input from the user.*/

#include<stdio.h> 
int main()
{
    int a[10][10], b[10][10], i, j, m, n, p, q;
    printf("Enter the number of rows for the first matrix: ");
    scanf("%d", &m);
    printf("Enter the number of columns for first matrix: ");
    scanf("%d", &n);
    printf("Enter the number of rows for second matrix: ");
    scanf("%d", &p);
    printf("Enter the number of columns for the second matrix: ");
    scanf("%d", &q);
    
    if((m==p)&&(n==p))
    {
        printf("Enter the values for first matrix: ");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        
        printf("Enter the values for second matrix: ");
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
        
        printf("Addition of two matrices is: \n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d\t", a[i][j]+b[i][j]); 
            }
            printf("\n");
        }

        printf("Subtraction of two matrices is: \n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d\t", a[i][j]-b[i][j]); 
            }
            printf("\n");
        }
    }
    
    else
        
    {
        printf("Matrix addition and subtraction are impossibe.\n");
    }
    if(n==p)
    {
        printf("Multiplication of two matrices is: \n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d\t", a[i][j]*b[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Matrix multiplication is impossible!!\n");
    }
}

            
        
                
                
                
                
                
                
                
                