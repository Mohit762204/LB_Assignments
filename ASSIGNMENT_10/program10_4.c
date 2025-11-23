/////////////////////////////////////////////////////////////////////////
//
//                      Required Header Files
//
/////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : FhtoCs
//  Description   : Converts temperature from Fahrenheit to Celsius.
//  Input         : Float (Temperature in Fahrenheit)
//  Output        : Double (Temperature in Celsius)
//  Author        : Mohit Sandip Zalte
//  Date          : 30/10/2025
//
/////////////////////////////////////////////////////////////////////////

double FhtoCs(
                float fTemp    // Temperature in Fahrenheit
             )
{
    double Celsius = 0.0;

    Celsius = (fTemp - 32.0) * (5.0 / 9.0);   // Conversion formula

    return Celsius;
}   // End of FhtoCs()

/////////////////////////////////////////////////////////////////////////
//
//                            Main Function
//
/////////////////////////////////////////////////////////////////////////

int main()
{
    float fValue = 0.0;    // Input Fahrenheit value
    double dRet = 0.0;     // Result in Celsius

    printf("Enter Temperature in Fahrenheit : ");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius : %lf\n", dRet);

    return 0;
}   // End of main()

/////////////////////////////////////////////////////////////////////////
//
//                              TEST CASES
//
//  1. Input : 32
//     Output : 0
//
//  2. Input : 98.6
//     Output : 37
//
//  3. Input : 212
//     Output : 100
//
//  4. Input : 0
//     Output : -17.7778
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
