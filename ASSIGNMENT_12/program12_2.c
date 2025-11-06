#include<stdio.h>

int Count_factors(int number)
{
    int iCnt = 0;
    int count = 0;
    for(iCnt = 1; iCnt <= number; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int number;

    printf("Enter Number :");
    scanf("%d",&number);

    printf("number of factors is :%d ",Count_factors(number));

    return 0;
}