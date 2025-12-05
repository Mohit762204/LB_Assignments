/////////////////////////////////////////////////////////////////////////
//
//                      Required Header Files
//
/////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : CountBetween
//  Description   : Counts the digits in a given number that are greater 
//                  than 3 and less than 7.
//  Input         : Integer (number)
//  Output        : Integer (Count of digits between 3 and 7)
//  Author        : Mohit Sandip Zalte
//  Date          : 06/12/2025
//
/////////////////////////////////////////////////////////////////////////

int CountBetween(int iNo)
{
    int iCnt = 0;
    int iCount = 0;

    if(iNo < 0)      // Handle negative number
    {
        iNo = -iNo;
    }

    for(; iNo != 0; iNo = iNo / 10)
    {
        iCnt = iNo % 10;   // Extract last digit

        if(iCnt > 3 && iCnt < 7)   // Check condition
        {
            iCount++;
        }
    }

    return iCount;
}   // End of CountBetween()

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

    iRet = CountBetween(iValue);   // Call function

    printf("Count of digits between 3 and 7: %d\n", iRet);

    return 0;
}   // End of main()

/////////////////////////////////////////////////////////////////////////
//
//                              TEST CASES
//
//  1. Input : 453627
//     Output : 4   (Digits 4,5,6,6)
//
//  2. Input : 123456
//     Output : 3   (Digits 4,5,6)
//
//  3. Input : 987321
//     Output : 0   (No digits between 3 and 7)
//
//  4. Input : -56374
//     Output : 4   (Digits 5,6,4,7)
//
//  5. Input : 0
//     Output : 0
//
/////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//
//                          Time Complexity :
//  Single loop over all digits, O(log10(n)) where n = iNo
//
//////////////////////////////////////////////////////////////////
