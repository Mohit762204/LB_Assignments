#include<stdio.h>

void CheckLeapYear(int year)
{
    if(year % 400 == 0)
    {
        printf("%d is a leap year.",year);
    }

    else if(year % 100 == 0)
    {
        printf("%d is not a leap year.",year);
    }

    else if(year % 4 == 0)
    {
        printf("%d is a leap year.",year);
    }

    else
    {
        printf("%d is not a leap year.",year);
    }
}

int main()
{
    int year;

    printf("Enter year : \n");
    scanf("%d",&year);

    CheckLeapYear(year);

    return 0;
}