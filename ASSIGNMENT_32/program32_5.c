#include <stdio.h>

///////////////////////////////////////////////////////////////
//  Function Name : Pattern
//  Description   : Prints pattern with numbers, border and diagonals
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
        for(j = 1; j <= iCol; j++)
        {
            if(i == 1 || i == iRow)
            {
                printf("%d\t", j);
            }
            else if(j == 1 || j == iCol)
            {
                printf("%d\t", j);
            }
            else if(i == j)
            {
                printf("%d\t", j);
            }
            else if(i + j == iCol + 1)
            {
                printf("%d\t", j);
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }
}

///////////////////////////////////////////////////////////////
//  Main Function
///////////////////////////////////////////////////////////////
int main()
{
    int iValue1 = 0, iValue2 = 0;

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
//      iRow = 5
//      iCol = 5
//
//  Output:
//          	1   2   3   4   5
//              1   2           5  
//              1       3       5 
//              1           4   5    
//              1   2   3   4   5        
//
/////////////////////////////////////////////////////////////////////////