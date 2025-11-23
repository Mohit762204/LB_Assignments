/////////////////////////////////////////////////////////////////////////
//
//                      Required Header Files
//
/////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : RangeSum
//  Description   : Returns the sum of all numbers between given start and end.
//  Input         : Integer (Start), Integer (End)
//  Output        : Integer (Sum) or -1 for invalid range
//  Author        : Mohit Sandip Zalte
//  Date          : 30/10/2025
//
/////////////////////////////////////////////////////////////////////////

int RangeSum(
                int iStart,     // Starting number
                int iEnd        // Ending number
            )
{
    int iCnt = 0;
    int iSum = 0;

    if(iStart < 0 || iEnd < 0 || iStart > iEnd)     // Validate inputs
    {
        return -1;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)        // Summation loop
    {
        iSum = iSum + iCnt;
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
    int iValue1 = 0;     // Start number
    int iValue2 = 0;     // End number
    int iRet = 0;        // Result

    printf("Enter Starting Number : ");
    scanf("%d", &iValue1);

    printf("Enter Ending Number   : ");
    scanf("%d", &iValue2);

    iRet = RangeSum(iValue1, iValue2);       // Call function

    if(iRet == -1)
    {
        printf("Invalid Range!\n");
    }
    else
    {
        printf("Addition is : %d\n", iRet);
    }

    return 0;
}   // End of main()

/////////////////////////////////////////////////////////////////////////
//
//                              TEST CASES
//
//  1. Input : Start = 1, End = 5
//     Output : 15
//
//  2. Input : Start = 3, End = 3
//     Output : 3
//
//  3. Input : Start = 10, End = 14
//     Output : 10 + 11 + 12 + 13 + 14 = 60
//
//  4. Input : Start = 5, End = 2
//     Output : Invalid Range!
//
//  5. Input : Start = -4, End = 10
//     Output : Invalid Range!
//
//
/////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//
//
//                          Time Complexity :
//
//  Loop runs from iStart to iEnd.
//  Therefore : O(n)
//
//
//                          Space Complexity :
//
//  Uses constant extra space.
//  Therefore : O(1)
//
//
//////////////////////////////////////////////////////////////////
