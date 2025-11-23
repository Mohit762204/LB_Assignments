/////////////////////////////////////////////////////////////////////////
//
//                      Required Header Files
//
/////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : is_divisible_by_five
//  Description   : Checks whether the given number is divisible by 5.
//  Input         : Integer (number)
//  Output        : Boolean (true/false)
//  Author        : Mohit Sandip Zalte
//  Date          : 01/12/2025
//
/////////////////////////////////////////////////////////////////////////

bool is_divisible_by_five(
                            int number      // User input number
                         )
{
    if(number % 5 == 0)                 // Check divisibility
    {
        return true;
    }
    else
    {
        return false;
    }
}   // End of is_divisible_by_five()

/////////////////////////////////////////////////////////////////////////
//
//                            Main Function
//
/////////////////////////////////////////////////////////////////////////

int main()
{
    int number = 0;

    printf("Enter Number: ");
    scanf("%d", &number);

    printf("%s\n",
           is_divisible_by_five(number) ? "Yes" : "No");

    return 0;
}   // End of main()

/////////////////////////////////////////////////////////////////////////
//
//                              TEST CASES
//
//  1. Input : 10
//     Output : Yes
//
//  2. Input : 7
//     Output : No
//
//  3. Input : 25
//     Output : Yes
//
//  4. Input : 0
//     Output : Yes   (0 is divisible by any non-zero number)
//
//  5. Input : -15
//     Output : Yes   (-15 % 5 == 0)
//
/////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//
//                          Time Complexity :
//  Single modulo operation.
//  Therefore : O(1)
//
//                          Space Complexity :
//  Constant space.
//  Therefore : O(1)
//
//////////////////////////////////////////////////////////////////
