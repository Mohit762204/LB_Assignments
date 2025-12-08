/////////////////////////////////////////////////////////////////////////
//
//                      Required Header Files
//
/////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
//  Function Name : Display
//  Description   : Displays all elements from array that are 
//                  even and divisible by 5
//  Input         : Integer Array, Length
//  Output        : Displays elements on screen
//  Author        : Mohit Sandip Zalte
//  Date          : 08/12/2025
///////////////////////////////////////////////////////////////
void Display(int Arr[], int iLength)
{
    int iCnt = 0;
    int found = 0;

    printf("\nElements that are even and divisible by 5:\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 5 == 0) && (Arr[iCnt] % 2 == 0))
        {
            printf("%d\t", Arr[iCnt]);
            found = 1;
        }
    }

    if(found == 0)
    {
        printf("No elements found that are even and divisible by 5.");
    }
    printf("\n");
}

///////////////////////////////////////////////////////////////
//  Main Function
///////////////////////////////////////////////////////////////
int main()
{
    int iSize = 0;
    int *P = NULL;
    int iCnt = 0;

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

    Display(P, iSize);

    free(P);

    return 0;
}

/////////////////////////////////////////////////////////////////////////
//
//                              TEST CASE
//
//  Enter number of elements: 6
//    Enter 6 elements:
//    Element 1: 10
//    Element 2: 3
//    Element 3: 8
//    Element 4: 5
//    Element 5: 12
//    Element 6: 7
//
//  Output:
//  Elements that are even and divisible by 5:
//  10
//
/////////////////////////////////////////////////////////////////////////
