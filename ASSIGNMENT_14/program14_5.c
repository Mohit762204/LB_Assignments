/////////////////////////////////////////////////////////////////////////
//
//                      Required Header Files
//
/////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : CountDiff
//  Description   : Returns the difference between the summation of even digits
//                  and the summation of odd digits of a given number.
//  Input         : Integer (number)
//  Output        : Integer (EvenSum - OddSum)
//  Author        : Mohit Sandip Zalte
//  Date          : 05/12/2025
//
/////////////////////////////////////////////////////////////////////////

int CountDiff(
                int iNo        // Input number
             )
{
    int iEvenSum = 0;
    int iOddSum = 0;

    if(iNo < 0)      // Handle negative numbers
    {
        iNo = -iNo;
    }

    // Single for loop to process each digit
    for(; iNo != 0; iNo = iNo / 10)
    {
        int iDigit = iNo % 10;  // Extract last digit

        if(iDigit % 2 == 0)
        {
            iEvenSum += iDigit;  // Add to even sum
        }
        else
        {
            iOddSum += iDigit;   // Add to odd sum
        }
    }

    return iEvenSum - iOddSum;
}   // End of CountDiff()

/////////////////////////////////////////////////////////////////////////
//
//                            Main Function
//
/////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;   // User input
    int iRet = 0;     // Result of CountDiff

    printf("Enter Number: ");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);

    printf("Difference between sum of even and odd digits is: %d\n", iRet);

    return 0;
}   // End of main()

/////////////////////////////////////////////////////////////////////////
//
//                              TEST CASES
//
//  1. Input : 1234
//     Output : (2+4) - (1+3) = 6 - 4 = 2
//
//  2. Input : 2468
//     Output : (2+4+6+8) - 0 = 20
//
//  3. Input : 1357
//     Output : 0 - (1+3+5+7) = -16
//
//  4. Input : -123
//     Output : (2) - (1+3) = 2 - 4 = -2
//
//  5. Input : 0
//     Output : 0
//
/////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//
//
//                          Time Complexity :
//  Single loop over all digits, O(log10(n)) where n = iNo
//
//                          Space Complexity :
//  Constant space, O(1)
//
//////////////////////////////////////////////////////////////////
