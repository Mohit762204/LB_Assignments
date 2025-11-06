#include<stdio.h>

int FactDiff(int iNo)
{
   int iCnt = 0;
   int ifactSum = 0;
   int iNonFactSum = 0;
   
   for(iCnt = 1; iCnt < iNo ; iCnt++)
   {
        if(iNo % iCnt == 0)
        {
            ifactSum += iCnt;
        }
        else
        {
            iNonFactSum += iCnt;
        }
   }
    return ifactSum - iNonFactSum ;
}
int main ()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);

    return 0;
}