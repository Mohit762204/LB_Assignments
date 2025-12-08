/////////////////////////////////////////////////////////////////////////
//
//                      Required Header Files
//
/////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
//  Function Name : Difference
//  Description   : Returns difference between largest and smallest element
//  Input         : Integer Array, Length
//  Output        : Integer (Difference)
//  Author        : Mohit Sandip Zalte
//  Date          : 08/12/2025
///////////////////////////////////////////////////////////////
int Difference(int Arr[], int iLength)
{
    int iMin = Arr[0];
    int iMax = Arr[0];
    int iCnt = 0;

    for(iCnt = 1; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }

        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }

    return iMax - iMin;
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

    printf("Enter %d elements:\n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Element %d: ", iCnt + 1);
        scanf("%d", &P[iCnt]);
    }

    iRet = Difference(P, iSize);

    printf("Difference between largest and smallest number is: %d\n", iRet);

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
//    Smallest = 7
//    Largest  = 89
//
//    Difference = 89 - 7 = 82
//
/////////////////////////////////////////////////////////////////////////
