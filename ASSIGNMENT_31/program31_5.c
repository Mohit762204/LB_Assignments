#include <stdio.h>

///////////////////////////////////////////////////////////////
//  Function Name : Pattern
//  Description   : Prints diagonal increasing number pattern
//  Input         : Integer (Rows), Integer (Columns)
//  Output        : Pattern on screen
//  Author        : Mohit Sandip Zalte
//  Date          : 09/12/2025
///////////////////////////////////////////////////////////////
void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        // Print leading tabs before numbers
        for(j = 1; j < i; j++)
        {
            printf("\t");
        }

        // Print increasing numbers from i to iCol
        for(j = i; j <= iCol; j++)
        {
            printf("%d\t", j);
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
//
//                              TEST CASE
//
//  Input:
//      iRow = 4
//      iCol = 4
//
//  Output:
//          1	2	3	4	
//              2	3	4
//                  3	4
//                      4
//        
//
/////////////////////////////////////////////////////////////////////////