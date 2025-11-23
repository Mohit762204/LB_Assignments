/////////////////////////////////////////////////////////////////////////
//
//                      Required Header Files
//
/////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : RangeDisplay
//  Description   : Displays all numbers between given start and end range.
//  Input         : Integer (Start), Integer (End)
//  Output        : None (Prints numbers)
//  Author        : Mohit Sandip Zalte
//  Date          : 30/10/2025
//
/////////////////////////////////////////////////////////////////////////

void RangeDisplay(
                    int iStart,     // Starting number
                    int iEnd        // Ending number
                 )
{
    int iCnt = 0;

    if(iStart > iEnd)               // Invalid range check
    {
        printf("Invalid Range!\n");
        return;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        printf("%d ", iCnt);        // Display numbers
    }

    printf("\n");
}   // End of RangeDisplay()

/////////////////////////////////////////////////////////////////////////
//
//                            Main Function
//
/////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0;     // Starting number
    int iValue2 = 0;     // Ending number

    printf("Enter Start Number : ");
    scanf("%d", &iValue1);

    printf("Enter End Number   : ");
    scanf("%d", &iValue2);

    RangeDisplay(iValue1, iValue2);

    return 0;
}   // End of main()

/////////////////////////////////////////////////////////////////////////
//
//                              TEST CASES
//
//  1. Input : Start = 1, End = 5
//     Output : 1 2 3 4 5
//
//  2. Input : Start = 4, End = 9
//     Output : 4 5 6 7 8 9
//
//  3. Input : Start = 10, End = 10
//     Output : 10
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
//  Loop runs from iStart to iEnd.
//  Therefore : O(n)
//
//                          Space Complexity :
//
//  Constant space used.
//  Therefore : O(1)
//
//////////////////////////////////////////////////////////////////
