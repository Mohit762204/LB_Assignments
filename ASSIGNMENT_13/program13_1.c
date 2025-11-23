/////////////////////////////////////////////////////////////////////////
//
//                      Required Header Files
//
/////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : print_numbers
//  Description   : Prints all numbers from 0 to the given limit.
//  Input         : Integer (limit)
//  Output        : void (prints sequence on screen)
//  Author        : Mohit Sandip Zalte
//  Date          : 30/10/2025
//
/////////////////////////////////////////////////////////////////////////

void print_numbers(
                      int limit      // Upper limit entered by user
                  )
{
    for(int iCnt = 0; iCnt <= limit; iCnt++)   // Print 0 to limit
    {
        printf("%d ", iCnt);
    }
}   // End of print_numbers()

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

    print_numbers(limit);    // Function Call

    return 0;
}   // End of main()

/////////////////////////////////////////////////////////////////////////
//
//                              TEST CASES
//
//  1. Input : 5
//     Output : 0 1 2 3 4 5
//
//  2. Input : 0
//     Output : 0
//
//  3. Input : 10
//     Output : 0 1 2 3 4 5 6 7 8 9 10
//
//  4. Input : -3
//     Output : (Nothing printed because loop condition fails)
//
/////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//
//                          Time Complexity :
//  Loop runs 'limit' times.
//  Therefore : O(n)
//
//                          Space Complexity :
//  Constant space.
//  Therefore : O(1)
//
//////////////////////////////////////////////////////////////////
