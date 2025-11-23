/////////////////////////////////////////////////////////////////////////
//
//                      Required Header Files
//
/////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : CountTwo
//  Description   : Counts the frequency of digit 2 in the given number.
//  Input         : Integer (iNo)
//  Output        : Integer (count of digit 2)
//  Author        : Mohit Sandip Zalte
//  Date          : 30/10/2025
//
/////////////////////////////////////////////////////////////////////////

int CountTwo(
                int iNo     // User input number
            )
{
    int iDigit = 0;
    int iCnt = 0;

    if(iNo < 0)            // Convert negative number to positive
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;     // Extract last digit
        if(iDigit == 2)
        {
            iCnt++;            // Increment count if digit is 2
        }
        iNo = iNo / 10;        // Remove last digit
    }

    return iCnt;
}   // End of CountTwo()

/////////////////////////////////////////////////////////////////////////
//
//                            Main Function
//
/////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    iRet = CountTwo(iValue);

    printf("Frequency of digit 2 is: %d\n", iRet);

    return 0;
}   // End of main()

/////////////////////////////////////////////////////////////////////////
//
//                              TEST CASES
//
//  1. Input : 1223
//     Output : 2
//
//  2. Input : 2222
//     Output : 4
//
//  3. Input : 102345
//     Output : 1
//
//  4. Input : -1222
//     Output : 3
//
//  5. Input : 0
//     Output : 0
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
