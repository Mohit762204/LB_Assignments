/////////////////////////////////////////////////////////////////////////
//
//                      Required Header Files
//
/////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayDigits
//  Description   : Displays each digit of the given number in reverse order.
//  Input         : Integer (iNo)
//  Output        : None (prints digits)
//  Author        : Mohit Sandip Zalte
//  Date          : 30/10/2025
//
/////////////////////////////////////////////////////////////////////////

void DisplayDigits(
                    int iNo     
                 )
{
    int iDigit = 0;

    if(iNo < 0)             // Convert negative number to positive
    {
        iNo = -iNo;
    }

    if(iNo == 0)            // Special case for 0
    {
        printf("0");
        return;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;   // Extract last digit
        printf("%d ", iDigit);

        iNo = iNo / 10;      // Remove last digit
    }

    printf("\n");
}   // End of DisplayDigits()

/////////////////////////////////////////////////////////////////////////
//
//                            Main Function
//
/////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    DisplayDigits(iValue);

    return 0;
}   // End of main()

/////////////////////////////////////////////////////////////////////////
//
//                              TEST CASES
//
//  1. Input : 12345
//     Output : 5 4 3 2 1
//
//  2. Input : 0
//     Output : 0
//
//  3. Input : -6789
//     Output : 9 8 7 6
//
//  4. Input : 7
//     Output : 7
//
/////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//
//                          Time Complexity :
//  Loop runs proportional to number of digits in iNo.
//  Therefore : O(log10(n))
//
//                          Space Complexity :
//  Constant space used.
//  Therefore : O(1)
//
//////////////////////////////////////////////////////////////////
