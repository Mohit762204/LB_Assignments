#include<stdio.h>

int sum_even_numbers(int limit)
{
    int iCnt = 0;
    int isum = 0;
    for(iCnt = 0; iCnt <= limit; iCnt++)
    {
        isum += 2 * iCnt;
    }

    return isum;
}
int main()
{
    int limit;

    printf("Enter Number:");
    scanf("%d",&limit);

    printf("%d ",sum_even_numbers(limit));

    return 0;
}