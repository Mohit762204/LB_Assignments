#include<stdio.h>

void print_numbers(int limit)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt <= limit; iCnt++)
    {
        printf("%d ",iCnt);
    }
}
int main()
{
    int limit;
    printf("Enter Number:");
    scanf("%d",&limit);

    print_numbers(limit);

    return 0;
}
