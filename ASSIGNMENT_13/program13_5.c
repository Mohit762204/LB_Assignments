/////////////////////////////////////////////////////////////////////////
//
//                      Required Header Files
//
/////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : sum_even_numbers
//  Description   : Returns the sum of first 'limit' even numbers (0, 2, 4, ...).
//  Input         : Integer (limit)
//  Output        : Integer (sum of even numbers)
//  Author        : Mohit Sandip Zalte
//  Date          : 30/10/2025
//
/////////////////////////////////////////////////////////////////////////

int sum_even_numbers(
                        int limit      // Number of even numbers to sum
                     )
{
    int isum = 0;

    for(int iCnt = 0; iCnt <= limit; iCnt++)  // Iterate from 0 to limit
    {
        isum += 2 * iCnt;                      // Sum the even numbers
    }

    return isum;
}   // End of sum_even_numbers()

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

    iRet = sum_even_numbers(limit);

    printf("Sum of first %d even numbers is: %d\n", limit, iRet);

    return 0;
}   // End of main()

/////////////////////////////////////////////////////////////////////////
//
//                              TEST CASES
//
//  1. Input : 5
//     Even numbers : 0, 2, 4, 6, 8, 10
//     Output : 30
//
//  2. Input : 3
//     Even numbers : 0, 2, 4, 6
//     Output : 12
//
//  3. Input : 0
//     Output : 0
//
//  4. Input : 1
//     Output : 2
//
//
/////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//
//                          Time Complexity :
//  Loop runs limit+1 times.
//  Therefore : O(n)
//
//                          Space Complexity :
//  Constant space used.
//  Therefore : O(1)
//
//////////////////////////////////////////////////////////////////
