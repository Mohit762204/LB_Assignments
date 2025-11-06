#include<stdio.h>

float percentage(float fNo1, float fNo2)
{
   if(fNo2 <= 0)
    {
        printf("total marks is must be greater than o:");
        return 0.0;
    }

    return (fNo1 / fNo2 ) * 100;
}
int main()
{
    int iValue1  = 0; int iValue2 = 0 ;
    float fRet = 0.0;

    printf("Please Enter obtained marks :");
    scanf("%d",&iValue1);

    printf(" Please Enter total Marks :");
    scanf("%d",&iValue2);

    fRet = percentage(iValue1, iValue2);

    printf("percentage is :%.2f",fRet);

    return 0;

}