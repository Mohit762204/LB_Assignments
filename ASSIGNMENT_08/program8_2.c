/////////////////////////////////////////////////////////////////////////
//
//                      Required Header Files
//
/////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : Displays the word representation of a single digit.
//  Input         : Integer (iNo)
//  Output        : Prints corresponding word (Zero–Nine) or Invalid Input
//  Author        : Mohit Sandip Zalte
//  Date          : 29/10/2025
//
/////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    switch(iNo)
    {
        case 0:
            printf("Zero\n");
            break;

        case 1:
            printf("One\n");
            break;

        case 2:
            printf("Two\n");
            break;

        case 3:
            printf("Three\n");
            break;

        case 4:
            printf("Four\n");
            break;

        case 5:
            printf("Five\n");
            break;

        case 6:
            printf("Six\n");
            break;

        case 7:
            printf("Seven\n");
            break;

        case 8:
            printf("Eight\n");
            break;

        case 9:
            printf("Nine\n");
            break;

        default:
            printf("Invalid Input!\n");
            break;
    }
}   // End of Display()

/////////////////////////////////////////////////////////////////////////
//
//                            Main Function
//
/////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;     // Number entered by user

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
//     Output : Five
//
//  2. Input : 0
//     Output : Zero
//
//  3. Input : 9
//     Output : Nine
//
//  4. Input : -3
//     Output : Invalid Input!
//
//  5. Input : 12
//     Output : Invalid Input!
//
/////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//
//
//                      Time Complexity :
//
//  Display() performs a constant-time switch operation.
//  Therefore : O(1)
//
//                      Space Complexity :
//
//  Only fixed variables used.
//  Therefore : O(1)
//
//////////////////////////////////////////////////////////////////
