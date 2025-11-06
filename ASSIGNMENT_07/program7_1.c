#include<stdio.h>

void pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf(" $ * ");
    }
}
int main()
{
    int iValue = 0;
    
    printf("Enter Number :");
    scanf("%d",&iValue);

    pattern(iValue);

    return 0 ;
}