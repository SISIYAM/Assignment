#include <stdio.h>
int main()
{
    int i, j, n;

    // here variable i for rows
    // variable j for collums
    printf("Enter number of rows: ");
    scanf("%d", &n);

    // print rows
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }
    return 0;
}
