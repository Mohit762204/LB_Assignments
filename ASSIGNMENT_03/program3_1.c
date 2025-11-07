#include <stdio.h>

void PrintEven(int iNo)
{
    int iCnt = 0;   // Loop counter

    if (iNo <= 0)
    {
        return;     
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d ", iCnt * 2);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return 0;
}
