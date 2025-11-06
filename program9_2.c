#include<stdio.h>

int DollarToINR(int iNo)
{
    int iCnt = 70;

    return iCnt * iNo;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is  :%d",iRet);

    return 0;
} 