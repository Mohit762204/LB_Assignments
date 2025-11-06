#include<stdio.h>

double SquareMeter(int iValue)
{
    double dmeter = 0.0;
    dmeter = iValue * 0.0929;
    return dmeter;
}
int main()
{
    int iValue = 0;
    double dRet = 0;

    printf("Enter area in square feet :");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter is :%lf",dRet);

    return 0;
}