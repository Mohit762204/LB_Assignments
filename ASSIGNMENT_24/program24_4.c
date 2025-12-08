/////////////////////////////////////////////////////////////numbers////////////
//
//                      Required Header Files
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////
//  Function Name : DisplayThreeDigit
//  Description   : Displays all  which contain exactly 3 digits
//  Input         : Integer Array, Length
//  Output        : Prints eligible elements
//  Author        : Mohit Sandip Zalte
//  Date          : 08/12/2025
///////////////////////////////////////////////////////////////

void DisplayThreeDigit(int Arr[], int iLength)
{
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] >= 100 && Arr[iCnt] <= 999)
        {
            printf("%d\n", Arr[iCnt]);
        }
    }
}

//////////////////////////////////////////////////////////////
//  Main Function
//////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0;
    int *P = NULL;
    int iCnt = 0;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

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

    printf("\nNumbers having exactly 3 digits are:\n");

    DisplayThreeDigit(P, iSize);

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
//    Element 2: 345
//    Element 3: 87
//    Element 4: 100
//    Element 5: 999
//    Element 6: 45
//
//  Output:
//    345
//    100
//    999
//
/////////////////////////////////////////////////////////////////////////