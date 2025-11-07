#include<stdio.h>

void CheckNumberType(int num)
{
    if(num > 0)
    {
        printf("%d is a Positive number.",num);
    }

    else if(num < 0)
    {
        printf("%d is a Negative number.",num);
    }

    else
    {
        printf("%d is a Zero.",num);
    }
}

int main()
{
    int number = 0;

    printf("Enter number : \n");
    scanf("%d", &number);

    CheckNumberType(number);

    return 0;
}