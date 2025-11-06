#include<stdio.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;   // loop counter

    for(iCnt = 1; iCnt <= iFrequency; iCnt++ )
    {
        printf("%d",iNo);
    }
}

int main()
{
    int iValue = 0;
    int iFrequency = 0;

    printf(" Enter Number :");
    scanf("%d",&iValue);

    printf("Enter Frequency :");
    scanf("%d",&iFrequency);

    Display(iValue, iFrequency);

    return 0;
}