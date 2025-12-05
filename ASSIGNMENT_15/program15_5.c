/////////////////////////////////////////////////////////////////////////
//
//                      Required Header Files
//
/////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : DiffEvenOdd
//  Description   : Returns the difference between the sum of even digits
//                  and the sum of odd digits of a given number.
//  Input         : Integer (number)
//  Output        : Integer (EvenSum - OddSum)
//  Author        : Mohit Sandip Zalte
//  Date          : 06/12/2025
//
/////////////////////////////////////////////////////////////////////////

int DiffEvenOdd(int iNo)
{
    int iCnt = 0;
    int iEvenSum = 0;
    int iOddSum = 0;

    if(iNo < 0)   // Handle negative input
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iCnt = iNo % 10;   // Extract last digit

        if(iCnt % 2 == 0)  // Check even digit
        {
            iEvenSum += iCnt;
        }
        else                  // Odd digit
        {
            iOddSum += iCnt;
        }

        iNo = iNo / 10;      // Remove last digit
    }

    return iEvenSum - iOddSum;
}   // End of DiffEvenOdd()

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

    iRet = DiffEvenOdd(iValue);

    printf("Difference between sum of even and odd digits: %d\n", iRet);

    return 0;
}   // End of main()

/////////////////////////////////////////////////////////////////////////
//
//                              TEST CASES
//
//  1. Input : 1234
//     Output : 2   (EvenSum=6, OddSum=4)
//
//  2. Input : 2468
//     Output : 20  (EvenSum=20, OddSum=0)
//
//  3. Input : 1357
//     Output : -16 (EvenSum=0, OddSum=16)
//
//  4. Input : -123
//     Output : -2  (EvenSum=2, OddSum=4)
//
//  5. Input : 0
//     Output : 0   (EvenSum=0, OddSum=0)
//
/////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//
//
//                          Time Complexity :
//  Single loop over all digits, O(log10(n)) where n = iNo
//
//////////////////////////////////////////////////////////////////
