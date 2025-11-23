/////////////////////////////////////////////////////////////////////////
//
//                      Required Header Files
//
/////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : Displays '*' iNo times followed by '$' iNo times.
//  Input         : Integer (iNo)
//  Output        : * * * ...  $ $ $ ...
//  Author        : Mohit Sandip Zalte
//  Date          : 29/10/2025
//
/////////////////////////////////////////////////////////////////////////

void Display(
                int iNo       // Number of times symbols should be printed
            )
{
    int iCnt = 0;

    // Print '*' iNo times
    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("* ");
    }

    // Print '$' iNo times
    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("$ ");
    }
}   // End of Display()

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

    Display(iValue);

    return 0;
}   // End of main()

/////////////////////////////////////////////////////////////////////////
//
//                              TEST CASES
//
//  1. Input : 5
//     Output : * * * * *  $ $ $ $ $
//
//  2. Input : 3
//     Output : * * *  $ $ $
//
//  3. Input : 1
//     Output : *  $
//
//  4. Input : 0
//     Output : (No output)
//
//  5. Input : 7
//     Output : * * * * * * *  $ $ $ $ $ $ $
//
/////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//
//                      Time Complexity :
//
//  Display() uses two loops each running iNo times.
//  Therefore : O(n)
//
//                      Space Complexity :
//  Uses constant space.
//  Therefore : O(1)
//
//////////////////////////////////////////////////////////////////
