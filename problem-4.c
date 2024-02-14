// Credit siyam- 23024005
#include<stdio.h>
int main()
{
    int temperature, i;
    int calculate;
     printf("Enter Maximumt Temperature In celsius: ");
     scanf("%d", &temperature);
     printf("|========================|===========================|");
     printf("\n|\t            Temperature Conversion Table\t     |");
     printf("\n|========================|===========================|");
     printf("\n|              Celsius \t | \t Fahrenheit \t         |");
     printf("\n|========================|===========================|");

          for(i=0; i<=temperature; i++)
     {
         if(i%10 == 0)
         {
             calculate = (i*(9/5)) + 32;
             printf("\n| \t      %10d     |\t   %2d            \t\t |",i,calculate );
         }
     }
     printf("\n|========================|===========================|");
}
