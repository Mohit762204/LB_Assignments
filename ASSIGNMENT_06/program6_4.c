#include<stdio.h>

int multiply(int iNo1 ,int iNo2, int iNo3)
{
    int result = 1;

    if (iNo1 != 0)
        result = result * iNo1;

    if (iNo2 != 0)
        result = result * iNo2;
    if (iNo3 != 0)
        result = result * iNo3;

        return result;
}
int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0,iRet = 0;

    printf("Please Enter Three Numbers :");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    iRet = multiply(iValue1,iValue2,iValue3);

    printf("Multiplication of three numbers is :%d",iRet);

    return 0;
}