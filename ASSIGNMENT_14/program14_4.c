/////////////////////////////////////////////////////////////////////////
//
//                      Required Header Files
//
/////////////////////////////////////////////////////////////////////////
#include <stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : CountFour
//  Description   : Counts the frequency of digit '4' in the given number.
//  Input         : Integer (number)
//  Output        : Integer (count of digit 4)
//  Author        : Mohit Sandip Zalte
//  Date          : 05/12/2025
//
/////////////////////////////////////////////////////////////////////////

int CountFour(
              int iNo       // User input number
            )
{
    int iDigit = 0;
    int iCount = 0;
    int temp = iNo;

    if(iNo < 0)       // Handle negative numbers
    {
        temp = -iNo;
    }

    while(temp != 0)
    {
        iDigit = temp % 10;     // Extract last digit

        if(iDigit == 4)         // Check if digit is 4
        {
            iCount++;
        }

        temp = temp / 10;       // Remove last digit
    }

    return iCount;              // Return frequency
}   // End of CountFour()

/////////////////////////////////////////////////////////////////////////
//
//                            Main Function
//
/////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;    // User input
    int iRet = 0;      // Count of digit 4

    printf("Enter Number: ");
    scanf("%d", &iValue);

    iRet = CountFour(iValue);

    printf("Frequency of 4 is: %d\n", iRet);

    return 0;
}   // End of main()

/////////////////////////////////////////////////////////////////////////
//
//                              TEST CASES
//
//  1. Input : 4474
//     Output : 3
//
//  2. Input : 123456
//     Output : 1
//
//  3. Input : 55555
//     Output : 0
//
//  4. Input : -4144
//     Output : 3
//
/////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//
//
//  Time Complexity : O(log n)
//      (Number of digits in the number)
//
//  Space Complexity : O(1)
//      (Only few integer variables used)
//////////////////////////////////////////////////////////////////
