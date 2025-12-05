/////////////////////////////////////////////////////////////////////////
//
//                      Required Header Files
//
/////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : MultiplyDigits
//  Description   : Returns multiplication of all digits of a given number.
//  Input         : Integer (number)
//  Output        : Integer (product of digits)
//  Author        : Mohit Sandip Zalte
//  Date          : 06/12/2025
//
/////////////////////////////////////////////////////////////////////////

int MultDigits(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    if(iNo < 0)                 // Handle negative number
    {
        iNo = -iNo;
    }

    if(iNo == 0)                // Special case: If number is 0
    {
        return 0;               // Multiplication becomes 0
    }

    // Process each digit
    for(iCnt = 0; iNo != 0; iNo = iNo / 10)
    {
        iCnt = iNo % 10;

        iMult = iMult * iCnt; // Multiply digits
    }

    return iMult;
}   // End of MultiplyDigits()

/////////////////////////////////////////////////////////////////////////
//
//                            Main Function
//
/////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    iRet = MultDigits(iValue);

    printf("Multiplication of digits: %d\n", iRet);

    return 0;
}   // End of main()

/////////////////////////////////////////////////////////////////////////
//
//                              TEST CASES
//
//  1. Input : 1234
//     Digits → 1,2,3,4
//     Output : 24
//
//  2. Input : 1012
//     Digits → 1,0,1,2  → product = 0
//     Output : 0
//
//  3. Input : 567
//     Output : 210
//
//  4. Input : -23
//     Output : 6
//
//  5. Input : 0
//     Output : 0
//
/////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//
//                          Time Complexity :
//  Loop runs over digits → O(log10(n))
//
//////////////////////////////////////////////////////////////////
