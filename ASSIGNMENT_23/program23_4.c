/////////////////////////////////////////////////////////////////////////
//                      Required Header Files
/////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
//  Function Name : Range
//  Description   : Prints all array elements between given range
//  Input         : Integer Array, Length, Start value, End value
//  Output        : Prints eligible elements
//  Author        : Mohit Sandip Zalte
//  Date          : 07/12/2025
///////////////////////////////////////////////////////////////
void Range(int arr[], int length, int start, int end)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < length; iCnt++)
    {
        if(arr[iCnt] >= start && arr[iCnt] <= end)
        {
            printf("%d ", arr[iCnt]);
        }
    }

    printf("\n");
}

///////////////////////////////////////////////////////////////
//  Main Function
///////////////////////////////////////////////////////////////
int main()
{
    int iSize = 0;
    int iValue1 = 0;
    int iValue2 = 0;
    int *p = NULL;
    int iCnt = 0;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    if(iSize <= 0)
    {
        printf("Invalid size. Terminating program.\n");
        return -1;
    }

    printf("Enter the starting point: ");
    scanf("%d", &iValue1);

    printf("Enter the ending point: ");
    scanf("%d", &iValue2);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Memory allocation failed!\n");
        return -1;
    }

    printf("\nEnter %d elements:\n", iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Element %d: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    printf("\nElements between %d and %d:\n", iValue1, iValue2);

    Range(p, iSize, iValue1, iValue2);

    free(p);

    return 0;
}
/////////////////////////////////////////////////////////////////////////
//
//                              TEST CASE
//
//    Enter number of elements: 6
//    Enter the starting point: 20
//    Enter the ending point: 50
//
//    Enter 6 elements:
//    Element 1: 10
//    Element 2: 25
//    Element 3: 35
//    Element 4: 50
//    Element 5: 70
//    Element 6: 80
//
//    Elements between 20 and 50:
//    25 35 50 
//
/////////////////////////////////////////////////////////////////////////
