/////////////////////////////////////////////////////////////////////////
//
//                      Required Header Files
//
/////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : DollarToINR
//  Description   : Converts given Dollar value to INR.
//  Input         : Integer (Dollar value)
//  Output        : Integer (Equivalent INR)
//  Author        : Mohit Sandip Zalte
//  Date          : 29/10/2025
//
/////////////////////////////////////////////////////////////////////////

int DollarToINR(
                    int iNo        // Amount in Dollars
                )
{
    int iRate = 70;                // Conversion rate: 1 Dollar = 70 INR

    return iRate * iNo;            // Convert Dollars to INR
}   // End of DollarToINR()

/////////////////////////////////////////////////////////////////////////
//
//                            Main Function
//
/////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;     // To store user input (Dollars)
    int iRet = 0;       // To store converted INR value

    printf("Enter Number (Dollars) : ");
    scanf("%d", &iValue);

    iRet = D
