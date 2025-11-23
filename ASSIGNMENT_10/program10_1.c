/////////////////////////////////////////////////////////////////////////
//
//                      Required Header Files
//
/////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : CircleArea
//  Description   : Calculates area of a circle using radius
//  Input         : float (fRadius)
//  Output        : double (Area of circle)
//  Author        : Mohit Sandip Zalte
//  Date          : 30/10/2025
//
/////////////////////////////////////////////////////////////////////////

double CircleArea(
                    float fRadius      // User input radius
                 )
{
    const float PI = 3.14f;           // Constant value of PI
    double dArea = PI * fRadius * fRadius;

    return dArea;
}   // End of CircleArea()

/////////////////////////////////////////////////////////////////////////
//
//                            Main Function
//
/////////////////////////////////////////////////////////////////////////

int main()
{
    float fValue = 0.0f;     // To store radius
    double dRet = 0.0;       // To store area

    printf("Enter Radius : ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle : %f\n", dRet);

    return 0;
}   // End of main()

/////////////////////////////////////////////////////////////////////////
//
//                              TEST CASES
//
//  1. Input : 5
//     Area = 3.14 * 5 * 5 = 78.50
//
//  2. Input : 7.5
//     Area = 3.14 * 7.5 * 7.5 = 176.625
//
//  3. Input : 1
//     Area = 3.14 * 1 * 1 = 3.14
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
