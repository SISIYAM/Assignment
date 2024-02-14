// Credit siyam- 23024005
#include <stdio.h>
int main()
{
  int num1, num2, i, n, primeNumber;

  printf("Enter value of two numbers: ");
  scanf("%d %d", &num1, &num2);

  if (num1 < num2)
  {
    printf("\n Prime numbers between %d and %d: ", num1, num2);
    for (i = num1; i <= num2; i++)
    {
      primeNumber = 0;
      if (i <= 1)
      {
        primeNumber++;
      }
      for (n = 2; n < i; n++)
      {
        if (i % n == 0)
        {
          primeNumber++;
          break;
        }
      } // end for loop

      if (primeNumber == 0)
      {
        printf("%d ", i);
      }
    }
    printf("\n");
  }
  else
  {
    printf("The range is invalid. The start number should be less than end number");
  }
}
