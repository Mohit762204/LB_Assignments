/////////////////////////////////////////////////////////////////////////
//
//                      Required Header Files
//
/////////////////////////////////////////////////////////////////////////

#include <stdio.h>

/////////////////////////////////////////////////////////////////////////
//  Function Name : Pattern
//  Description   : Displays hollow X-pattern with border in a matrix
//                  of size iRow × iCol
//  Input         : Integer (Rows), Integer (Columns)
//  Output        : Printed Pattern
//  Author        : Mohit Sandip Zalte
//  Date          : 08/12/2025
/////////////////////////////////////////////////////////////////////////
void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            // Border + left diagonal
            if(i == 1 || i == iRow || j == 1 || j == iCol || i == j)
            {
                printf("*\t");
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }
}

/////////////////////////////////////////////////////////////////////////
//  Main Function
/////////////////////////////////////////////////////////////////////////

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
//
//                              TEST CASE
//
//  Input:
//      iRow = 6
//      iCol = 6
//
//  Output:
//
//      *   *   *   *   *   *
//      *   *               *
//      *       *           *
//      *           *       *
//      *               *   *
//      *   *   *   *   *   *
//
/////////////////////////////////////////////////////////////////////////
