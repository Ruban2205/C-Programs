// print the patten using c program
/*Input/output:*
Other Observations:* is printed for 5 rows and for each row it is getting incremented
Method: for loop 

printf("*");
*/

#include<stdio.h>
int main()
{
    int i,j;
    
    for(i=0; i<=5; i++) 
    {
        {
            printf("* ");
        }
        printf("\n");
        }
        for(j=5; j>=i; j--)
        {
            printf(" *");
        }
        printf("\n");
}
