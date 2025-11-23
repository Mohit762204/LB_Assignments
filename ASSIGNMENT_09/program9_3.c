/////////////////////////////////////////////////////////////////////////
//
//                      Required Header Files
//
/////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : EvenFactorial
//  Description   : Returns factorial of all even numbers up to given number.
//  Input         : Integer (iNo)
//  Output        : Integer (Even factorial)
//  Author        : Mohit Sandip Zalte
//  Date          : 29/10/2025
//
/////////////////////////////////////////////////////////////////////////

int EvenFactorial(
                    int iNo       // User input number
                 )
{
    int iCnt = 0;
    int iFact = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)         // Check even number
        {
            iFact = iFact * iCnt;
        }
    }
    return iFact;
}   // End of EvenFactorial()

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

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of Number is : %d\n", iRet);

    return 0;
}   // End of main()

/////////////////////////////////////////////////////////////////////////
//
//                              TEST CASES
//
//  1. Input : 10
//     Even numbers : 2 4 6 8 10
//     Output : 3840
//
//  2. Input : 6
//     Even numbers : 2 4 6
//     Output : 48
//
//  3. Input : 5
//     Even numbers : 2 4
//     Output : 8
//
//  4. Input : 1
//     Even numbers : None
//     Output : 1 (default factorial value)
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
