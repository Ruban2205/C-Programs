//Write a C program to calculate the gross salary for the conditions given below:

#include <stdio.h>
int main()
{
     float bs, hra, da, cv, gs;
     printf("Enter Basic Salary : ");
     scanf("%f", &bs);

     if(bs >= 5000)
     {
          da = 110 * bs / 100;
          hra = 20 * bs / 100;
          cv = 500;
     }
     else if(bs >= 3000 && bs < 5000)
     {
          da = 100 * bs / 100;
          hra = 15 * bs / 100;
          cv = 400;
     }
     else if( bs < 3000)
     {
          da = 90 * bs / 100;
          hra = 10 * bs / 100;
          cv = 300;
     }
     gs = bs + da + hra + cv;
     printf("Basic Salary   : %.f \n",bs);
     printf("DA             : %.f \n",da);
     printf("HRA            : %.f \n",hra);
     printf("Conveyance     : %.f \n",cv);
     printf("Gross Salary   : %.f \n",gs);
     return 0;
}    