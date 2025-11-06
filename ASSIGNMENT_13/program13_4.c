#include<stdio.h>

int sum_natural_numbers(int limit)
{
    int iCnt = 0;
    int isum = 0;
    for(iCnt = 1; iCnt <= limit; iCnt++)
    {
        isum = isum + iCnt;
    }
   
    return isum;
}

int main()
{
    int limit;

    printf("Enter Number:");
    scanf("%d",&limit);

    printf("%d\n",sum_natural_numbers(limit));

    return 0;
}
