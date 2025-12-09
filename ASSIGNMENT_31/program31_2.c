/////////////////////////////////////////////////////////////////////////
//
//                      Required Header Files
//
/////////////////////////////////////////////////////////////////////////
#include <stdio.h>

///////////////////////////////////////////////////////////////
//  Function Name : Pattern
//  Description   : Prints a decreasing star pattern based on 
//                  the number of rows and columns provided.
//  Input         : Integer (Rows), Integer (Columns)
//  Output        : Pattern displayed on console
//  Author        : Mohit Sandip Zalte
//  Date          : 09/12/2025
///////////////////////////////////////////////////////////////
void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= (iCol - i + 1); j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}

///////////////////////////////////////////////////////////////
//  Main Function
///////////////////////////////////////////////////////////////
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
/////////////////////////////////////////////////////////////////////////
//                           TEST CASE
//
//  Input : 5 5
//
//  Output :
//          *       *       *       *
//          *       *       *
//          *       *
//          *
//
/////////////////////////////////////////////////////////////////////////