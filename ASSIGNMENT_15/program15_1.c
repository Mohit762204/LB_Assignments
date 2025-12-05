/////////////////////////////////////////////////////////////////////////
//
//                      Required Header Files
//
/////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : CountEven
//  Description   : Returns the count of even digits from the given number.
//  Input         : Integer (number)
//  Output        : Integer (count of even digits)
//  Author        : Mohit Sandip Zalte
//  Date          : 06/12/2025
//
/////////////////////////////////////////////////////////////////////////

int CountEven(int iNo)
{
    int iCnt = 0;
    int iCount = 0;

    if(iNo < 0)               // Handle negative numbers
    {
        iNo = -iNo;
    }

    // Iterate through all digits of the number
    for(iCnt = 0; iNo != 0; iNo = iNo / 10)
    {
        iCnt = iNo % 10;    // Extract last digit

        if(iCnt % 2 == 0)   // Check if the digit is even
        {
            iCount++;
        }
    }

    return iCount;
}   // End of CountEven()

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

    iRet = CountEven(iValue);

    printf("Count of even digits: %d\n", iRet);

    return 0;
}   // End of main()

/////////////////////////////////////////////////////////////////////////
//
//                              TEST CASES
//
//  1. Input : 1234
//     Output : 2
//
//  2. Input : 24680
//     Output : 5
//
//  3. Input : 1357
//     Output : 0
//
//  4. Input : -908
//     Output : 2
//
//  5. Input : 0
//     Output : 1   (0 is considered even)
//
/////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//
//
//                          Time Complexity :
//  Single loop on digits → O(log10(n))
//
//////////////////////////////////////////////////////////////////
