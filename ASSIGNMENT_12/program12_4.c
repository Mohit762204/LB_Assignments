#include<stdio.h>

int sum_of_even_factors(int number)
{
    int iCnt = 0;
    int isum = 0;
    for(iCnt = 1; iCnt < number; iCnt++)
    {
        if(number % iCnt == 0 && iCnt % 2 == 0)
        {
            isum += iCnt;
        }
    }
    
    return isum ;
}
int main()
{
    int number ;

    printf("Enter Number: ");
    scanf("%d",&number);

    printf("sum of all positive even number is :%d",sum_of_even_factors(number));

    return 0;
}