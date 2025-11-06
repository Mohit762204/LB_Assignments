#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iEvenfact = 1;
    int iOddfact = 1;
    int iDiff = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iEvenfact = iEvenfact * iCnt;
        }
        else
        {
            iOddfact = iOddfact * iCnt;
        }

        iDiff = iEvenfact - iOddfact;
    }

        return iDiff;

}
int main()
{
    int iValue =0;
    int iRet = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial Difference is : %d",iRet);

    return 0;
}
