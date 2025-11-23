/////////////////////////////////////////////////////////////////////////
//
//                      Required Header Files
//
/////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : SumOfEvenFactors
//  Description   : Returns the sum of all even positive factors of a number.
//  Input         : Integer (number)
//  Output        : Integer (sum of even factors)
//  Author        : Mohit Sandip Zalte
//  Date          : 30/10/2025
//
/////////////////////////////////////////////////////////////////////////

int SumOfEvenFactors(
                        int number      // User input number
                    )
{
    int iCnt = 0;
    int iSum = 0;

    if(number <= 0)                 // Validate input
    {
        return -1;
    }

    for(iCnt = 1; iCnt <= number; iCnt++)
    {
        if(number % iCnt == 0 && iCnt % 2 == 0)   // Factor AND even
        {
            iSum += iCnt;
        }
    }

    return iSum;                    // Return sum of even factors
}   // End of SumOfEvenFactors()

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

    iRet = SumOfEvenFactors(number);

    if(iRet == -1)
    {
        printf("Invalid Input! Number must be positive.\n");
    }
    else
    {
        printf("Sum of all even positive factors is: %d\n", iRet);
    }

    return 0;
}   // End of main()

/////////////////////////////////////////////////////////////////////////
//
//                              TEST CASES
//
//  1. Input : 12
//     Even factors : 2, 4, 6, 12
//     Output : 24
//
//  2. Input : 10
//     Even factors : 2, 10
//     Output : 12
//
//  3. Input : 7
//     Even factors : None
//     Output : 0
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
