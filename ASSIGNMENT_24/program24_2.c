/////////////////////////////////////////////////////////////////////////
//
//                      Required Header Files
//
/////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
//  Function Name : Minimum
//  Description   : Returns minimum element from integer array
//  Input         : Integer Array, Length
//  Output        : Integer (Minimum Number)
//  Author        : Mohit Sandip Zalte
//  Date          : 08/12/2025
///////////////////////////////////////////////////////////////
int Minimum(int Arr[], int iLength)
{
    int iMin = Arr[0];
    int iCnt = 0;

    for(iCnt = 1; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }

    return iMin;
}

///////////////////////////////////////////////////////////////
//  Main Function
///////////////////////////////////////////////////////////////
int main()
{
    int iSize = 0;
    int *P = NULL;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    if(iSize <= 0)
    {
        printf("Invalid size. Terminating program.\n");
        return -1;
    }

    P = (int *)malloc(iSize * sizeof(int));

    if(P == NULL)
    {
        printf("Memory allocation failed!\n");
        return -1;
    }

    printf("\nEnter %d elements:\n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Element %d: ", iCnt + 1);
        scanf("%d", &P[iCnt]);
    }

    iRet = Minimum(P, iSize);

    printf("\nMinimum number is: %d\n", iRet);

    free(P);

    return 0;
}

/////////////////////////////////////////////////////////////////////////
//
//                              TEST CASE
//
//  Enter number of elements: 5
//    Enter 5 elements:
//    Element 1: 10
//    Element 2: 45
//    Element 3: 7
//    Element 4: 89
//    Element 5: 23
//
//    Minimum number is: 7
//
/////////////////////////////////////////////////////////////////////////
