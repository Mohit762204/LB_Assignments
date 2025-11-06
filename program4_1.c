#include<stdio.h>

int MultFact(int iNo)
{
    int iCnt = 0;
    int iMult = 1;   // Start with 1 for multiplication

    if (iNo <= 0)
    {
        iNo = -iNo;  // Handle negative numbers
    }

    for (iCnt = 1; iCnt <= iNo / 2; iCnt++)
    {
        if (iNo % iCnt == 0)   // Check if i is a factor
        {
            iMult = iMult * iCnt;   // Multiply the factor
        }
    }

    return iMult;


}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("%d",iRet);

    return 0 ;
}