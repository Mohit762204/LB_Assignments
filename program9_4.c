#include<stdio.h>


int OddFactorial(int iNo)
{
    int iCnt = 0;
    int ifact = 1;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            ifact = ifact * iCnt;
        }
    }
    return ifact;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of Number is : %d",iRet);

    return 0;
}