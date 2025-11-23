/////////////////////////////////////////////////////////////////////////
//
//                      Required Header Files
//
/////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : sum_natural_numbers
//  Description   : Returns the sum of all natural numbers from 1 up to the given limit.
//  Input         : Integer (limit)
//  Output        : Integer (sum of natural numbers)
//  Author        : Mohit Sandip Zalte
//  Date          : 30/10/2025
//
/////////////////////////////////////////////////////////////////////////

int sum_natural_numbers(
                            int limit      // Upper limit provided by user
                       )
{
    int isum = 0;

    for(int iCnt = 1; iCnt <= limit; iCnt++)   // Iterate from 1 to limit
    {
        isum += iCnt;                           // Add each number
    }

    return isum;
}   // End of sum_natural_numbers()

/////////////////////////////////////////////////////////////////////////
//
//                            Main Function
//
/////////////////////////////////////////////////////////////////////////

int main()
{
    int limit = 0;
    int iRet = 0;

    printf("Enter Number: ");
    scanf("%d", &limit);

    iRet = sum_natural_numbers(limit);

    printf("Sum of natural numbers up to %d is: %d\n", limit, iRet);

    return 0;
}   // End of main()

/////////////////////////////////////////////////////////////////////////
//
//                              TEST CASES
//
//  1. Input : 5
//     Output : 15
//
//  2. Input : 10
//     Output : 55
//
//  3. Input : 1
//     Output : 1
//
//  4. Input : 0
//     Output : 0
//
//  5. Input : -5
//     Output : 0 (invalid, but loop doesn’t run)
//
/////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//
//                          Time Complexity :
//  Loop runs from 1 to limit.
//  Therefore : O(n)
//
//                          Space Complexity :
//  Constant space used.
//  Therefore : O(1)
//
//////////////////////////////////////////////////////////////////
