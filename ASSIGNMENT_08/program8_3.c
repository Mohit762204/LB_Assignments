/////////////////////////////////////////////////////////////////////////
//
//                      Required Header Files
//
/////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : Factorial
//  Description   : Computes factorial of a given number.
//  Input         : Integer (iNo)
//  Output        : Integer (Factorial of iNo)
//  Author        : Mohit Sandip Zalte
//  Date          : 29/10/2025
//
/////////////////////////////////////////////////////////////////////////

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}   // End of Factorial()

/////////////////////////////////////////////////////////////////////////
//
//                            Main Function
//
/////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;      // User input
    int iRet = 0;        // Stores factorial result

    printf("Enter Number : ");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial of Number is : %d\n", iRet);

    return 0;
}   // End of main()

/////////////////////////////////
