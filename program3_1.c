#include <stdio.h>

void PrintEven(int iNo)
{
    int iCnt = 0;   
    int iNum = 2;   

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d \n",iCnt);
        }  
    }

    
}

int main()
{
    int iValue = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return 0;
}
