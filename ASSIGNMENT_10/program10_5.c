/////////////////////////////////////////////////////////////////////////
//
//                      Required Header Files
//
/////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : SquareMeter
//  Description   : Converts area from square feet to square meters.
//  Input         : Integer (Area in square feet)
//  Output        : Double (Area in square meters)
//  Author        : Mohit Sandip Zalte
//  Date          : 30/10/2025
//
/////////////////////////////////////////////////////////////////////////

double SquareMeter(
                    int iValue      // Area in square feet
                  )
{
    double dMeter = 0.0;

    dMeter = iValue * 0.0929;       // Conversion factor

    return dMeter;
}   // End of SquareMeter()

/////////////////////////////////////////////////////////////////////////
//
//                            Main Function
//
/////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;        // Input in square feet
    double dRet = 0.0;     // Output in square meters

    printf("Enter area in square feet : ");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter is : %lf\n", dRet);

    return 0;
}   // End of main()

/////////////////////////////////////////////////////////////////////////
//
//                              TEST CASES
//
//  1. Input : 1
//     Output : 0.0929
//
//  2. Input : 100
//     Output : 9.29
//
//  3. Input : 250
//     Output : 23.225
//
//  4. Input : 0
//     Output : 0
//
/////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//
//                          Time Complexity :
//
//  Only arithmetic operations.
//  Therefore : O(1)
//
//                          Space Complexity :
//
//  Constant space used.
//  Therefore : O(1)
//
//////////////////////////////////////////////////////////////////
