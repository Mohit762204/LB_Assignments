/////////////////////////////////////////////////////////////////////////
//
//                      Required Header Files
//
/////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : Table
//  Description   : Displays multiplication table of a given number (1 to 10).
//  Input         : Integer (iNo)
//  Output        : Prints table on screen
//  Author        : Mohit Sandip Zalte
//  Date          : 29/10/2025
//
/////////////////////////////////////////////////////////////////////////

void Table(
            int iNo        // Number whose table is to be displayed
          )
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d x %d = %d\n", iNo, iCnt, iNo * iCnt);
    }
}   // End of Table()

/////////////////////////////////////////////////////////////////////////
//
//                            Main Function
//
/////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;      // User input

    printf("Enter Number : ");
    scanf("%d", &iValue);

    Table(iValue);

    return 0;
}   // End of main()

/////////////////////////////////////////////////////////////////////////
//
//                              TEST CASES
//
//  1. Input : 5
//     Output :
//          5 x 1 = 5
//          5 x 2 = 10
//          ...
//          5 x 10 = 50
//
//  2. Input : 10
//     Output:
//          10 x 1 = 10
//          ...
//          10 x 10 = 100
//
//  3. Input : 1
//     Output : 1 to 10
//
//  4. Input : -3
//     Output : Shows table with negative values (valid for integers)
//
/////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//
//                      Time Complexity :
//
//  Loop runs 10 times (constant).
//  Therefore : O(1)
//
//                      Space Complexity :
//
//  Constant space usage.
//  Therefore : O(1)
//
//////////////////////////////////////////////////////////////////
