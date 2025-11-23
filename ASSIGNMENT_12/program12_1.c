/////////////////////////////////////////////////////////////////////////
//
//                      Required Header Files
//
/////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : print_factors
//  Description   : Displays all even factors of the given number.
//  Input         : Integer (number)
//  Output        : None (prints even factors)
//  Author        : Mohit Sandip Zalte
//  Date          : 30/10/2025
//
/////////////////////////////////////////////////////////////////////////

void print_factors(
                    int number     // User input number
                  )
{
    int iCnt = 0;

    if(number <= 0)                // Validate input
    {
        printf("Invalid Number!\n");
        return;
    }

    for(iCnt = 1; iCnt <= number; iCnt++)
    {
        if(iCnt % 2 == 0)          // Check even factor
        {
            if(number % iCnt == 0) // Ensure it is a factor
            {
                printf("%d ", iCnt);
            }
        }
    }

    printf("\n");
}   // End of print_factors()

/////////////////////////////////////////////////////////////////////////
//
//                            Main Function
//
/////////////////////////////////////////////////////////////////////////

int main()
{
    int number = 0;       // User input

    printf("Enter Number : ");
    scanf("%d", &number);

    print_factors(number);

    return 0;
}   // End of main()

/////////////////////////////////////////////////////////////////////////
//
//                              TEST CASES
//
//  1. Input : 12
//     Even factors : 2 4 6 12
//
//  2. Input : 10
//     Even factors : 2 10
//
//  3. Input : 7
//     Even factors : (none)
//
//  4. Input : -5
//     Output : Invalid Number!
//
/////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//
//                          Time Complexity :
//
//  Loop runs from 1 to number.
//  Therefore : O(n)
//
//                          Space Complexity :
//
//  Constant space used.
//  Therefore : O(1)
//
//////////////////////////////////////////////////////////////////
