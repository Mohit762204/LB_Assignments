#include<stdio.h>

void print_factors(int number)
{
   int iCnt = 0;
   for(iCnt = 1; iCnt <= number; iCnt++)
   {
    if(iCnt % 2 == 0)
    {
        printf("%d ",iCnt);
    }
   }
}
int main()
{
    int number ;

    printf("Enter Number :");
    scanf("%d",&number);

    print_factors(number);

    return 0 ;
}