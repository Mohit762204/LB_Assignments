#include <stdio.h>

int sum_of_factors(int number)
{
    int iCnt;
    int isum = 0;

    for(iCnt = 1; iCnt <= number; iCnt++)
    {
        if(number % iCnt == 0)  
        {
            isum = isum + iCnt;
        }
    }

    printf("Sum of all positive factors is: %d\n", isum);

    return 0;  
}

int main()
{
    int number;

    printf("Enter Number: ");
    scanf("%d", &number);

    sum_of_factors(number);  

    return 0;
}
