#include <stdio.h>

///////////////////////////////////////////////////////////////
//  Function Name : Pattern
//  Description   : Prints pattern with *, #, $ based on diagonals
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
           
            if(i == 1 || i == iRow || j == 1 || j == iCol)
            {
                printf("*\t");
            }
            else if(i == j)
            {
                printf("*\t");
            }        
            else if(j == (iCol - i + 1))
            {
                printf("*\t");
            }
            else if(j < i)
            {
                printf("#\t");
            }
            else if(j > (iCol - i + 1))
            {
                printf("$\t");
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
//      iRow = 6
//      iCol = 6
//
//  Output:
//          	*	   *	   *	   *	   *	   *
//              *	   #	   # 	   #	   *	   *
//              *	   #	   #	   *	   $	   *
//              *      #	   *	   $ 	   $	   *
//              *	   * 	   $	   $	   $	   *
//              *	   *	   *	   *	   *	   *  
//        
/////////////////////////////////////////////////////////////////////////