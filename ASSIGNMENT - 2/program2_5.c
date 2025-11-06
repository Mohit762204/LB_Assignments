#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
    if(iNo % 2 == 0)
    {
        printf("Number is even ");
    }
    else
    {
        printf("Number is Odd");
    }
}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number :");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);
}