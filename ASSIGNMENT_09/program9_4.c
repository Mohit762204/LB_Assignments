/////////////////////////////////////////////////////////////////////////
//
//                      Required Header Files
//
/////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : OddFactorial
//  Description   : Returns factorial of all odd numbers up to given number.
//  Input         : Integer (iNo)
//  Output        : Integer (Odd factorial)
//  Author        : Mohit Sandip Zalte
//  Date          : 29/10/2025
//
/////////////////////////////////////////////////////////////////////////

int OddFactorial(
                    int iNo       // User input number
                 )
{
    int iCnt = 0;
    int iFact = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)        // Check odd number
        {
            iFact = iFact * iCnt;
        }
    }
    return iFact;
}   // End of OddFactorial()

/////////////////////////////////////////////////////////////////////////
//
//                            Main Function
//
/////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;    // To store user input
    int iRet = 0;      // To store result

    printf("Enter Number : ");
    scanf("%d", &iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of Number is : %d\n", iRet);

    return 0;
}   // End of main()

/////////////////////////////////////////////////////////////////////////
//
//                              TEST CASES
//
//  1. Input : 10
//     Odd numbers : 1 3 5 7 9
//     Output : 945
//
//  2. Input : 7
//     Odd numbers : 1 3 5 7
//     Output : 105
//
//  3. Input : 5
//     Odd numbers : 1 3 5
//     Output : 15
//
//  4. Input : 1
//     Odd numbers : 1
//     Output : 1
//
/////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//
//                          Time Complexity :
//
//  Loop runs iNo times.
//  Therefore : O(n)
//
//                          Space Complexity :
//
//  Constant space used.
//  Therefore : O(1)
//
//////////////////////////////////////////////////////////////////
