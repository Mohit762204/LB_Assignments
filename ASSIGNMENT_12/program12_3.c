/////////////////////////////////////////////////////////////////////////
//
//                      Required Header Files
//
/////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : SumOfFactors
//  Description   : Returns the sum of all positive factors of a number.
//  Input         : Integer (number)
//  Output        : Integer (sum of factors)
//  Author        : Mohit Sandip Zalte
//  Date          : 30/10/2025
//
/////////////////////////////////////////////////////////////////////////

int SumOfFactors(
                    int number      // User input number
                )
{
    int iCnt = 0;
    int iSum = 0;

    if(number <= 0)                // Validate input
    {
        return -1;
    }

    for(iCnt = 1; iCnt <= number; iCnt++)
    {
        if(number % iCnt == 0)     // Check factor
        {
            iSum += iCnt;
        }
    }

    return iSum;                  // Return sum of factors
}   // End of SumOfFactors()

/////////////////////////////////////////////////////////////////////////
//
//                            Main Function
//
/////////////////////////////////////////////////////////////////////////

int main()
{
    int number = 0;
    int iRet = 0;

    printf("Enter Number: ");
    scanf("%d", &number);

    iRet = SumOfFactors(number);

    if(iRet == -1)
    {
        printf("Invalid Input! Number must be positive.\n");
    }
    else
    {
        printf("Sum of all positive factors is: %d\n", iRet);
    }

    return 0;
}   // End of main()

/////////////////////////////////////////////////////////////////////////
//
//                              TEST CASES
//
//  1. Input : 6
//     Factors : 1, 2, 3, 6
//     Output : 12
//
//  2. Input : 10
//     Factors : 1, 2, 5, 10
//     Output : 18
//
//  3. Input : 1
//     Factors : 1
//     Output : 1
//
//  4. Input : -5
//     Output : Invalid Input!
//
/////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//
//                          Time Complexity :
//  Loop runs from 1 to number.
//  Therefore : O(n)
//
//                          Space Complexity :
//  Constant space used.
//  Therefore : O(1)
//
//////////////////////////////////////////////////////////////////
