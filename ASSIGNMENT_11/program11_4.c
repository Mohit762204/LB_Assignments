/////////////////////////////////////////////////////////////////////////
//
//                      Required Header Files
//
/////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : RangeSum
//  Description   : Returns the sum of all even numbers between given range.
//  Input         : Integer (Start), Integer (End)
//  Output        : Integer (Sum) or -1 for invalid range
//  Author        : Mohit Sandip Zalte
//  Date          : 30/10/2025
//
/////////////////////////////////////////////////////////////////////////

int RangeSum(
                int iStart,      // Starting number
                int iEnd         // Ending number
            )
{
    int iCnt = 0;
    int iSum = 0;

    if(iStart < 0 || iEnd < 0 || iStart > iEnd)      // Validate input
    {
        return -1;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)         // Loop through range
    {
        if(iCnt % 2 == 0)                            // Only even numbers
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;                                     // Return final sum
}   // End of RangeSum()

/////////////////////////////////////////////////////////////////////////
//
//                            Main Function
//
/////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0;      // Start input
    int iValue2 = 0;      // End input
    int iRet = 0;         // Result

    printf("Enter Starting Number : ");
    scanf("%d", &iValue1);

    printf("Enter Ending Number   : ");
    scanf("%d", &iValue2);

    iRet = RangeSum(iValue1, iValue2);

    if(iRet == -1)
    {
        printf("Invalid Range!\n");
    }
    else
    {
        printf("Addition of even numbers is : %d\n", iRet);
    }

    return 0;
}   // End of main()

/////////////////////////////////////////////////////////////////////////
//
//                              TEST CASES
//
//  1. Input : Start = 1, End = 10
//     Output : 2 + 4 + 6 + 8 + 10 = 30
//
//  2. Input : Start = 4, End = 4
//     Output : 4
//
//  3. Input : Start = 10, End = 20
//     Output : 10 + 12 + 14 + 16 + 18 + 20 = 90
//
//  4. Input : Start = 20, End = 10
//     Output : Invalid Range!
//
//  5. Input : Start = -5, End = 15
//     Output : Invalid Range!
//
//
/////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//
//                          Time Complexity :
//
//  Loop runs from iStart to iEnd.
//  Therefore : O(n)
//
//                          Space Complexity :
//
//  Only constant variables used.
//  Therefore : O(1)
//
//////////////////////////////////////////////////////////////////
