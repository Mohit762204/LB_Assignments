/////////////////////////////////////////////////////////////////////////
//
//                      Required Header Files
//
/////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : print_even_numbers
//  Description   : Prints all even numbers from 0 up to the given limit.
//  Input         : Integer (limit)
//  Output        : void (prints even numbers)
//  Author        : Mohit Sandip Zalte
//  Date          : 30/10/2025
//
/////////////////////////////////////////////////////////////////////////

void print_even_numbers(
                            int limit     // Upper limit input by user
                        )
{
    for(int iCnt = 0; iCnt <= limit; iCnt++)     // Iterate from 0 to limit
    {
        if((iCnt % 2) == 0)                      // Check even number
        {
            printf("%d ", iCnt);
        }
    }
}   // End of print_even_numbers()

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

    print_even_numbers(limit);    // Function Call

    return 0;
}   // End of main()

/////////////////////////////////////////////////////////////////////////
//
//                              TEST CASES
//
//  1. Input : 10
//     Output : 0 2 4 6 8 10
//
//  2. Input : 5
//     Output : 0 2 4
//
//  3. Input : 0
//     Output : 0
//
//  4. Input : -4
//     Output : (Nothing printed, loop condition fails)
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
