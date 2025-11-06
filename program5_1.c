#include<stdio.h>

void CheckEvenOdd(int num)
{
    if(num % 2 == 0)
    {
        printf("Even");
    }    
    else
    {
        printf("Odd");
    }
}
int main()
{
    int  number;

    printf("Enter Number :");
    scanf("%d",&number);

    CheckEvenOdd(number);

    return 0;
}