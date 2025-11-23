/////////////////////////////////////////////////////////////////////////
//
//                      Required Header Files
//
/////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : RangeDisplayRev
//  Description   : Displays numbers from end to start in reverse order.
//  Input         : Integer (Start), Integer (End)
//  Output        : None (Prints numbers)
//  Author        : Mohit Sandip Zalte
//  Date          : 30/10/2025
//
/////////////////////////////////////////////////////////////////////////

void RangeDisplayRev(
                        int iStart,     // Starting number
                        int iEnd        // Ending number
                     )
{
    int iCnt = 0;

    if(iStart > iEnd)                      // Invalid range check
    {
        printf("Invalid Range!\n");
        return;
    }

    for(iCnt = iEnd; iCnt >= iStart; iCnt--)   // Reverse loop
    {
        printf("%d ", iCnt);
    }

    printf("\n");
}   // End of RangeDisplayRev()

/////////////////////////////////////////////////////////////////////////
//
//                            Main Function
//
/////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0;     // Start input
    int iValue2 = 0;     // End input

    printf("Enter Starting Number : ");
    scanf("%d", &iValue1);

    printf("Enter Ending Number   : ");
    scanf("%d", &iValue2);

    RangeDisplayRev(iValue1, iValue2);

    return 0;
}   // End of main()

/////////////////////////////////////////////////////////////////////////
//
//                              TEST CASES
//
//  1. Input : Start = 1, End = 5
//     Output : 5 4 3 2 1
//
//  2. Input : Start = 4, End = 4
//     Output : 4
//
//  3. Input : Start = 10, End = 15
//     Output : 15 14 13 12 11 10
//
//  4. Input : Start = 20, End = 10
//     Output : Invalid Range!
//
//
/////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//
//                          Time Complexity :
//
//  Loop runs from iEnd to iStart.
//  Therefore : O(n)
//
//                          Space Complexity :
//
//  Only constant space used.
//  Therefore : O(1)
//
//////////////////////////////////////////////////////////////////
