/////////////////////////////////////////////////////////////////////////
//
//                      Required Header Files
//
/////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : ReactArea
//  Description   : Calculates area of a rectangle
//  Input         : float (fWidth), float (fHeight)
//  Output        : double (Area of rectangle)
//  Author        : Mohit Sandip Zalte
//  Date          : 30/10/2025
//
/////////////////////////////////////////////////////////////////////////

double ReactArea(
                    float fWidth,     // Width of rectangle
                    float fHeight     // Height of rectangle
                 )
{
    double dArea = (double)fWidth * fHeight;

    return dArea;
}   // End of ReactArea()

/////////////////////////////////////////////////////////////////////////
//
//                            Main Function
//
/////////////////////////////////////////////////////////////////////////

int main()
{
    float fValue1 = 0.0f;   // Width
    float fValue2 = 0.0f;   // Height
    double dRet = 0.0;      // Area result

    printf("Enter Width : ");
    scanf("%f", &fValue1);

    printf("Enter Height : ");
    scanf("%f", &fValue2);

    dRet = ReactArea(fValue1, fValue2);

    printf("Area of Rectangle : %lf\n", dRet);

    return 0;
}   // End of main()

/////////////////////////////////////////////////////////////////////////
//
//                              TEST CASES
//
//  1. Input : Width = 10, Height = 5
//     Output : 50
//
//  2. Input : Width = 7.5, Height = 3.2
//     Output : 24.00
//
//  3. Input : Width = 1, Height = 1
//     Output : 1
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
