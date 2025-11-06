#include<stdio.h>

int RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt = 0;
    for(iCnt = iEnd; iCnt >= iStart; iCnt--)
    {
      printf("%d ",iCnt);
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter starting Number :");
    scanf("%d",&iValue1);

    printf("Enter Ending Number :");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1,iValue2);

    return 0;
}