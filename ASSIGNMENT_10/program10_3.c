/////////////////////////////////////////////////////////////////////////
//
//                      Required Header Files
//
/////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : KMtoMeter
//  Description   : Converts kilometers into meters.
//  Input         : Integer (Distance in KM)
//  Output        : Integer (Distance in meters)
//  Author        : Mohit Sandip Zalte
//  Date          : 30/10/2025
//
/////////////////////////////////////////////////////////////////////////

int KMtoMeter(
                int iNo       // Distance in kilometers
             )
{
    int Meter = 0;

    Meter = iNo * 1000;      // 1 KM = 1000 meters

    return Meter;
}   // End of KMtoMeter()

/////////////////////////////////////////////////////////////////////////
//
//                            Main Function
//
/////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;   // To store user input (KM)
    int iRet = 0;     // To store result (Meters)

    printf("Enter Distance in KM : ");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in Meters : %d\n", iRet);

    return 0;
}   // End of main()

/////////////////////////////////////////////////////////////////////////
//
//                              TEST CASES
//
//  1. Input : 5
//     Output : 5000
//
//  2. Input : 1
//     Output : 1000
//
//  3. Input : 12
//     Output : 12000
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
