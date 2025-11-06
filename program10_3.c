#include<stdio.h>

int KMtoMeter(int iNo)
{
    int Meter = 0;
    Meter = iNo * 1000;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Distance :");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("km into Meter :%d",iRet);

    return 0;
}