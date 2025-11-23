/////////////////////////////////////////////////////////////////////////
//
//                      Required Header Files
//
/////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : RangeDisplayEven
//  Description   : Displays all even numbers between given start and end.
//  Input         : Integer (Start), Integer (End)
//  Output        : None (Prints even numbers)
//  Author        : Mohit Sandip Zalte
//  Date          : 30/10/2025
//
/////////////////////////////////////////////////////////////////////////

void RangeDisplayEven(
                        int iStart,     // Starting number
                        int iEnd        // Ending number
                     )
{
    int iCnt = 0;

    if(iStart > iEnd)                 // Validate range
    {
        printf("Invalid Range!\n");
        return;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(iCnt % 2 == 0)             // Check for even number
        {
            printf("%d ", iCnt);
        }
    }

    printf("\n");
}   // End of RangeDisplayEven()

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

    RangeDisplayEven(iValue1, iValue2);

    return 0;
}   // End of main()

/////////////////////////////////////////////////////////////////////////
//
//                              TEST CASES
//
//  1. Input : Start = 1, End = 10
//     Output : 2 4 6 8 10
//
//  2. Input : Start = 4, End = 4
//     Output : 4
//
//  3. Input : Start = 10, End = 20
//     Output : 10 12 14 16 18 20
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
//  Constant space.
//  Therefore : O(1)
//
//////////////////////////////////////////////////////////////////
