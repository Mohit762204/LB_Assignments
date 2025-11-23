/////////////////////////////////////////////////////////////////////////
//
//                      Required Header Files
//
/////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : Count_factors
//  Description   : Counts all even factors of the given number.
//  Input         : Integer (number)
//  Output        : Integer (count of even factors)
//  Author        : Mohit Sandip Zalte
//  Date          : 30/10/2025
//
/////////////////////////////////////////////////////////////////////////

int Count_factors(
                    int number     // User input number
                 )
{
    int iCnt = 0;
    int count = 0;

    if(number <= 0)                // Validate number
    {
        return -1;
    }

    for(iCnt = 1; iCnt <= number; iCnt++)
    {
        if((iCnt % 2 == 0) && (number % iCnt == 0))   // Check even factor
        {
            count++;
        }
    }

    return count;                  // Return count of even factors
}   // End of Count_factors()

/////////////////////////////////////////////////////////////////////////
//
//                            Main Function
//
/////////////////////////////////////////////////////////////////////////

int main()
{
    int number = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d", &number);

    iRet = Count_factors(number);

    if(iRet == -1)
    {
        printf("Invalid Number!\n");
    }
    else
    {
        printf("Number of even factors is : %d\n", iRet);
    }

    return 0;
}   // End of main()

/////////////////////////////////////////////////////////////////////////
//
//                              TEST CASES
//
//  1. Input : 12
//     Even factors : 2, 4, 6, 12
//     Output : 4
//
//  2. Input : 10
//     Even factors : 2, 10
//     Output : 2
//
//  3. Input : 7
//     Even factors : none
//     Output : 0
//
//  4. Input : -5
//     Output : Invalid Number!
//
/////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//
//                          Time Complexity :
//  Loop runs from 1 to number.
//  Therefore : O(n)
//
//                          Space Complexity :
//  Constant space used.
//  Therefore : O(1)
//
//////////////////////////////////////////////////////////////////
