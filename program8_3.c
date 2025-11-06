#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int ifact = 1;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        ifact = ifact * iCnt;
    }
    return ifact;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of Number is :%d",iRet);

    return 0;
}