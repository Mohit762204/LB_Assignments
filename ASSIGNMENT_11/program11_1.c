#include<stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;
    
    if(iStart > iEnd)
    {
        printf("Invalid Range !");
    }
    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        printf("%d ",iCnt);
    }
}
int main()
{
    int iValue1 = 0; 
    int iValue2 = 0;

    printf("Enter Start Number :");
    scanf("%d",&iValue1);

    printf("Enter End Number :");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);

    return 0;
}