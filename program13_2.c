#include<stdio.h>
void print_even_numbers(int limit)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt <= limit; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            printf("%d ",iCnt);
        }
    }
}
int main()
{
    int limit;

    printf("Enter Number:");
    scanf("%d",&limit);

    print_even_numbers(limit);

    return 0;
}