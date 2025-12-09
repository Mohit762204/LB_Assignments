/////////////////////////////////////////////////////////////////////////
//
//                      Required Header Files
//
/////////////////////////////////////////////////////////////////////////

#include <stdio.h>

/////////////////////////////////////////////////////////////////////////
//  Function Name : Pattern
//  Description   : Displays pattern of #, $, * based on row-column logic
//                  - '#' printed before diagonal
//                  - '$' printed on diagonal
//                  - '*' printed after diagonal
//  Input         : Integer (iRow), Integer (iCol)
//  Output        : Printed Pattern
//  Author        : Mohit Sandip Zalte
//  Date          : 09/12/2025
/////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(j < i)
            {
                printf("#\t");   // Before diagonal
            }
            else if(j == i)
            {
                printf("$\t");   // On diagonal
            }
            else
            {
                printf("*\t");   // After diagonal
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
//                           TEST CASE
//
//  Input : 5 5
//
//  Output :
//      $   *   *   *   *
//      #   $   *   *   *
//      #   #   $   *   *
//      #   #   #   $   *
//      #   #   #   #   $
//
/////////////////////////////////////////////////////////////////////////
