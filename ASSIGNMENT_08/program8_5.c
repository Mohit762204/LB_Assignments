/////////////////////////////////////////////////////////////////////////
//
//                      Required Header Files
//
/////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : TableRev
//  Description   : Displays multiplication table of a given number
//                  in reverse order (10 to 1).
//  Input         : Integer (iNo)
//  Output        : Prints reverse table on screen
//  Author        : Mohit Sandip Zalte
//  Date          : 29/10/2025
//
/////////////////////////////////////////////////////////////////////////

void TableRev(
                int iNo        // Number whose reverse table is to be displayed
             )
{
    int iCnt = 0;

    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        printf("%d x %d = %d\n", iNo, iCnt, iNo * iCnt);
    }
}   // End of TableRev()

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

    TableRev(iValue);

    return 0;
}   // End of main()

/////////////////////////////////////////////////////////////////////////
//
//                              TEST CASES
//
//  1. Input : 5
//     Output : 
//          5 x 10 = 50
//          5 x 9  = 45
//          ...
//          5 x 1  = 5
//
//  2. Input : 10
//     Output : Reverse table from 100 down to 10
//
//  3. Input : 1
//     O
