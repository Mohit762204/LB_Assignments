/////////////////////////////////////////////////////////////////////////
//
//                      Required Header Files
//
/////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : print_odd_numbers
//  Description   : Prints all odd numbers from 0 up to the given limit.
//  Input         : Integer (limit)
//  Output        : void (prints odd numbers)
//  Author        : Mohit Sandip Zalte
//  Date          : 30/10/2025
//
/////////////////////////////////////////////////////////////////////////

void print_odd_numbers(
                            int limit      // Upper limit provided by user
                        )
{
    for(int iCnt = 0; iCnt <= limit; iCnt++)   // Iterate from 0 to limit
    {
        if(iCnt % 2 != 0)                      // Check odd number
        {
            printf("%d ", iCnt);
        }
    }
}   // End of print_odd_numbers()

/////////////////////////////////////////////////////////////////////////
//
//                            Main Function
//
/////////////////////////////////////////////////////////////////////////

int main()
{
    int limit = 0;

    printf("Enter Number: ");
    scanf("%d", &limit);

    print_odd_numbers(limit);   // Function Call

    return 0;
}   // End of main()

/////////////////////////////////////////////////////////////////////////
//
//                              TEST CASES
//
//  1. Input : 10
//     Output : 1 3 5 7 9
//
//  2. Input : 5
//     Output : 1 3 5
//
//  3. Input : 1
//     Output : 1
//
//  4. Input : 0
//     Output : (No output)
//
//  5. Input : -6
//     Output : (No output, loop fails)
//
/////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//
//                          Time Complexity :
//  Loop runs from 0 to limit.
//  Therefore : O(n)
//
//                          Space Complexity :
//  Constant space.
//  Therefore : O(1)
//
//////////////////////////////////////////////////////////////////
