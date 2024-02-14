// owner siyam-23024005
#include<stdio.h>
int main()
{
    int age;
    float sum;
    printf("Enter Age: ");
    scanf("%d", &age);

    if(age > 0)
    {

    if(age <= 2)
    {
        printf("Guests aged 2 years and less :Free admission");
    }else if(age>2 && age<12)
    {
        printf("Children between 3 and 12 years: $14.00");
    }else if(age>=65)
    {
        printf("Seniors aged 65 years and over: $18.00");

    }else
    {
        printf("All other guests: $23.00");
    }

    sum = 14+18+23;
    printf("\n Total Admission cost: $%.2f ", sum);
    }
    else{
        printf("Age cannot be negative");
    }
}
