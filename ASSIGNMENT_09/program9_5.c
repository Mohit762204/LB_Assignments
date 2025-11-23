/////////////////////////////////////////////////////////////////////////
//
//                      Required Header Files
//
/////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : FactorialDiff
//  Description   : Returns difference between even factorial and odd factorial
//  Input         : Integer (iNo)
//  Output        : Integer (Difference = EvenFact – OddFact)
//  Author        : Mohit Sandip Zalte
//  Date          : 29/10/2025
//
/////////////////////////////////////////////////////////////////////////

int FactorialDiff(
                    int iNo        // User input number
                 )
{
    int iCnt = 0;
    int iEvenFact = 1;
    int iOddFact  = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)          // Even number
        {
            iEvenFact = iEvenFact * iCnt;
        }
        else                       // Odd number
        {
            iOddFact = iOddFact * iCnt;
        }
    }

    return (iEvenFact - iOddFact);   // Difference of factorials
}   // End of FactorialDiff()

/////////////////////////////////////////////////////////////////////////
//
//                            Main Function
//
/////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;     // To store user input
    int iRet   = 0;     // To store result

    printf("Enter Number : ");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial Difference is : %d\n", iRet);

    return 0;
}   // End of main()

/////////////////////////////////////////////////////////////////////////
//
//                              TEST CASES
//
//  1. Input : 5
//     Even factorial : 2 * 4 = 8
//     Odd factorial  : 1 * 3 * 5 = 15
//     Output : 8 - 15 = -7
//
//  2. Input : 6
//     Even factorial : 2 * 4 * 6 = 48
//     Odd factorial  : 1 * 3 * 5 = 15
//     Output : 48 - 15 = 33
//
//  3. Input : 1
//     Even factorial : 1
//     Odd factorial  : 1
//     Output : 0
//
/////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//
//                          Time Complexity :
//
//  Loop runs iNo times.
//  Therefore : O(n)
//
//                          Space Complexity :
//
//  Constant space used.
//  Therefore : O(1)
//
//////////////////////////////////////////////////////////////////
