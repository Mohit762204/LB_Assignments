#include<stdio.h>

void CheckNumberType(int num)
{
    if(num > 0)
    {
        printf("Positive Number");
    }
    else if(num < 0)
    {
        printf("Negative Number");
    }
    else
    {
        printf("Zero");
    }
}
int main()
{
    int number;

    printf("Enter Number :");
    scanf("%d",&number);

    CheckNumberType(number);

    return 0;
}