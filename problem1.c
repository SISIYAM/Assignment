// Credit siyam- 23024005
#include<stdio.h>
int main()
{
    int i,n;

    printf("Enter value of n: ");
    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        if(i%7 !=0 )
        {
            printf("Cannot be divided by 7 : %d \n", i);
        }
    }

    return 0;
}
