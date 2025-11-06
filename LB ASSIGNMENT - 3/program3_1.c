#include <stdio.h>

void PrintEven(int iNo)
{
    int iCnt = 0;   // Loop counter
    int iNum = 2;   // First even number

    if (iNo <= 0)
    {
        return;     // Exit if invalid input
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d ", iNum);
        iNum = iNum + 2;   // Move to next even number
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return 0;
}
