/////////////////////////////////////////////////////////////////////////
//
//                      Required Header Files
//
/////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : LastOccurrence
//  Description   : Returns the index of the last occurrence of a given number in the array.
//  Input         : Integer Array, Integer (Size of array), Integer (Number to search)
//  Output        : Integer (Index of last occurrence, -1 if not found)
//  Author        : Mohit Sandip Zalte
//  Date          : 05/12/2025
//
/////////////////////////////////////////////////////////////////////////

int LastOccurrence(
                    int Arr[],       // Array of numbers
                    int iLength,     // Number of elements
                    int iNo          // Number to search
                  )
{
    int iCnt = 0;

    for(iCnt = iLength - 1; iCnt >= 0; iCnt--)   // Traverse from last index
    {
        if(Arr[iCnt] == iNo)                     // Check if element matches
        {
            return iCnt;                          // Return index of last occurrence
        }
    }

    return -1;                                   // Number not found
}   // End of LastOccurrence()

/////////////////////////////////////////////////////////////////////////
//
//                            Main Function
//
/////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0;      // Number of elements
    int iCnt = 0;       // Loop counter
    int iValue = 0;     // Number to search
    int iRet = -1;      // Index of last occurrence
    int *p = NULL;      // Pointer for dynamic array

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));      // Memory allocation
    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Element %d: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    printf("Enter number to search: ");
    scanf("%d", &iValue);

    iRet = LastOccurrence(p, iSize, iValue);

    if(iRet == -1)
    {
        printf("There is no such number\n");
    }
    else
    {
        printf("Last occurrence is at index: %d\n", iRet);
    }

    free(p);    // Release memory

    return 0;
}   // End of main()

/////////////////////////////////////////////////////////////////////////
//
//                              TEST CASES
//
//  1. Input : N = 6, Elements = 10 20 30 20 40 20, iNo = 20
//     Output : 5
//
//  2. Input : N = 5, Elements = 1 2 3 4 5, iNo = 3
//     Output : 2
//
//  3. Input : N = 4, Elements = 7 7 7 7, iNo = 7
//     Output : 3
//
//  4. Input : N = 3, Elements = 5 6 8, iNo = 10
//     Output : -1
//
/////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//
//
//  Time Complexity : O(n)
//      (Traverse the array once from end)
//
//  Space Complexity : O(n)
//      (Dynamic array used)
//  Constant extra space otherwise
//
//////////////////////////////////////////////////////////////////
