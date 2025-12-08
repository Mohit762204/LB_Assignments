/////////////////////////////////////////////////////////////////////////
//
//                      Required Header Files
//
/////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
//  Function Name : DisplayDigitSum
//  Description   : Displays summation of digits of each number
//  Input         : Integer Array, Length
//  Output        : Prints summation of digits of each number
//  Author        : Mohit Sandip Zalte
//  Date          : 08/12/2025
///////////////////////////////////////////////////////////////
void DisplayDigitSum(int Arr[], int iLength)
{
    int iCnt = 0, iDigit = 0, iSum = 0, temp = 0;

    printf("\nSummation of digits of each number:\n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        temp = Arr[iCnt];
        iSum = 0;

        while(temp != 0)
        {
            iDigit = temp % 10;
            iSum += iDigit;
            temp = temp / 10;
        }

        printf("Number: %d  -->  Digit Sum: %d\n", Arr[iCnt], iSum);
    }
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

    DisplayDigitSum(P, iSize);

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
//    Element 2: 345
//    Element 3: 87
//    Element 4: 100
//    Element 5: 999
//
//  Output:
//    Number: 10   --> Digit Sum: 1
//    Number: 345  --> Digit Sum: 12
//    Number: 87   --> Digit Sum: 15
//    Number: 100  --> Digit Sum: 1
//    Number: 999  --> Digit Sum: 27
//
/////////////////////////////////////////////////////////////////////////
