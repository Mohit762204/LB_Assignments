#include<stdio.h>

int multiply(int iNo1 ,int iNo2, int iNo3)
{
    if(iNo1 == 0, iNo2 == 0, iNo3 == 0)
    {
        printf("One of the numbers is 0. Multiplication will be 0.\n");
    
        return 0;
    }
    return iNo1*iNo2*iNo3;
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